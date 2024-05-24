#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> numbers, int n) {
    int answer = 0;
    int i=0;
    while(answer<=n){
        answer+=numbers[i];
        i++;
    }
    
    return answer;
}