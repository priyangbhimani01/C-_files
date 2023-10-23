#include<iostream>
#include<map>

using namespace std;

int main(){
    map<int , string> m;

    m[1] = "pritesh";
    m[7] = "priyang";
    m[3] = "krupa";
    m[5] = "mother";

    for(auto i : m){
        cout<<i.first  <<" " <<i.second;
        cout<<endl;
    }cout<<endl;
    

}