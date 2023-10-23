#include<iostream>
using namespace std;

unsigned fibonacci_rec(unsigned n);

int main(){
    int n,i;
    cout << "Enter the nth term which you want to print";
    cin >> n;
    

         
      cout << fibonacci_rec(n) <<endl;
}


unsigned fibonacci_rec(unsigned n){

    if (n<=1){
        return n;
    }return fibonacci_rec(n-1) + fibonacci_rec(n-2);


}