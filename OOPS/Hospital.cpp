#include<iostream>
#include <string>
using namespace std;
//To void shallow cpy and handle deep copy
//Concept of Destructors
class Hospital{
public:
  string name;
  int* wardPtr;
  
  Hospital(string name,int ward){
      this->name=name;
      wardPtr=new int;
      *wardPtr=ward;
  }
  Hospital(Hospital &obj){
      cout<<"Not Default\n";
      this->name=obj.name;
      wardPtr=new int;
      *wardPtr=*obj.wardPtr;
  }
  //destructor
  ~Hospital(){
      cout<<"I delete them Dude\n";
      delete wardPtr;//memory leak if not done
  }
  void displayInfo(){
      cout<<name<<" "<<*wardPtr<<endl;
  }
};

int main(){
    Hospital h1("Anil",10);
    Hospital h2(h1);
    *(h2.wardPtr)=12;
    h1.displayInfo();
    return 0;
}