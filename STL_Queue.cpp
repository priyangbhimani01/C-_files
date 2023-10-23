#include<iostream>
#include<queue>

using namespace std;

int main(){
    queue<string> q;

    q.push("pritesh");
    q.push("krupa");
    q.push("priyang");
    q.push("fahter");
    q.push("mother");

    cout<<"First element is "<<q.front()<<endl;
    cout<<"last elelment is "<<q.back()<<endl;
}