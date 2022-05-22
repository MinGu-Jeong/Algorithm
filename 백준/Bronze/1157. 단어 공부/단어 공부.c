#include <stdio.h>
char word[1000000];

int main() {
	int ascii = 97;
	int ASCII = 65;
	int alphabet[26] = { 0 };
	int MAX = 0;
	int overlap = 0;
	char checkWord = 0;
	int i = 0;

	gets(word);
	while (word[i] != '\0') {
		if (word[i] == ASCII || word[i] == ascii) {
			alphabet[ASCII - 65]++;
			ASCII = 65;
			ascii = 97;
		}
		else{
			ASCII++;
			ascii++;
			continue;
		}
		i++;
	}
	for (i = 0; i < 26; i++) {
		if (MAX < alphabet[i]) {
			MAX = alphabet[i];
			checkWord = i;
			overlap = 0;
		}
		else if (MAX == alphabet[i])
			overlap++;
	}
	if (overlap > 0)
		printf("?");
	else {
		checkWord = checkWord + 65;
		printf("%c",checkWord);
	}

	return 0;
}