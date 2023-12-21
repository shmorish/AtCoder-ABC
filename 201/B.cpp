#include <iostream>
using namespace std;

int main(){
	int N;
	cin >> N;

	int top = 0;
	int second = 0;
	int top_index = 0;
	int second_index = 0;
	string *S = new string[N];
	int *height = new int[N];
	for (int i = 0; i < N; i++)
	{
		cin >> S[i] >> height[i];
		if (height[i] > top)
		{
			second = top;
			top = height[i];
			second_index = top_index;
			top_index = i;
		}
		else if (height[i] > second)
		{
			second = height[i];
			second_index = i;
		}
	}
	cout << S[second_index] << endl;
}