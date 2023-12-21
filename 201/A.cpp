#include <iostream>
using namespace std;

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	int A1, A2, A3;
	cin >> A1 >> A2 >> A3;

	int temp;
	if (A1 > A2)
		swap(&A1, &A2);
	if (A2 > A3)
		swap(&A2, &A3);
	if (A1 > A2)
		swap(&A1, &A2);
	if (A3 - A2 == A2 - A1) 
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}