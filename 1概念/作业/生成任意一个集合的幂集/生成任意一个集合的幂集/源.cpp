#include<iostream>
#include<vector>
using namespace std;
//生成任意一个集合的幂集
//每个元素都有在或者不在两种选择，共2^n-1个答案
void getMi(int S[],int n,int i){
	int size = pow(2, n);
	vector<vector<int>> v(size);
	int s = 1;
	for (int i = 0; i < n; i++)//每个元素
	{
		int j = 0;
		while (j<size)
		{
			j += s;//空s个
			for (int k = 0; k < s; k++)//连续插入s个
			{
				v[j].push_back(S[i]);
				j++;
			}
		}
		s *= 2;
	}
	//打印
	for (int i = 1; i < size; i++)
	{
		for (int j = 0; j < v[i].size(); j++)
		{
			cout << v[i][j] << '\t';
		}
		cout << endl;
	}
}
int main(){
	int S[] = { 1,2,3,4 };
	getMi(S, 4, 0);
	return 0;
}