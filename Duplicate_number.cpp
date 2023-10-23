#include<iostream>

using namespace std;

void duplicate(int array[] , int n){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(array[i]==array[j]){
                cout<<array[i];
                exit(0);
            }
        }
    }
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

    duplicate(array, size);
}