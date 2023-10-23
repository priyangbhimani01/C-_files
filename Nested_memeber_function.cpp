#include <iostream>
#include <string>

using namespace std;

class binary
{
private:
    string s;

public:
    void input(void)
    {
        cout << "enter the binary number";
        cin >> s;
    }

    void check(void)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s.at(i) != '0' && s.at(i) != '1')
            {
                cout << "Incorrect binary format";
                exit(0);
            }
        }
    }

    void correct(void)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s.at(i) == '0')
            {
                s.at(i) = '1';
            }
            else
            {
                s.at(i) = '0';
            }
        }
    }

    void print(void)
    {
        cout << "new binary number is" << s;
    }
};

int main()
{
    binary a;
    a.input();
    a.check();
    a.correct();
    a.print();
}