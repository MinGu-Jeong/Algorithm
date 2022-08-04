#include <iostream>
using namespace std;

int main() {
	int N, weight, height;
	int j = 0;
	int arr[52][2] = { 0 };
	int ranking[52] = { 0 };

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> weight >> height;
		arr[i][0] = weight;
		arr[i][1] = height;
	}
	for (int i = 0; i < N; i++) {
		j = 0;
		while (arr[j][0] != 0) {
			if (i == j)
				j++;
			if ((arr[i][0] > arr[j][0]) && (arr[i][1] > arr[j][1])) {
				if (arr[i + 1][0] == 0) {
					if(j>i)
						break;
				}
				ranking[j]++;
			}
			j++;
		}
	}
	for (int i = 0; i < N; i++) {
		cout << ranking[i] + 1 << ' ';
	}

	return 0;
}