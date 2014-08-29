#include<iostream>
using namespace std;

void reverse(int A[], int start, int end){
	int mid = (start + end) / 2;
	for (int i = start; i <= mid; i++)
	{
		int tmp = A[i];
		int k = start + end - i;
		A[i] = A[k];
		A[k] = tmp;
	}

}

void leftShift(int A[],int p,int n){
	reverse(A, 0, n - 1);

	reverse(A, 0, n-p-1);
	reverse(A, n - p, n - 1);
}

int main(){
	int A[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	leftShift(A, 3, 10);
	for (int i = 0; i < 10; i++)
	{
		cout << A[i] << '\t';
	}
	cout << endl;
	return 0;
}