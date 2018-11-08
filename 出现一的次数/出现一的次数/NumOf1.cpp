#include <iostream>
using namespace std;

/*
//解法一,但是这个程序并不好，经过调试发现，如果是32位的整数，会循环32次
int NumOf1(int n)
{
	int flag = 1;
	int count = 0;
	if (n <= 0)
		return 0;
	while (flag)
	{
		if (n&flag)
			++count;
		flag = flag << 1;
	}
	return count;
}
*/
//解法二
int NumOf1(int n)
{
	int count = 0;
	if (n <= 0)
		return 0;
	while (n)
	{
		++count;
		n = (n - 1)&n;
	}
	return count;
}
int main()
{
	int n = 0;
	cout << "请输入你要判断的数：";
	cin >> n;
	cout << "该数中含有 1 的个数为：" << NumOf1(n) << endl;
	return 0;
}