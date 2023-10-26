#include<iostream>
#include<map>

using namespace std;

int main(){
    map<int,string> m;

    m[2]="pritest";
    m[3]="priyang";
    m[5]="krupa";

    for(auto i:m){
        cout<<i.first <<" "<<i.second <<" ";
    }
    cout<<endl;

    m.insert({6,"Himmatbhai"});
    m.insert({7,"Kamlaben"});
    for(auto i:m){
        cout<<i.first <<" "<<i.second << " ";
    }
}