#include <iostream>
#include <set>

using namespace std;

int main() {
	//입력
	int n, m;
	int count = 0;
	string input, test;
	cin >> n >> m;
	set<string> s;
	for (int i = 0; i < n; i++) {
		cin >> input;
		s.insert(input);
	}
	//연산
	for (int i = 0; i < m; i++) {
		cin >> test;
		if (s.find(test) != s.end()) {
			count++;
		}
	}
	//출력
	cout << count;

	return 0;
}