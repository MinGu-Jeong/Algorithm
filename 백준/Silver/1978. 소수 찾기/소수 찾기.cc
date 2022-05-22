#include <iostream>
using namespace std;
char word[1000000];

int main() {
	int N;
	int number[1000] = { 0 };
	int isPrime = 0;
	bool checkIsPrime(int);

	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> number[i];
	for (int i = 0; i < N; i++) {
		if (checkIsPrime(number[i]) == true) {
			isPrime++;
			if (number[i] == 1)
				isPrime--;
		}
	}
	cout << isPrime;
	return 0;
}

bool checkIsPrime(int num) {
	for (int i = 2; i * i <= num; i++) {
		if (num % i == 0)
			return false;
	}
	return true;
}