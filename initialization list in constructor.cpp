#include <iostream>
#include <string>
using namespace std;

class employee
{
protected:
    string name;
    int id_number;
    int salary;

public:
    employee(string x, int y, int z) : name(x), id_number(y), salary(z)
    {
        cout << "data is correctly inputed " << endl;
    }
};

class student 
{
protected:
    string favourite_sport;
    int number_of_schoolbus;

public:
    student(string a, int b) : favourite_sport(a), number_of_schoolbus(b)
    {
        cout << "Another data has been correctly inputed " << endl;
    }
};

class derived : public student,public employee
{

    public:

    derived(string x, int y, int z, string a, int b) : employee(x, y, z), student(a, b)
    {
        cout << "Final data is inputed successfully" << endl;
    }

    ~derived(void)
    {
        cout << "The object has been destucted after the using. " << endl;
    }

    void display(void)
    {

        cout << "The name of the employee is " << name << endl;
        cout << "The id of the employee is " << id_number << endl;
        cout << "Highly recommended salary of employee is " << salary << endl;
        cout << "Student's favourite sport is " << favourite_sport << endl;
        cout << "Student's school bus number is " << number_of_schoolbus << endl;
        cout<<'\n';
        cout<<endl;
        
    }
};

int main()
{
    {derived data1("priyang", 19, 5000000, "Cricket", 10);
    data1.display();}    
    derived data2("Pritesh", 201, 8000000, "Chess", 20);
    data2.display();
}
