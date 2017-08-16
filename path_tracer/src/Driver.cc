#include "Log_Reader.h"
#include "Path_Constructor.h"

int main(int argc, char** argv) {
  Log_Reader reader;

  Path_Constructor pc(&reader);
  pc.construct_all_paths();
  //reader.print_all_logs();
}
