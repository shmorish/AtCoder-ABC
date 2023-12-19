#include <iostream>
using namespace std;

int main(void)
{
	long long a, b;
	cin >> a >> b;

	for (int i = 0; i < b; i++)
	{
		if (a % 200 == 0)
			a /= 200;
		else
			a = a * 1000 + 200;
	}
	cout << a << endl;
}