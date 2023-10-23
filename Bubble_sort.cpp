#include<iostream>
#include<string>

using namespace std;

void Bubble_sort(int array[],int n){
    bool checked=false;
    for(int i=1;i<n;i++){
        for (int j = 0; j < n-i; j++)
        {
            if(array[j]>array[j+1]){
                int temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;

                checked=true;
            }
        }
        
    }

    if(checked==false){
        cout<<"array is already sorted"<<endl;
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

    Bubble_sort(array, size);

    cout<<"sorted array is ";
    for(int i=0;i<size;i++){
        cout<<array[i];
        cout<<endl;
    }

}