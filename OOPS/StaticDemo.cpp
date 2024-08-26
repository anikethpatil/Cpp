#include<iostream>
#include<string>
using namespace std;

class A{
    public:
    static int x;
    void func(){
        x++;
        cout<<x<<endl;
    }
};

int A::x = 0;

int main(){
    A obj1;
    A obj2;
    obj1.x=0;
    obj2.x=0;
    obj1.func();
    obj2.func();
    return 0;
}

//output
//1
//2