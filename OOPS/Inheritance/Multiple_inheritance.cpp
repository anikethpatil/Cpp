#include<iostream>
#include<string>
using namespace std;

class Student{
public:
    string name;
    int age;
    double cgpa;
};

class Cr{
public:
    string quality;
};

class CollegePresident: public Cr,public Student{
public:
    long int vote;
    void display(){
        cout<<name<<" "<<age<<" "<<cgpa<<" "<<quality<<" "<<vote<<endl;
    }
};

int main(){
    CollegePresident s1;
    s1.name="Anil";
    s1.age=21;
    s1.cgpa=8.77;
    s1.quality="Leader";
    s1.vote=100000;
    s1.display();
    return 0;
}