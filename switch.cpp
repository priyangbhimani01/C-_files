#include<iostream>

using namespace std;

int main(){
    int amount;
    int a,b,c,d;
    cout<<"enter the amount";
    cin>>amount;

    switch(100){

        case 100 : a=(amount/100);
                   cout<<"100's note is "<<a<<endl;
                   amount = amount - (100*a);

        case 50 : b=(amount/50);
                  cout<<"50's note is "<<b <<endl;
                  amount = amount - (50*b);

        case 20 : c=(amount/20);
                  cout<<"20's note is "<<c <<endl;
                  amount = amount - (20*c);

        case 1  : d=(amount/1);
                  cout<<"1's note is "<<d <<endl;
                                      

    }
}