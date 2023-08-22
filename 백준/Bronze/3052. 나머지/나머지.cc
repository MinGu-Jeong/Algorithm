#include <iostream>
using namespace std;

int main()
{
  int rest[42] = {
      0,
  };
  int count = 0;
  int input;
  for (int i = 0; i < 10; i++)
  {
    cin >> input;
    rest[input % 42]++;
  }
  for (int i = 0; i < 42; i++)
  {
    if (rest[i] != 0)
      count++;
  }
  cout << count;
  return 0;
}