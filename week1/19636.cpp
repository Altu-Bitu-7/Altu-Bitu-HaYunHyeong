#include <iostream>

using namespace std;

int main() {
	//입력
	int w0, I0, T;
	int D, I, A;
	cin >> w0 >> I0 >> T;
	cin >> D >> I >> A;
	int expectWx = w0;
	int expectIx = I0;
	int expectWo = w0;
	int expectIo = I0;
	//연산
	for (int i = 0; i < D; i++) {
		expectWx += (I - expectIx - A);
		if (expectWx <= 0) {
			break;
		}
	}

	for (int i = 0; i < D; i++) {
		expectWo += (I - expectIo - A);
		if (abs(I - expectIo - A) > T) {
			expectIo += (float)(I - expectIo - A) / 2.0;
		}
		if (expectWo <= 0 || expectIo <= 0) {
			break;
		}
	}
	
	//출력
	if (expectWx <= 0) {
		cout << "Danger Diet\n";
	}
	else {
		cout << expectWx << " " << expectIx << '\n';
	}
	if (expectWo <= 0 || expectIo <= 0) {
		cout << "Danger Diet\n";
		return 0;
	}
	else {
		cout << expectWo << " " << expectIo << " ";
	}
	if (I0 - expectIo > 0) {
		cout << "YOYO\n";
	}
	else {
		cout << "NO\n";
	}

	return 0;
}