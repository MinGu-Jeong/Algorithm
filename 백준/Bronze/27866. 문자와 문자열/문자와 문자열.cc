#include <iostream>
using namespace std;

int main() {
  char word[1001] = {};
  cin >> word;
  int num;
  cin >> num;
  cout << word[num-1];
}