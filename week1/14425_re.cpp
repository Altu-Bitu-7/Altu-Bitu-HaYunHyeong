#include <iostream>
#include <set>

using namespace std;

int findString(set<string> s, int m) {
	int count = 0;
	string test;
	for (int i = 0; i < m; i++) {
		cin >> test;
		if (s.find(test) != s.end()) {
			count++;
		}
	}
	return count;
}

int main() {
	//입력
	int n, m;
	string input, test;
	cin >> n >> m;
	set<string> s;
	for (int i = 0; i < n; i++) {
		cin >> input;
		s.insert(input);
	}
	//연산 및 출력
	cout << findString(s, m);

	return 0;
}