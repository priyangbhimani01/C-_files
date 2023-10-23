#include<iostream>
#include<string>

using namespace std;

int max(int array[],int n){
    int max= INT_MIN;

    for(int i=0;i<n;i++){
        if(array[i]>max){
            max=array[i];
        }
    }
    return max;
}

int min(int array[],int n){
    int min= INT_MAX;

    for(int i=0;i<n;i++){
        if(array[i]<min){
            min=array[i];
        }
    }
    return min;
}

int main(){
    int size;
    cin>>size;
    int array[size];

    for(int i=0;i<size;i++){
        cin>>array[i];
    }

    cout<<"maximum element is "<<max(array,size)<<endl;;
    cout<<"minimum element is "<<min(array,size);
}