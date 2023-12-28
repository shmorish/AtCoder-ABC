#include <iostream>
#define REP(n) for (int i = 0; i < (int)(n); i++)
#define coutln(x) std::cout << (x) << std::endl
#define cinln(x) std::cin >> (x)
using namespace std;

int main() {
	string s;
	cinln(s);
	REP(s.size()) {
		if (s[s.size() - i - 1] == '6') cout << '9';
		else if (s[s.size() - i - 1] == '9') cout << '6';
		else cout << s[s.size() - i - 1];
	}
	cout << endl;
}