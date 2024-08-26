#include<iostream>
#include<string>
using namespace std;

class Base{
    private:
        int x=1;
    protected:
        int y=2;
    public:
        int z=3;
};

class Derived: protected Base{
    //x is private
    //y,z came here and became protected
    public:
    void display(){
        cout<<"Public: "<<z<<endl;
        cout<<"Protected: "<<y<<endl;
    }
};

int main(){
    Derived d;
    //cout<<"Directly: "<<d.z<<endl;
    d.display();
    return 0;
}

// Public: 3
// Protected: 2