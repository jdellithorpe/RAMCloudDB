#include <string>

using namespace std;

class Vertex {
  private:
  
  public:
    string type;
    string label;

    Vertex(string type, string label) {
      this->type = type;
      this->label = label;
    }
};
