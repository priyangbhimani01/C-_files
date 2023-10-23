#include<iostream>
#include<string>

using namespace std;

class base
{
    public:
        string name;
        int salary;

        virtual void display(){
            name="priyang";
            this->salary=5000000;

            cout<<"employee's name is "<<name<<endl;
            cout<<"employee's salary is "<<salary<<endl;
        }
};

class derived : public base
{
    public:
        string id;
        int time;

         void display(){
            this->id="521003";
            this->time=9;

            cout<<"employee's id is "<<id<<endl;
            cout<<"employee's time is "<<time<<endl;
        }
};

int main(){
    base *ptr_baseclass;
    base data1;
    derived data2;

    ptr_baseclass=&data2;
    ptr_baseclass->display();
    return 0;
}