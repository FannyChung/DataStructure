#include<iostream>
using namespace std;

//求数组中相差最大的两个数的差值
int MinDistance(int n, int A[]) {//老师的算法，O(n2)
	int dmax = 0;
	int i, j;
	for (i = 0; i<n; i++)
		for (j = 0; j<n; j++)
			if (i != j && abs(A[i] - A[j])>dmax)
				dmax = abs(A[i] - A[j]);
	return dmax;
}

int getMin(int n, int A[]){//自己改编的算法
	if (n == 1){
		return A[0];
	}
	int max, min;
	if (A[0]>A[1]){
		max = A[0];
		min = A[1];
	}
	else
	{
		max = A[1];
		min = A[0];
	}
	for (int i = 2; i < n; i++)
	{
		if (A[i]>max){
			max = A[i];
		}
		else if (A[i] < min){
			min = A[i];
		}
	}
	return max - min;
}
int main(){
	int A[] = { 1, 3, 2, 4, 5, 2, 6, 7, 3, 8, 4, 89 };
	cout << getMin(12, A)<<endl;
	cout << MinDistance(12, A) << endl;
	return 0;
}