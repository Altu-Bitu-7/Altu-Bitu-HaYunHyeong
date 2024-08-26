#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(const string& s1, const string& s2) {
	if (s1.size() != s2.size()) {
		return s1.size() < s2.size();
	}
	int sum1 = 0;
	int sum2 = 0;
	for (int i = 0; i < s1.size(); i++) {
		if (s1[i] >= '0' && s1[i] <= '9') {
			sum1 += (s1[i] - '0');
		}
	}
	for (int i = 0; i < s2.size(); i++) {
		if (s2[i] >= '0' && s2[i] <= '9') {
			sum2 += (s2[i] - '0');
		}
	}
	if (sum1 != sum2) {
		return sum1 < sum2;
	}
	return s1 < s2;
}

int main() {
	//입력
	int n;
	cin >> n;
	vector<string> serial;
	serial.assign(n, {});
	for (int i = 0; i < n; i++) {
		cin >> serial[i];
	}
	//연산
	sort(serial.begin(), serial.end(), cmp);
	//출력
	for (int i = 0; i < n; i++) {
		cout << serial[i] << '\n';
	}

	return 0;
}