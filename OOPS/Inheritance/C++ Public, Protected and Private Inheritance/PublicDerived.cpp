//Public :everywhere
//Protected: in class and derived class
//Private: in class only
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

class Derived: public Base{
    //x is private
    //y is protected
    //z is public
    //so remains same
    public:
    void display(){
        cout<<"Public: "<<z<<endl;
        cout<<"Protected: "<<y<<endl;
    }
};

int main(){
    Derived d;
    cout<<"Directly: "<<d.z<<endl;
    d.display();
    return 0;
}

//Output
// Directly: 3
// Public: 3
// Protected: 2