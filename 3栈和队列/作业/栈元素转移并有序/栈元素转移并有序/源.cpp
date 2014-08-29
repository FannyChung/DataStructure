/*对两个栈的操作，最终将S1中的元素转移到S2中，要求S2中的元素自栈底向栈顶有序 -------------空间复杂度应为O(1)*/

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
		while (s2.top()>i){//逆序,把元素全压回s1
			s1.push(s2.top());
			s2.pop();
			k++;
			if (s2.empty())
				break;
		}
		s2.push(i);//把当前元素压到s2
		while (k>0)//把暂时压到s1的元素放回来
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