#include<iostream>
#include<vector>
using namespace std;
//��������һ�����ϵ��ݼ�
//ÿ��Ԫ�ض����ڻ��߲�������ѡ�񣬹�2^n-1����
void getMi(int S[],int n,int i){
	int size = pow(2, n);
	vector<vector<int>> v(size);
	int s = 1;
	for (int i = 0; i < n; i++)//ÿ��Ԫ��
	{
		int j = 0;
		while (j<size)
		{
			j += s;//��s��
			for (int k = 0; k < s; k++)//��������s��
			{
				v[j].push_back(S[i]);
				j++;
			}
		}
		s *= 2;
	}
	//��ӡ
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