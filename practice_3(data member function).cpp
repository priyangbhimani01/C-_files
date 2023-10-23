#include<iostream>
#include<string>

using namespace std;
 
class employee
{
    static int a;
    public:  
      static void getdata(){
             a=5;
             cout<<a;
      }
};

int main(){
    employee :: getdata();
}


