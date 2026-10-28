#include <iostream>
using namespace std;

int main()
{
	int sum = 0;
	cout << "numbers between 1 to 100, divisible by 9: " << endl;
	for (int x = 0; x <= 100; x++)
	{
		if (x % 9 == 0)
		{
			cout << x << " ";
		}
		sum += x;
	}
	cout << "\nthe sum: " << sum;

}
