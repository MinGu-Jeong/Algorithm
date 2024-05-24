#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string answer = "";
    int size = my_string.size();
    return my_string.substr(size-n,size);
}