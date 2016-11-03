#include <iostream>

using namespace std;

void tenx()
{
	int value = 10;
	int row = 1;
	int res = 0;

	while (row<6) {
		int col = 1;
		while (col <= row) {
			res = value * col;
			cout << res << "\t";
			col++;
		}
		cout << endl;
		row++;
	}
	system("pause");
}


void main()
{
	int value = 7, row = 1, res = 0;

	while (row<6) {
		int col = 1;
		while (col <= row) {
			res = value * col;
			cout << res << "\t";
			col++;
		}
		cout << endl;
		row++;
	}
	system("pause");
}