/*������ջ�Ĳ��������ս�S1�е�Ԫ��ת�Ƶ�S2�У�Ҫ��S2�е�Ԫ����ջ����ջ������ -------------�ռ临�Ӷ�ӦΪO(1)*/

//OK
#include<iostream>
#include<stack>
using namespace std; 

stack<int> getS2(stack<int> s1){
	stack<int> s2;
	int i = s1.top();
	s1.pop();

	s2.push(i);
	while (!s1.empty())
	{
		int k = 0;
		i = s1.top();
		s1.pop();
		while (s2.top()>i){//����,��Ԫ��ȫѹ��s1
			s1.push(s2.top());
			s2.pop();
			k++;
			if (s2.empty())
				break;
		}
		s2.push(i);//�ѵ�ǰԪ��ѹ��s2
		while (k>0)//����ʱѹ��s1��Ԫ�طŻ���
		{
			s2.push(s1.top());
			s1.pop();
			k--;
		}
	}
	return s2;
}

int main(){
	stack<int> s1;
	int A[] = { 3, 5, 1, 4, 7, 9, 3, 8 };
	for (int i = 0; i < 8; i++)
	{
		s1.push(A[i]);
	}

	stack<int> s2 = getS2(s1);
	while (!s2.empty())
	{
		cout << s2.top() << '\t';
		s2.pop();
	}
	return 0;
}