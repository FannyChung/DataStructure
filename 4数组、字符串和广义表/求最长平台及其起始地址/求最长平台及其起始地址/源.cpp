#include<iostream>
using namespace std;

void getMax(int *A,int N,int &maxLen,int &qi){
	maxLen = 0;
	qi = 0;
	for (int i = 0; i < N; )//i++在这里效率低，因为连续几个都是一样的，就可以在连续的里面自增i
	{
		int t = i;
		int x = A[i];
		i++;
		while (x == A[i] && i<N)
		{
			i++;
		}
		int len = i - t;
		if (len > maxLen){
			maxLen = len;
			qi = t;
		}
	}
}
int main(){
	int A[32] = { 0, 0, 1, 1, 2, 0, 0, 0, 0, 1, 6, 3, 8, 9, 9, 9, 4, 5, 5, 5, 5, 5, 5, 5, 0, 6, 4, 1, 6, 4, 0, 0 };
	int qi;
	int maxLen;
	getMax(A, 32, maxLen, qi);
	cout << qi << endl;
	cout << maxLen << endl;
	return 0;
}