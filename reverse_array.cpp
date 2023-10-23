#include<iostream>
#include<string>

using namespace std;

void reverse(int array[], int n){
      int start=0;
      int end=n-1;
      while(start<=end){
           int temp=array[start];
           array[start]=array[end];
           array[end]=temp;

           start++;
           end--;

      }

      for(int i=0; i<n; i++){
        cout<<array[i];
      }
}

int main(){
    int size;
    cin>>size;

    int array[size];
    for(int i=0; i<size; i++){
        cin>>array[i];
    }
    
    reverse(array , size);

}