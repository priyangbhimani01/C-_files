#include <iostream>
#include <string>
using namespace std;

class employee
{
    int amount;
    int year;
    int interest;
    int returnvalue;

public:
    void setdata(int x, int y, int z)
    {
        amount = x;
        year = y;
        interest = z;
        float a = (float(interest) / 1000);
        int returnvalue = amount;
        for (int i = 1; i <= year; i++)
        {
            returnvalue = returnvalue * (1 + a);
        }
        cout << returnvalue;
    }
};

int main()
{
    employee data;
    int x, y, z;
    cin >> x >> y >> z;
    data.setdata(x, y, z);
}
