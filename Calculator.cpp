#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n1,n2;
    char op;
    cout << "enter the choice ";
    cin >> op;
    cout << "enter the number n1 ";
    cin >> n1;
    cout << "enter the number n2 ";
    cin >> n2;
    switch (op){
        case '+' :
                   cout << "multiplication is " << n1*n2;
                   break;
        case '*' :
                   cout << "addition is " << n1+n2;
                   break;
        case '/' :
                   cout << "division is " << n1/n2;
                   break;
        case '-' :
                   cout << "substraction is " << n1-n2;
                   break;
        case '5' :
                   cout << "log of n1 and n2 are " << log(n1) << log(n2);
                   break;
        case '6' :
                   cout << "sin of n1 " << sin(n1);
                   break;     
        case '7' :
                   cout << "power of n1 and n2 are " << pow(n1,n2);
                   break;  

        default  :  cout<<"invalid choice ";
                    break;                                  
    }
    
    return 0;
    }