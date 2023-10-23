#include <iostream>
#include <string>

using namespace std;

class employee
{
    string name;
    int salary;
    int year;
    char favouritefood;

public:
    void entry(string n, int s, int y, char f)
    {
        name = n;
        salary = s;
        year = y;
        favouritefood = f;
    }
    void display()
    {

        cout << name << endl;
        cout << salary << endl;
        cout << year << endl;

        cout << '\n';
    }
};

int main()
{
    employee data[5];
    string n;
    int s, y;
    char f;
    for (int i = 0; i < 5; i++)
    {
        cout << "enter the data";
        cin >> n >> s >> y >> f;
        data[i].entry(n, s, y, f);
        data[i].display();
    }
}
