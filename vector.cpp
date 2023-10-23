#include<iostream>
#include<vector>

using namespace std;

int main(){
    
    vector<int> ivector={1,2,3};
    cout << ivector.size() <<endl;
    ivector.push_back(4);
    ivector.push_back(5);

    cout << ivector.size() <<endl;
}

