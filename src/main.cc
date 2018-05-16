#include <cstdlib>

#include "Graph.h"

using namespace std;

int main() {
  Graph g("basic+udp:host=10.10.1.7,port=12246", "ldbc_snb_sf0001");
  return 0;
}
