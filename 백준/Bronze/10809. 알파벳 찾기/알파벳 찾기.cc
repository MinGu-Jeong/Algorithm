#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int i, arr[26];
    string S;

    for (i = 0; i < 26; i++)
        arr[i] = -1;
    
    cin >> S;

    for (i = 0; i < S.size(); i++) {
        if (arr[S[i] - 'a'] == -1)
            arr[S[i] - 'a'] = i;
    }

    for (i = 0; i < 26; i++) 
        cout << arr[i] << ' ';

    return 0;
}