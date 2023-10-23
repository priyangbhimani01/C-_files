#include <iostream>
#include <string>

using namespace std;

class student
{
protected:
    string name;
    int rollnumber;

public:
    void schooldata(string x, int y)
    {
        name = x;
        rollnumber = y;
    }
};

class test : virtual public student
{
protected:
    int physics;
    int maths;
public:
    void marks(int a, int b)
    {
        physics = a;
        maths = b;
    }
};

class sport : virtual public student
{
protected:
    string sportname;
    int age;

public:
    void sportdata(string p, int q)
    {
        sportname = p;
        age = q;
    }
};

class result : public test, public sport
{
public:
    void display(void)
    {
        cout << "student's name is " << name << endl;
        cout << name << "'s rollnumber is " << rollnumber << endl;
        cout << name << "'s score in physics is " << physics;
        cout << " and in maths is " << maths << endl;
        cout << name << "'s favourite sport is " << sportname << endl;
        cout << name << "'s age is " << age << endl;
    }
};

int main()
{
    result school;
    school.schooldata("priyang", 7);
    school.marks(95, 94);
    school.sportdata("cricket", 20);
    school.display();
}
