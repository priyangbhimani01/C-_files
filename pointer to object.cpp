#include<iostream>
#include<string>

using namespace std;

class number 
{
    protected:
      int a;
      int b;

    public:
        void setdata(int x,int y) {
            a=x;
            b=y;
        }

        void getdata(){
            cout <<"entered number is real "<<a<<endl;
            cout<<"entered number is imaginary "<<b<<endl;
        }
};

int main(){
    number c1;
    number *b = &c1;
    b->setdata(4,5);
    b->getdata();
    return 0;
}
