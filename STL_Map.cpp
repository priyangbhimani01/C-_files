#include<iostream>
#include<map>

using namespace std;

int main(){
    map<int,string> m;

    m[2]="pritest";
    m[3]="priyang";
    m[5]="krupa";

    for(auto i:m){
        cout<<i.first <<" "<<i.second;
    }
}