#include<iostream>
using namespace std;

void table(int n)
{
	int i;
	for(i=1;i<=10;i++){
		cout << n << "*" << i << "=" << n*i << endl;
	}

}

int main()
{
	int x;
	cout << "Enter the table set which you want to print out";
	cin >> x;

	cout << "The table is "<<endl;
	table(x);
	return 0;

}