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

// #include <iostream>
// #include <string>
// using namespace std;

// class A{
//     public:
//     string name;
//     int age;
//     A(string name,int age){
//         this->name=name;
//         this->age=age;
//     }
//     ~A(){
//         cout<<"Destructor called"<<endl;
//     }
// };
// int main(){
//     //Static
//     A obj1("Anne Frank",16);
//     //Dynamic
//     A *obj2=new A("Anne",18);
//     delete(obj2);
//     return 0;
// }