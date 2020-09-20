#include <string>

using namespace std;

class Type {
  private:
    string typeName;
    float size;
  public:

    Type(string name, int sOf){
      setTypeName(name);
      setSize(sOf);
    }

    void setSize(int sOf){
      size = sOf;
    }

    void setTypeName(string name){
      typeName = name;
    }

    string getTypeName(){
      return typeName;
    }

    float getSize(){
      return size;
    }
};
