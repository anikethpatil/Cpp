#include<iostream>
#include<string>
using namespace std;

class Person{
public:
    string name;
    int age;
    Person(string name,int age){
        this->name=name;
        this->age=age;
    }
};
class Patient: public Person{
public:
    int ward;
    Patient(string name,int age,int ward):Person(name,age){
        this->ward=ward;
    }
    void getInfo(){
        cout<<name<<" "<<age<<" "<<ward<<endl;
    }
};

int main(){
    Patient p1("Anil",12,10);
    p1.getInfo();
}