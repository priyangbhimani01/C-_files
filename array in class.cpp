#include <iostream>
#include <string>

using namespace std;

class company
{
    int id;
    int salary;
    string name;

public:
    void setdata(void)
    {
        cout << "enter the name " << endl;
        cin >> name;

        cout << "enter the id" << endl;
        cin >> id;

        cout << "enter the salary" << endl;
        cin >> salary;

        cout << '\n';
    }

    void getdata(void)
    {

        cout << "Employee's name is " << name << endl;
        cout << name << "'s id is " << id << endl;
        cout << name << "'s salary is " << salary << endl;
    }
};

int main()
{
    company f[10];
    for (int i = 0; i <= 9; i++)
    {
        f[i].setdata();
        f[i].getdata();
    }
}