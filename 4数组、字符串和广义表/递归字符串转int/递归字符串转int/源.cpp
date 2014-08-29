#include<iostream>
using namespace std;


int stringInt(char *s, int m){ //倒序。因为:4356的计算过程为((4*10+3)*10+5)*10+6
	if (m == 0){
		return s[m] - '0';
	}
	int i = s[m] - '0';
	int tmp = stringInt(s,m-1);
	return tmp * 10 + i;//return i * 10 + tmp;
}
int stringToint(char *s){
	int i = 0;
	while (s[i]!='\0')
	{
		i++;
	}
	return stringInt(s, i-1);
}
int main(void){
	char s[] = "43567";
	cout << stringToint(s) << endl;
	return 0;
}