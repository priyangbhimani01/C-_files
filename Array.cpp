#include <iostream>
using namespace std;

int main()
{
	int i, j, x, y;
	
	cout << "enter the number of row and colum";
	cin >> x >> y;
	int a[x][y];
	cout << '\n';
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			cout << "enter the ,atrix value";
			cin >> a[i][j];
		}
	}

	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{

			cout << a[i][j];
		}
		cout << endl;
	}

	return 0;
}