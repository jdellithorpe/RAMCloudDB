#include <cstdlib>
#include <string>

#include "RamCloud.h"

using namespace std;

class Graph {
  private:
    string coordinatorLocator;
    string graphName;

  public:
    Graph(string coordinatorLocator, string graphName);
};
