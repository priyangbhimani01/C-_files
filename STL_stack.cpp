#include<iostream>
#include<stack>
#include<vector>

using namespace std;

int main(){
    stack<string> s;

    s.push("pritesh");
    s.push("krupa");
    s.push("priyang");
    s.push("fahter");
    s.push("mother");

    cout<<"Top element is " <<s.top()<<endl;
    
   s.pop();

   cout<<"Top element is " <<s.top()<<endl;
}