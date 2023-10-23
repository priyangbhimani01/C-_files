#include<iostream>
using namespace std;

int sum_of_number(int a, int b){
    return a+b;
}
     
     

int main(){
    int num1,num2;
    cin >> num1;
    cin >> num2;
    cout << "addition is: " << sum_of_number(num1, num2);
    return 0;
}