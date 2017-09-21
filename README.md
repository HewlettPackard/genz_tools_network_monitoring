This is the README file for the Network Performance Monitoring (NWPM) Tool. The tool tracks packets (using sampling) as they flow through the network and attributes any performance problems, detected in the network, to the application source code. This enables the programmer to identify parts of the program that need to be refactored in order to fix performance problems.

The NWPM tool takes a skeletonized MPI program as input. The tool executes the program and collects performance statistics from the execution. Then, in an offline analysis, the tool generates a set of graphs that aid the programmer in identifying performance problems in the network.

Instructions on using NWPM tool
-------------------------------

The tool contains 3 modules. They are,
1) Performance Stats Collection - This is performed using SST/Macro, a simulator for large-scale interconnection networks.
2) Path tracing - This performs analysis on the performance statistics
3) Performance Visualization - Generates graphs to visualize performance problems.

The instructions to build each module are as follows. We refer to the top level directory of the repository as NWPM_HOME.

1) Building SST/Macro
      cd NWPM_HOME/sst-macro-7.1.0
      mkdir build; cd build
      ../configure --prefix=<PATH_TO_INSTALL_DIRECTORY> CC=mpicc CXX=mpicxx

SST/Macro requires the latest version of OpenMPI (3.1). If any of the libraries are installed on the non-default path(i.e. not /usr/lib) then use LDFLAGS to provide the path to the library.

> make; make install
Use -j option to run make in parallel

   SST/Macro creates a set of binary files in the installation directory. Add the directory to the PATH variable.
   > export PATH=<PATH_TO_INSTALL_DIRECTORY>/bin:$PATH

2) Building Path Tracer
   > cd NWPM_HOME/path_tracer
   > make
   This creates a binary called pathtracer at the path NWPM_HOME/path_tracer

3) The performance visualization uses Plotly, a graphing tool written in python. To install plotly refer to instructions at https://plot.ly/python/getting-started/.

Using NWPM tool on a skeletonized MPI program

We describe the steps to use NWPM tool on the example send_recv program in the SST/Macro skeletons directory.

1) > cd NWPM_HOME/sst-macro-7.1.0/skeletons/sendrecv
   > make
   > ./runsendrecv -f parameters.ini
   The parameters.ini file specifies the simulation machine configurations.
   The output of this step is a set of log files that contains performance statistics for all the tracked packets.

2) Next, execute the path tracer on the set of log files
   > NWPM_HOME/path_tracer/pathtracer
   This generates a set of path log files that specify the path taken by each packet as it flows thorough the network and also attributes performance statistics to each hop on the path.

3) Generate graphs using path visualizer. We provide a python script to generate the graphs. The script takes as input the path to directory containing the path log files generated by the path tracer.
   > cd NWPM_HOME/path_visualizer
   > python visualize_paths.py -p <PATH_TO_DIR_CONTAINING_PATH_LOG_FILES>
   The path visualizer generates two kinds of graphs. First, it generates a heatmap that shows time taken from source to destination for each tracked packet. The points that appear darker on the heatmap correspond to packets that took longer time than other tracked packets.
   Along with the heapmap, we generate a stacked bar graph for each process from which a tracked packet originated. Each stacked bar represents the total time spent by a tracked packet originating from the process. Each segment of the stacked bar shows the time the tracked packet spent at each hop along its path from the source to destination.
