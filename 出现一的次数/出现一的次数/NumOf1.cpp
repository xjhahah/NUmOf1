#include <iostream>
using namespace std;

/*
//�ⷨһ,����������򲢲��ã��������Է��֣������32λ����������ѭ��32��
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
//�ⷨ��
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
	cout << "��������Ҫ�жϵ�����";
	cin >> n;
	cout << "�����к��� 1 �ĸ���Ϊ��" << NumOf1(n) << endl;
	return 0;
}