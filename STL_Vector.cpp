#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v(1,1);

    

    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    for(int i; i<4;i++){
        cout<<v[i]<<endl;
    }

   

    cout<<endl;
    cout<<"capacity ->" <<v.capacity();
    v.push_back(5);
    cout<<"capacity ->" <<v.capacity();

    
}