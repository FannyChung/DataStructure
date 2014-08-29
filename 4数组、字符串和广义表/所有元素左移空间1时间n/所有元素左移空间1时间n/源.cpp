//所有元素左移P个位置：Ap,Ap+1,...An-1,A0,A1,..Ap-1，要求：时间O(n)，空间O(1)

//先把所有元素倒序，再把两部分分别倒序
//倒序：按对称交换

#include<iostream>
using namespace std;


void reverse(int *A, int start, int end){//[start,end)
	cout << "交换前：" << endl;
	for (int i = start; i < end; i++)
	{
		cout << A[i] << "\t";
	}
	cout << endl;
	int i = start, j = end - 1;
	while (i<j)
	{
		int tmp = A[i];
		A[i] = A[j];
		A[j] = tmp;
		i++; j--;
	}
	cout << "交换后：" << endl;
	for (int i = start; i < end; i++)
	{
		cout << A[i] << "\t";
	}
	cout << endl;
	cout << endl;
}
void leftShift(int *A,int n,int p){
	reverse(A, 0, n);
	reverse(A, 0, n-p);
	reverse(A, n - p, n);
}
int main(){
	int A[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	leftShift(A, 10, 3);
	for (int i = 0; i < 10; i++)
	{
		cout << A[i] << '\t';
	}
	return 0;
}