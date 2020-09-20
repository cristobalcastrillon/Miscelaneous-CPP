#include <iostream>
#include <vector>
#include "Type.cpp"

using namespace std;

int main() {
  vector<Type> types;

  Type byte_("Byte", sizeof(byte));
  types.push_back(byte_);

  Type boolean("Boolean", sizeof(bool));
  types.push_back(boolean);

  Type character("Character", sizeof(char));
  types.push_back(character);

  Type integer("Integer", sizeof(int));
  types.push_back(integer);

  Type long_("Long", sizeof(long));
  types.push_back(long_);

  Type floating("Float", sizeof(float));
  types.push_back(floating);

  Type db("Double", sizeof(double));
  types.push_back(db);

  //Sorting algorithm...
  
  for(int i = 0; i < types.size(); i++){
    cout << "Type: " << types.at(i).getTypeName() << "  Size: " << types.at(i).getSize() << " Bytes  " << types.at(i).getSize()*8 << " bits" << endl;
  }
}