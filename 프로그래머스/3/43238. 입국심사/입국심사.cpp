#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(int n, vector<int> times)
{
  long long answer = 0;
  long long min = 1;
  long long max = n * (long long)*max_element(times.begin(), times.end());
  long long mid;
  long long sum;

  while (min <= max)
  {
    mid = (min + max) / 2;
    sum = 0;

    for (int i = 0; i < times.size(); i++)
    {
      sum += mid / times[i];
    }

    if (sum < n)
    {
      min = mid + 1;
    }
    else
    {
      answer = mid;
      max = mid - 1;
    }
  }

  return answer;
}