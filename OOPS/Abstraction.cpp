#include<iostream>
#include<string>
using namespace std;

class Shape{//abstract class
        virtual void draw()=0;//Pure virtual; function
};

class Circle: public Shape{
    public:
    void draw(){
        cout<<"I am a circle"<<endl;
    }
};

int main(){
    Circle c1;
    c1.draw();
    return 0;
}