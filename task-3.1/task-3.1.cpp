#include <iostream>
using namespace std;

int main()
{
	int y;

	cout << "Enter a number: ";
	cin >> y;

	for (int x = 0; x <= 10; x++) {

		cout << y << " * " << x << " = " << y * x << endl;
	}

	return 0;
}