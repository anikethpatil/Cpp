//execute one by one
#include<iostream>
using namespace std;
int main(){
    int a=10;
    int* ptr;
    ptr=&a;
    cout<<"Address "<<&a<<endl;
    cout<<"Address using ptr "<<ptr<<endl;
    cout<<"Value "<<*ptr<<endl;
    ptr++;
    cout<<"after: "<<ptr<<endl;
}

// Address 0x7ffc01a51ad4
// Address using ptr 0x7ffc01a51ad4
// Value 10
// after: 0x7ffc01a51ad8

//Pointer as arrays
int main(){
    int arr[]={10,20,30};
    //cout<<*arr<<endl;
    for(int i=0;i<3;i++){
        cout<<*(arr+i)<<endl;
    }
}

// 10
// 20
// 30

//pointer to pointer
int main(){
    int a=10;
    int *p;
    p=&a;
    int **q;
    q=&p;
    cout<<"Value of a "<<**q<<endl;
    cout<<"i.e." <<*p<<endl;
    cout<<"Value of p i.e. address of a "<<*q<<endl;
    cout<<"i.e. "<<p<<endl;
}

// Value of a 10
// i.e.10
// Value of p i.e. address of a 0x7fff387b2124
// i.e. 0x7fff387b2124


//call by value
void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
    cout<<"INsidfe"<<a<<" "<<b<<endl;
}
int main(){
    int a=2;
    int b=3;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
}

//call by reference
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a=2;
    int b=3;
    swap(&a,&b);
    cout<<a<<" "<<b<<endl;
}

//2nd example
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    int a=10;
    int b=20;
    cout<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
    return 0;
}
// 10 20
// 20 10

//passing address as ptr to function=call by reference
void increment(int *a){
    ++*a;
}
int main(){
    int a=2;
    increment(&a);
    cout<<a<<endl;
    return 0;
}