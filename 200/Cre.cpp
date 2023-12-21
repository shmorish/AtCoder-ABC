#include <iostream>
using namespace std;

int main(void) {
	int N; // 1 <= N <= 2 * 10^5
	cin >> N;

	long *A = new long[N]; // 0 <= A[i] <= 10^9
	int *count = new int[200];
	for (int i = 0; i < 200; i++) {
		count[i] = 0;
	}
	for (int i = 0; i < N; i++) {
		cin >> A[i];
		A[i] %= 200;
		count[A[i]]++;
	}
	int ans = 0;
	for(int i = 0; i < 200; i++) {
		if (count[i] >= 2) {
			ans += count[i] * (count[i] - 1) / 2;
		}
	}
	cout << ans << endl;
	delete[] A;
	delete[] count;
	return 0;
}

// Sample [AC] * 3
// All [AC] * 21 , WA * 5