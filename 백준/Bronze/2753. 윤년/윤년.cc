#include <iostream>
using namespace std;

int main() {
	int year;
    int isLeapYear;
	cin >> year;
	if (year % 400 == 0)
        isLeapYear = 1;
	else if (year % 100 == 0)
        isLeapYear = 0;
	else if (year % 4 == 0)
        isLeapYear = 1;
	else
        isLeapYear = 0;

	cout << isLeapYear;

	return 0;
}