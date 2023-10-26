#include<iostream>
#include<array>

using namespace std;

int main(){
    array<int,4> a = {1,2,3,4};
    int size = a.size();

    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }cout<<endl;

    cout<<"2nd index of array is "<<a.at(1)<<endl;
    cout<<"array is empty or not "<<a.empty()<<endl;

    cout<<"first element of array is "<<a.front()<<endl;
    cout<<"last element of array is "<<a.back()<<endl;
}