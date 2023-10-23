#include <iostream>
#include <string>
using namespace std;

struct employee
{    
    string name;
    int age;
    int salary;
    string position;
};

int main()
{
    string n;
    cout << "enter the name" << endl;
    cin >> n;
    if (n == "shubham")
    {

        employee shubham;
        shubham.age = 26;
        shubham.salary = 500000;
        shubham.position = "employee";

        cout << shubham.age << endl;
        cout << shubham.salary << endl;
        cout << shubham.position << endl;
    }
    else if (n == "ravi")
    {
        struct employee ravi;
        ravi.age = 29;
        ravi.salary = 600000;
        ravi.position = "employee";

        cout << ravi.age << endl;
        cout << ravi.salary << endl;
        cout << ravi.position << endl;
    }
    else
    {
        struct employee harry;
        harry.age = 35;
        harry.salary = 800000;
        harry.position = "manager";

        cout << harry.age << endl;
        cout << harry.salary << endl;
        cout << harry.position << endl;
    }
}