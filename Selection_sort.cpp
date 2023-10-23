#include<iostream>
#include<string.h>

using namespace std;

void selection_sort(int array[], int n){
    int temp;
        for(int i=0;i<n-1;i++){
            int midindex=i;
            for(int j=i+1;j<n;j++){
                if(array[midindex]>array[j]){
                      midindex=j;
                }
                
            }
            swap(array[midindex],array[i]);
        }
}

int main(){

    int size;
    cout<<"enter the size of array";
    cin>>size;
    int array[size];

    for(int i=0;i<size;i++){
        cin>>array[i];
    }

    selection_sort(array, size);

    cout<<"sorted array is ";
    for(int i=0;i<size;i++){
        cout<<array[i];
        cout<<endl;
    }

}