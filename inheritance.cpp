#include <iostream>
#include <string>
using namespace std;

class employee
{
public:
    int id;
    int salary;
    employee(int num)
    {
        id = num;
    }
    employee() {}
};

class programmer : private employee
{
public:
    programmer(int num)
    {
        id = num;
        salary = 50000;
        cout << id << endl;
        cout << salary << endl;
    }
};

int main()
{
    employee n1(5);
    programmer n2(5);
}
