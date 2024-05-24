#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer(numbers.size());
    int size = answer.size();
    for(int i=0;i<size;i++){
        answer[i] = numbers[i] * 2;
    }
    return answer;
}