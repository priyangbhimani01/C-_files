#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout << "enter the value of a and b";
    cin >> a >> b;
    if(a%2 == 0 && b%2 == 0){
        cout << "a and b are the even number";
    
    } else {
        cout << "a and b are the odd number";
    }
    return 0;
}