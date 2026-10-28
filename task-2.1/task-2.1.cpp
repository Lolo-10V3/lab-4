#include <iostream>
using namespace std;

int main()
{
	int x, sum = 0;

	do {
		cout << "Enter a positive integer (enter 0 to stop): ";
		cin >> x;
		sum += x;
	} while (x != 0);
	cout << "The sum is: " << sum << endl;



}