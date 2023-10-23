#include<iostream>
#include<vector>
#include<string>

using namespace std;

void display(vector<int> vec){
     vector<int> :: iterator it;
    for(it=vec.begin(); it!=vec.end();it++){
             cout<<*it<<" ";
    }cout<<endl;

    cout<<"the size of the vector is "<<vec.size()<<endl;
    cout<<"the max size of the vector is "<<vec.max_size()<<endl;
    cout<<"the capacity of the vector is "<<vec.capacity()<<endl;
    cout<<"This vector is empty or not "<<vec.empty()<<endl;
    cout<<"The element at 2nd index is "<<vec.at(2)<<endl;
    cout<<"First element is "<<vec.front()<<endl;
    cout<<"Last element is "<<vec.back()<<endl;

    vec.pop_back();

    for(auto i:vec){
        cout<<i <<" ";
    }cout<<endl;

    vec.push_back(7);
    vector<int> :: iterator iter = vec.begin();
    vec.insert(iter+2,3);


    for(auto i:vec){
        cout<<i <<" ";
    }cout<<endl;

}

int main(){
    vector<int> v;
     v.push_back(10);
    v.push_back(25);
    v.push_back(5);
    v.push_back(7);
    
   display(v);

   v.erase(v.begin()+1);
   for(auto i:v){
    cout<<i <<" ";
   }   
}