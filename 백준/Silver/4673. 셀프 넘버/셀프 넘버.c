#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int selfnum[10001] = { 0, };
	int deletenum[10001] = { 0, };
	int i = 0;
	int n = 1;

	for (int i = 1; i < 10001; i++) {
		selfnum[i] = i;
	}
	
	for (n; n < 10001; n++) {
		if (n < 10) {
			deletenum[i] = n + n;
			i++;
		}
		else if (n < 100) {
			deletenum[i] = n + (n / 10) + (n % 10);
			i++;
		}
		else if (n < 1000) {
			deletenum[i] = n + (n / 100) + ((n % 100) / 10) + (n % 10);
			i++;
		}
		else if (n < 10000) {
			deletenum[i] = n + (n / 1000) + ((n % 1000) / 100) + ((n % 100) / 10) + (n % 10);
			i++;
		}
		else if (n == 10000) {
			deletenum[i] = n + (n / 10000) + ((n % 10000) / 1000) + ((n % 1000) / 100) + ((n % 100) / 10) + (n % 10);
			i++;
		}
	}
		for (int i = 0; i < 10000; i++) {
			for (int j = 0; j < 10000; j++) {
				if (selfnum[i] == deletenum[j]) {
					selfnum[i] = 0;
				}
			}
		}
		for (int i = 0; i < 10000; i++) {
			if (selfnum[i] != 0) {
				printf("%d\n", selfnum[i]);
			}
		}

	

	return 0;
}