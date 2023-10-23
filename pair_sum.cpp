#include<iostream>
#include<string>

using namespace std;

void pairsum(int array[], int n, int sum){
     for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j <n ; j++)
        {
             if(array[i]+array[j]==sum){
                cout<<array[i] <<" "<< array[j];
                cout<<endl;
             }
        }
    }
}

int main(){
    
    int size,sum;
    cout << "enter the size of array";
    cin >> size ;

    int array[size];
   

    for (int i = 0; i < size; i++)
    {
        cout << "enter the array";
        cin >> array[i];
    }

    cout<<"Enter the sum";
    cin>>sum;

    pairsum(array,size,sum);
}