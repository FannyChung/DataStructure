#include<iostream>
using namespace std;
//请编写算法，将数组中的奇数存放在下标为奇数的数组单元中，偶数存放在下标为偶数的数组单元中
void changeAry(int A[],int n){
	int i = 0, j = 1;
	while (1)
	{
		while (A[i]%2==0)
		{
			i += 2;
		}
		while (A[j]%2==1)//下标为奇数对应元素为奇数
		{
			j += 2;
		}
		if (i >= n || j >= n)
			break;
		int tmp = A[i];
		A[i] = A[j];
		A[j] = tmp;
	}
}

int main(){
	int A[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (int i = 0; i < 10; i++)
	{
		cout << A[i] << '\t';
	}
	cout << endl;

	changeAry(A, 10);
	for (int i = 0; i < 10; i++)
	{
		cout << A[i] << '\t';
	}
	cout << endl;
	return 0;
}