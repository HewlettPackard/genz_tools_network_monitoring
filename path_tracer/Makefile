TARGET   = pathtracer
mkfile_path := $(abspath $(lastword $(MAKEFILE_LIST)))
#TP_ROOT := $(notdir $(patsubst %/,%,$(dir $(mkfile_path))))
CXX=g++
LINKER=g++
OPT=-O0
CXXFLAGS+=-g -Wall -std=c++11
INCPATH=-I./include

# change these to set the proper directories where each files shoould be
SRCDIR = src
INCDIR = include
OBJDIR = obj
BINDIR = bin

SOURCES  := $(wildcard $(SRCDIR)/*.cc)
INCLUDES := $(wildcard $(INCDIR)/*.h)
OBJECTS  := $(SOURCES:$(SRCDIR)/%.cc=$(OBJDIR)/%.o)
rm       = rm -rf

all:
	@test -d $(OBJDIR) || mkdir $(OBJDIR)
	@make tool

tool: $(OBJECTS)
	@$(LINKER) $(OBJECTS) $(LDFLAGS) -o $(TARGET)
	@echo "Linking complete!"

$(OBJECTS): $(OBJDIR)/%.o : $(SRCDIR)/%.cc
	@$(CXX) $(OPT) $(CXXFLAGS) -c $< $(INCPATH) -o $@
	@echo "Compiled "$<" successfully!"

.PHONY: clean

clean:
	@$(rm) $(TARGET) $(OBJDIR)
	@$(rm) *~
	@echo "Cleanup complete!"
