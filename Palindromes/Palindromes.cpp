#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"Enter the number of rows:";
    cin>>rows;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
}

// Enter the number of rows:5
// * 
// * *
// * * *
// * * * *
// * * * * *

#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"Enter the number of rows:";
    cin>>rows;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<"\n";
    }
}

// Enter the number of rows:5
// 1
// 12
// 123
// 1234
// 12345

#include<iostream>
using namespace std;
int main(){
    char value,alphabet='A';
    cout<<"Enter the last alphabet:";
    cin>>value;
    for(int i=1;i<=value-'A'+1;i++){
        for(int j=1;j<=i;j++){
            cout<<alphabet;
        }
        alphabet++;
        cout<<"\n";
    }
}

// Enter the last alphabet:E
// A
// BB
// CCC
// DDDD
// EEEEE

#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"Enter number of rows";
    cin>>rows;
    for(int i=rows;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<'\n';
    }
}

// Enter number of rows5
// * * * * * 
// * * * *
// * * *
// * *
// *

#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"enter the number of rows: ";
    cin>>rows;

    for(int i=1;i<=rows;++i){
        for(int j=1;j<=rows-i;++j){
            cout<<"  ";
        }
        for(int j=1;j<=(2 * i - 1);j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}

// enter the number of rows: 5
//         * 
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *

#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"enter the number of rows: ";
    cin>>rows;

    for(int i=1;i<=rows;++i){
        for(int j=1;j<=rows-i;++j){
            cout<<"  ";
        }
        for(int j=1;j<=(2 * i - 1);j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}

// enter the number of rows: 5
//         1 
//       1 2 3
//     1 2 3 4 5
//   1 2 3 4 5 6 7
// 1 2 3 4 5 6 7 8 9

#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"enter number of rows: ";
    cin>>rows;
    for(int i=1;i<rows;i++){
        for(int j=1;j<i;j++){
            cout<<"  ";
        }
        for(int j=0;j<2*(rows-i)-1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

// enter number of rows: 5
// * * * * * * * * * 
//   * * * * * * *
//     * * * * *
//       * * *
//         *



#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"enter number of rows: ";
    cin>>rows;
    for(int i=0;i<rows;i++){
        for(int j=0;j<i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=2*(rows-i)-1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

// enter number of rows: 5
// 1 2 3 4 5 6 7 8 9 
//   1 2 3 4 5 6 7
//     1 2 3 4 5
//       1 2 3
//         1