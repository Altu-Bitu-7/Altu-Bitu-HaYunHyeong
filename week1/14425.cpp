#include <iostream>
#include <set>

using namespace std;

int main() {
	//�Է�
	int n, m;
	int count = 0;
	string input, test;
	cin >> n >> m;
	set<string> s;
	for (int i = 0; i < n; i++) {
		cin >> input;
		s.insert(input);
	}
	//����
	for (int i = 0; i < m; i++) {
		cin >> test;
		if (s.find(test) != s.end()) {
			count++;
		}
	}
	//���
	cout << count;

	return 0;
}