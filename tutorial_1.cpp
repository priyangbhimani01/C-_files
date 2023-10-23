#include <iostream>
using namespace std;

int main()
{
	int n, lastdigit, firstdigit=0;
	cout << "enter the number ";
	cin >> n;

	lastdigit = (n % 10);

	while (n >= 10)
	{
		firstdigit = (n / 10);
		n = firstdigit;
	}
	cout << "lastdigit = " << lastdigit << " and  firstdigit = " << firstdigit;
	return 0;
}