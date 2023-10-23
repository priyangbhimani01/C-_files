#include<iostream>
using namespace std;

void max(int a, int b, int c, int d);
int main(){
    int x,y,z,w;
    max(x,y,z,w);

}

void max(int a, int b, int c, int d){
    
    cout << "enter the four number";
    cin >> a >> b >> c >> d;
    if(a>b){
        if(a>c){
            if(a>d){
                cout << "a is the maximum number " << a;
            }
        }
    }  if(b>c){
        if(b>d){
            cout << "b is maximumb  number" << b;
          }  else {
                cout << "d is maximum number" << d; 

            }
        
    } else if(c>d){
        cout << "c is maximum number " << c;

     } else {
        cout << "d is maximum number " << d;
    }
    
}