#include <iostream>
using namespace std;

int main() {
	int stack[10001] = { 0 };
	string command;
	int commandLine;
	int stackCount = 0;
	int num;

	cin >> commandLine;
	for (int i = 0; i < commandLine; i++) {
		cin >> command;
		if (command == "push") {
			cin >> num;
			stack[stackCount] = num;
			stackCount++;
		}
		else if (command == "pop") {
			if (stackCount == 0)
				cout << "-1" << endl;
			else {
				cout << stack[stackCount - 1] << endl;
				stack[stackCount] = 0;
				stackCount--;
			}
		}
		else if (command == "size")
			cout << stackCount << endl;
		else if (command == "empty") {
			if (stackCount == 0)
				cout << "1" << endl;
			else
				cout << "0" << endl;
		}
		else if (command == "top") {
			if (stackCount == 0)
				cout << "-1" << endl;
			else
				cout << stack[stackCount - 1] << endl;
		}
	}

	return 0;
}