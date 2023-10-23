#include<iostream>
#include<string>

using namespace std;

class employee
{
    string name;
    int salary;

    public:
       
        void setdata(string name , int salary){
            this->name= name;
            this->salary= salary;
        }

        void getdata(){
            cout<<"employee's name is "<<name<<endl;
            cout<<"employee's salary is "<<salary<<endl;
        }
    
};

int main(){
    employee data;
    data.setdata("priyang",19);
    data.getdata();
}