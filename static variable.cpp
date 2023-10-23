#include<iostream>
#include<string>
using namespace std;

class employee
{
    int id;
    static int counter;
    
    public:
        void setdata(void){
        cout <<"enter the id"<<endl;
        cin>>id;
        cout <<'\n';
        counter++;
        }

        void getdata(void){
            cout <<"the id of employee is" <<id<<endl;
            cout <<'\n';
            cout <<counter;

        }

};

int employee :: counter;


int main(){
    employee herry,rohan,priyang;
    
    herry.setdata();
    herry.getdata();
    rohan.setdata();
    rohan.getdata();
    priyang.setdata();
    priyang.getdata();
}