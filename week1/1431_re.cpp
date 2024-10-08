#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int sumNum(const string& s) {
	int sum = 0;
	for (int i = 0; i < s.size(); i++) {
		if (isdigit(s[i])) {
			sum += (s[i] - '0');
		}
		/*if (s[i] >= '0' && s[i] <= '9') {
			sum += (s[i] - '0');
		}*/
	}
	return sum;
}

bool cmp(const string& s1, const string& s2) {
	if (s1.size() != s2.size()) {
		return s1.size() < s2.size();
	}
	int sum1, sum2;

	sum1 = sumNum(s1);
	sum2 = sumNum(s2);

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