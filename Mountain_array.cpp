#include<iostream>
#include<string>

using namespace std;

int mountain_array(int array[],int n){
     int s=0;
     int e=n-1;
     int mid=s+ (e-s)/2;

     while(s<e){
        if(array[mid]<array[mid+1]){
            s=mid+1;
        }else{
            e=mid;
        }
        mid=s+ (e-s)/2;
     }return e;
}

int main(){  
    int array[8]={1,10,15,23,27,30,32,2};

     mountain_array(array,8);
    cout<<"peak array is at index "<<mountain_array(array,8);
}