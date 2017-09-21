#! /usr/bin/env python

# © Copyright [2017] Hewlett Packard Enterprise Development LP
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions are met:
#   1. Redistributions of source code must retain the above copyright notice,
#      this list of conditions and the following disclaimer.
#   2. Redistributions in binary form must reproduce the above copyright notice,
#      this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.
#   3. Neither the name of the copyright holder nor the names of its contributors
#      may be used to endorse or promote products derived from this software without specific prior written permission.

# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING,
# BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
# IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY,
# OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
# OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
# OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
# EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

import sys, string, os, popen2, shutil, platform, subprocess, pprint, time, argparse
import util, commands
from math import sqrt
import plotly
import plotly.graph_objs as go
from plotly import tools
from enum import Enum
from decimal import Decimal

class CompType(Enum):
    NODE = 0
    NIC = 1
    SWITCH = 2

#set paths
parser = argparse.ArgumentParser(description='Visualizing network behavior')
parser.add_argument('-t', type=str, default="paths", help='path/to/packet/traces')

args = parser.parse_args()
#print(args)
PATHS_FOLDER = args.t

def format_scientific(n):
    a = '%E' % Decimal(n)
    return a

def generate_hover_text(hop_list):
    comp_id = hop_list[0]
    comp_type = CompType(int(hop_list[1]))
    link_delay = hop_list[-2]
    comp_delay = hop_list[-1]

    hover_text = ""
    if comp_type == CompType.SWITCH:
        hover_text = hover_text + "Switch " + comp_id + "\n"
    elif comp_type == CompType.NODE:
        hover_text = hover_text + "NODE " + comp_id + "\n"
    elif comp_type == CompType.NIC:
        hover_text = hover_text + "NIC " + comp_id + "\n"
    hover_text = hover_text + "Component delay:" + str(format_scientific(comp_delay)) + "\n"
    hover_text = hover_text + "Link delay:" + str(format_scientific(link_delay)) + "\n"

    return hover_text

def generate_color(hop_list):
    comp_id = int(hop_list[0])
    comp_type = int(hop_list[1])

    r_rgb = str(comp_type*127)
    g_rgb = str(int(comp_id/256)) #comp id is not >= 256*256
    b = int(comp_id%256)
    b_rgb = ""
    if b % 2 == 0:
        b_rgb = str(255-b)
    else:
        b_rgb = str(b)

    color_str = "rgb(" + r_rgb + "," + g_rgb + "," + b_rgb + ")"
    return color_str

#generate graph for each file
def generate_graph_data(filename):
    xdata = []
    paths = []
    hover_text = []
    #colors = []
    
    file = open(filename, 'r')
    lines = file.read().splitlines()

    #parse the files and add the data to the paths array
    #log entry format: Component id, component type, Arrival time, departure time, link delay, component delay
    #File format:
    # Line1Item1;Line1Item2
    # Line2Item1;Line2Item2;Line2Item3
    # Line3Item1
    #Paths format [ [Line1Item1, Line2Item1, Line3Item1], [Line1Item2, Line2Item2, 0], [0,Line2Item3,0] ]
    line_cnt = 0
    max_comp_time = 0.0
    min_start_time = 0.0
    max_start_time = 0.0
    for line in lines:
        hops = line.split(";");
        hop_cnt = 0
        sum_comp_time = 0.0
        for hop in hops:
            if hop:
                hop_stats = hop.split(",");
                comp_time = float(hop_stats[-1])
                sum_comp_time = sum_comp_time + comp_time

                if hop_cnt == 0:
                    start_time = float(hop_stats[3])
                    xdata.append(start_time)
                    if start_time > max_start_time:
                        max_start_time = start_time

                    if start_time < min_start_time:
                        min_start_time = start_time

                #if the number of entries in path
                if len(paths) == hop_cnt:
                    new_data = []
                
                    #first pre populate with zeros
                    for i in range(line_cnt):
                        new_data.append(0)

                    #next add the newly created data to paths list
                    paths.append(new_data)
                paths[hop_cnt].append(comp_time)

                if len(hover_text) == hop_cnt:
                    new_data = []
                
                    #first pre populate with zeros
                    for i in range(line_cnt):
                        new_data.append("")

                    #next add the newly created data to hover_text list
                    hover_text.append(new_data)
                hover_text[hop_cnt].append(generate_hover_text(hop_stats))

                # if len(colors) == hop_cnt:
                #     new_data = []
                
                #     #first pre populate with zeros
                #     for i in range(line_cnt):
                #         new_data.append("")

                #     #next add the newly created data to colors list
                #     colors.append(new_data)
                # colors[hop_cnt].append(generate_color(hop_stats))
                
                hop_cnt = hop_cnt + 1

        line_cnt = line_cnt + 1
        if sum_comp_time > max_comp_time:
            max_comp_time = sum_comp_time
    
    file.close()

    #print colors
    #return paths, hover_text, colors, max_comp_time
    return paths, hover_text, xdata, max_comp_time, max_start_time, min_start_time
    #print paths

#generate heat map data from each file
def generate_heat_data(filename,hx_data,sz):
    h_data = [0.0]*sz
    h_hover_text = [""]*sz
    
    file = open(filename, 'r')
    lines = file.read().splitlines()

    line_cnt = 0
    for line in lines:
        hops = line.split(";");
        hop_cnt = 0
        start_time = 0.0
        hh_text = ""
        for hop in hops:
            if hop:
                hop_stats = hop.split(",");

                if hop_cnt == 0:
                    start_time = float(hop_stats[3])                

                if not hh_text:
                    hh_text = hh_text + generate_hover_text(hop_stats)
                else:
                    hh_text = hh_text + " --> " + generate_hover_text(hop_stats)
                
                #create hover text
                if hop_cnt == len(hop_stats) - 1:
                    end_time = float(hop_stats[2])
                    insert_idx = hx_data.index(start_time)
                    h_data[insert_idx] = end_time - start_time
                    h_hover_text[insert_idx] = hh_text

                hop_cnt = hop_cnt + 1
    
    file.close()
    #print h_data
    return h_data,h_hover_text

def generate_heat_map(hxdata,hydata,hzdata,hovertext):
    h_data = [go.Heatmap(
        z=hzdata,
        x=hxdata,
        y=hydata,
        colorscale='Viridis',
        text=hovertext
    )]

    h_layout = go.Layout(
        title='Heatmap of network interaction',
        hovermode='closest',
        xaxis = dict(ticks='', nticks=36),
        yaxis = dict(ticks='' ),
    )

    h_fig = go.Figure(data=h_data, layout=h_layout)
    plotly.offline.plot(h_fig, filename='heatmap.html')

#def generate_graphs(all_paths, all_hover_text, all_colors, max_comp_time, node_ids):
def generate_graphs(all_paths, all_hover_text, all_xdata, max_comp_time, max_x_axis, min_x_axis, node_ids):
    #generate plotly graph
    i = 0

    for paths in all_paths:
        traces = []
        j = 0
        for path in paths:
            trace = go.Bar(
                x=all_xdata[i],
                y=path,
                text=all_hover_text[i][j],
                # marker=dict(
                #     color=all_colors[i][j]),
            )
            traces.append(trace)
            j = j+1

        #print max_comp_time
        layout = go.Layout(
            title="Messages originating from Node " + str(node_ids[i]),
            barmode='stack',
            hovermode='closest',
            xaxis=dict(
                title='Message start time(nano seconds)',
                titlefont=dict(
                    size=16,
                    color='rgb(107, 107, 107)'
                ),                
                range=(min_x_axis,max_x_axis),
                ),
            yaxis=dict(
                title='Delay time(nano seconds)',
                titlefont=dict(
                    size=16,
                    color='rgb(107, 107, 107)'
                ),
                range=(0,max_comp_time),
                # autotick=False,
                # ticks='outside',
                # tick0=0,
                # dtick=1000,
                # ticklen=1000,
                # tickwidth=4,
                # tickcolor='#000'
            )
        )

        fig = go.Figure(data=traces, layout=layout)
        filename = "paths_bar_" + node_ids[i] + ".html"
        plotly.offline.plot(fig, filename=filename)

        i = i+1

def merge_graphs():
    files = [f for f in os.listdir('.') if os.path.isfile(f)]
    op_file = open('all_graphs.html', 'w')
    for filename in files:
        if filename.endswith(".html") and filename != "all_graphs.html":
            ip_file = open(filename, 'r')
            while True:
                data = ip_file.read(100000)
                if data == '':
                    break
                op_file.write(data)
            ip_file.close()
    op_file.close()
             
    
#read each file in paths folder
util.chdir(PATHS_FOLDER)
all_paths = []
all_xdata = []
all_hover_text = []
#all_colors = []
max_y_axis = 0
min_x_axis = 0
max_x_axis = 0
node_ids = []
files = [f for f in os.listdir('.') if os.path.isfile(f)]
for filename in files:
    if filename.endswith(".log"):
        und_index = filename.index('_');
        dot_index = filename.index('.');
        src_node_id = filename[und_index+1:dot_index]
        #paths, hover_text, colors, file_max_y_axis = generate_graph_data(filename)
        paths,hover_text,xdata,file_max_y_axis, file_max_start_time,file_min_start_time = generate_graph_data(filename)
        all_paths.append(paths)
        all_hover_text.append(hover_text)
        #all_colors.append(colors)
        all_xdata.append(xdata)
        node_ids.append(src_node_id)
        if file_max_y_axis > max_y_axis:
            max_y_axis = file_max_y_axis

        if file_max_start_time > max_x_axis:
            max_x_axis = file_max_start_time

        if file_min_start_time < min_x_axis:
            min_x_axis = file_min_start_time
            
#generate_graphs(all_paths,all_hover_text, all_colors,int(max_y_axis), node_ids)
generate_graphs(all_paths,all_hover_text, all_xdata, int(max_y_axis), int(max_x_axis), int(min_x_axis), node_ids)
merge_graphs()

heat_x_axis = set()
for xd in all_xdata:
    heat_x_axis.update(xd)

#print heat_x_axis
heat_xdata = list(heat_x_axis)
heat_xdata.sort()
size_hx = len(heat_xdata)

heat_zdata = [[] for i in range(len(node_ids))]#[0] * len(heat_xdata)
heat_ydata = [[] for i in range(len(node_ids))]
heat_hoverdata = [[] for i in range(len(node_ids))]

for filename in files:
    if filename.endswith(".log"):
        und_index = filename.index('_');
        dot_index = filename.index('.');
        src_node_id = int(filename[und_index+1:dot_index])
        heat_ydata[src_node_id]=src_node_id
        hz_data,hz_hover_data = generate_heat_data(filename, heat_xdata, size_hx)
        heat_zdata[src_node_id]=hz_data
        heat_hoverdata[src_node_id]=hz_hover_data

heat_ydata.sort()        
#print heat_xdata
#print len(heat_xdata)
#print heat_ydata
#print len(heat_ydata)
#print heat_zdata
#print len(heat_zdata)

generate_heat_map(heat_xdata,heat_ydata,heat_zdata,heat_hoverdata)
