#include <iostream>
using namespace std;

int main()
{
	char x;
	int counta = 0, countb = 0, countc = 0;

	do {
		cout << "Enter a letter (enter 'x' to stop): ";
		cin >> x;

		switch (x) {
		case 'a':
			counta++;
			break;
		case 'b':
			countb++;
			break;
		case 'c':
			countc++;
			break;
		}

	} while (x != 'x');

	cout << "Count of 'a': " << counta << endl;
	cout << "Count of 'b': " << countb << endl;
	cout << "Count of 'c': " << countc << endl;

	return 0;

}
