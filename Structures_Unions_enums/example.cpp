#include <iostream>
#include<string>
using namespace std;

typedef struct Patient{
    string name;
    int ward;
    float Due;
}P;

union doctor{
    float sal;
    long int id;
};

int main() {
    //enum
    enum Episode{UltaChasma,LakshmiBaramma,Putgowri};
    cout<<UltaChasma<<endl;
    
    //union = share the same memory location
    /*The size of the union is determined by the size of its largest member.*/
    //only store one value at a time
    union doctor d1;
    d1.id=1234;
    d1.sal=12000;
    cout<<d1.sal<<endl;
    
    //structures
    P p1;
    p1.name="Anil";
    p1.ward=12;
    p1.Due=25000;
    cout<<p1.name<<" "<<p1.ward <<" "<<p1.Due<<endl;
    return 0;
}

// output
// 0
// 12000
// Anil 12 25000