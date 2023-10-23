#include<iostream>
#include<string>

using namespace std;

int leftOccurrence(int array[], int n, int key){
     int s=0;
     int e=n-1;
     int mid= s+ (e-s)/2;
     int ans=-1;

     while(s<=e){
        if(array[mid]==key){
            ans=mid;
            e=mid-1;
        }else if(array[mid]<key){
            s=mid+1;
        }else if(array[mid]>key){
            e=mid-1;
        }
        mid= s+ (e-s)/2;

     }
     return ans;
}

 int RightOccurrence(int array[], int n, int key){
     int s=0;
     int e=n-1;
     int mid= s+ (e-s)/2;
     int ans=-1;

     while(s<=e){
        if(array[mid]==key){
            ans=mid;
            s=mid+1;
        }else if(array[mid]<key){
            s=mid+1;
        }else if(array[mid]>key){
            e=mid-1;
        }
        mid= s+ (e-s)/2;

     }
     return ans;
}
     

int main(){

    int array[9] = {1,2,2,2,3,5,7,12,34};
     
    leftOccurrence(array, 9, 2);
    cout<<"The starting index of 2 is "<<leftOccurrence(array,9,2)<<endl;

    RightOccurrence(array, 9, 2);
    cout<<"The ending index of 2 is "<<RightOccurrence(array,9,2);

}