#include <iostream>
#include <string>
using namespace std;

class employee
{
private:
    string name;
    int salary;
    string DOB;

public:
    void setdata(string name, int salary, string DOB)
{
    this->name=name;
    this->salary=salary;
    this->DOB=DOB;

    cout << name << endl;
    cout << salary << endl;
    cout << DOB << endl;
}

};

int main()
{
    employee adi;
    adi.setdata("adi", 500000, "3-4-2003");
}