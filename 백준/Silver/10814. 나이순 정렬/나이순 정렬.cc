#include <iostream>
#include <algorithm>

using namespace std;
class member {
public:
	int age;
	string name;
};

member m[100001];
bool compare(member a, member b) {
	return a.age < b.age;
}

int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> m[i].age >> m[i].name;
	stable_sort(m, m + N, compare);
	for (int i = 0; i < N; i++)
		cout << m[i].age << " " << m[i].name << "\n";
	return 0;
}