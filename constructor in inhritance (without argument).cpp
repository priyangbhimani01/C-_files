#include <iostream>
#include <string>

using namespace std;

class base1
{

public:
   base1()
   {
      cout << "base1 is called" << endl;
   }
};

class base2
{
public:
   base2()
   {
      cout << "base2 is called" << endl;
   }
};

class derived : public base1, public base2
{
public:
   derived()
   {
      cout << "derived is called" << endl;
   }
};

int main()
{
   derived obj1;
}
