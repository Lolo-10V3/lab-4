#include <iostream>
using namespace std;

int main()
{
	char x;

	cout << "Enter a letter: ";
	cin >> x;

	while (x != 'n') {
		cout << "hello" << endl;
		cout << "Enter a letter to stop enter 'n': ";
		cin >> x;
	}
}
