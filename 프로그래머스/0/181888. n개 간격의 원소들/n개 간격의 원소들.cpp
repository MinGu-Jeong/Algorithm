#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    vector<int> answer;
    int length = num_list.size();
    int i=0;
    
    while(i<length){
        answer.push_back(num_list[i]);
        i+=n;
    }
     for (int j = 0; j < answer.size(); j++) {
        cout << answer[j] << " ";
    }
    return answer;
}