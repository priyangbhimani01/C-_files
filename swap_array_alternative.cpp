#include<iostream>
#include<string>

using namespace std;

void swapalternative(int array[] , int n){
      for(int i=0; i<n; i+=2){hh
        if(i+1<n){
            int temp=array[i];
            array[i]=array[i+1];
            array[i+1]=temp;
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

    swapalternative(array , size);

     for(int i=0; i<size; i++){
        
        cout<<array[i];
}
}