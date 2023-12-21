// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
	int a;
	cin >> a;

	int *arr = new int[a];
	for(int i = 0; i < a; i++){
		cin >> arr[i];
	}
	int count = 0;
	for (int i = 0; i < a; i++)
	{
		for (int j = i + 1; j < a; j++)
		{
			if ((arr[i] - arr[j]) % 200 == 0)
			{
				count++;
			}
		}
	}
	cout << count << endl;
	delete[] arr;
	return 0;
}

// Sample [AC] * 3
// All [AC] * 14 , TLE * 12