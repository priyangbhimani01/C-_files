#include<iostream>
using namespace std;

void pointer(int *x, int *y){
         cout<<"The value of a is" <<*x<<endl;
         cout<<"The value of b is" <<*y<<endl;

         *x=50;
         *y=100;

}

int main(){
    int a,b;
    cout<<"Enter the value of a and b"<<endl;
    cin>> a >>b;

    pointer(&a,&b);

    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b ia "<<b;

}