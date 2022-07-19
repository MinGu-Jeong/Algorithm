#include <iostream>
using namespace std;

int main() {
	int T, H, W, N, X, Y, room;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> H >> W >> N;
		X = N / H;
		Y = N % H;
		if (Y == 0) {
			Y = H;
			room = Y * 100 + X;
		}
		else
		room = Y * 100 + (X + 1);
		cout << room << endl;
	}

	return 0;
}