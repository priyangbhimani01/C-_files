#include <iostream>
#include <string>

using namespace std;

class grandfather
{
protected:
    string hair;
    string eyes;

public:
    void setdata(string x, string y)
    {
        hair = x;
        eyes = y;
    }
};

class father : public grandfather
{
protected:
    string face;

public:
    void setface(string a)
    {
        face = a;
    }
};

class son : public father
{
public:
    void getdata(void)
    {
        cout << "priyang's eyes of colour is " << eyes << endl;
        cout << "priyang's hairs of colour is " << hair << endl;
        cout << "priyang's face is " << face << endl;
    }
};

int main()
{
    son priyang;
    priyang.setdata("Black", "Brown");
    priyang.setface("like_his_father");
    priyang.getdata();
}