#include<iostream>
#include<string>

using namespace std;

void unique (int array[] , int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^array[i];
    }
    cout<< ans;
}

int main(){
    int size;
    cout<<"Enter the size of array";
    cin>>size;
    int array[size];

    for(int i=0; i<size; i++){
        cout<<"enter the array ";
        cin>>array[i];
    }
         unique (array , size);

    

    
}