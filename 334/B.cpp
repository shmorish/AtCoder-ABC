#include <iostream>
using namespace std;

int main() {
	long long A, M, L, R;

	cin >> A >> M >> L >> R;
	if (M == 0 || L == R) {
		cout << 0 << endl;
		return 0;
	}
	long long count = 0;
	unsigned long long temp = R - L + 1;
	count = temp / M;
	temp = temp % M;
	L %= M;
	if (L < 0)
		L += M;
	A %= M;
	while (A < L)
		A += M;
	A -=M;
	if (A + (M / 2) < L)
		count++;
	cout << count << endl;
}

// Sample [AC] * 3
// All [AC] * 16 , WA * 4