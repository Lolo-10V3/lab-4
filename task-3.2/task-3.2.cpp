#include <iostream>
using namespace std;

int main()
{
	int x, sum = 0;

	cout << "Enter number of terms: ";
	cin >> x;

	for (int i = 1; i <= x; i++) {
		if (i % 2 != 0) {
			cout << i << " ";
			sum += i;
		}

	}

	cout << "\n the sum of odd natural numbers is: " << sum;


}