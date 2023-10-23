#include<iostream>
#include<cmath>

using namespace std;

int exponantial(int n){
     if(n==0){
        return 1;
     }else
     return 2*exponantial(n-1);
     
}

int main(){
    int x,ans;
    cout<<"Enter the value";
    cin>>x;

    ans =exponantial(x);
    cout <<ans;
}