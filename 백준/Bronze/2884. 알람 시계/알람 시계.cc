#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int H, M;
	cin >> H >> M;
	if (M - 45 >= 0) {
		M = M - 45;
	}
	else {
		if (H == 0) {
			H = 23;
			M = M + 15;
		}
		else {
			H--;
			M = M + 15;
		}
	}
	cout << H << ' ' << M << endl;
	return 0;
}