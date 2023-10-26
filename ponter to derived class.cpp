
#include<iostream>
#include<string>

using namespace std;

class baseclass  
{
    public:
      int base_variable=10;

     void display(void){
        cout<<"the value of base variable is "<<base_variable<<endl;

     } 
};

class derivedclass : public baseclass
{
    public:
       int derived_variable=20;

       void display(void){
        cout<<"the value of derived variable is "<<derived_variable<<endl;
       }
};

int main(){
    baseclass *pointer_baseclass;
    baseclass obj1;
    derivedclass obj2;
    pointer_baseclass = &obj1;
    pointer_baseclass->display();

    derivedclass *pointer_derivedclass;
    pointer_derivedclass = &obj2;

    pointer_derivedclass->display();

}