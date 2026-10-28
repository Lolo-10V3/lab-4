#include <iostream>
using namespace std;

int main()
{
	int x = 0;

	while (x <= 10) {

		if (x == 0) {
			cout << x << " is neither odd nor even" << endl;
		}
		else if (x % 2 == 0) {
			cout << x << " is even" << endl;
		}
		else {
			cout << x << " is odd" << endl;
		}
		x++;
	}



}