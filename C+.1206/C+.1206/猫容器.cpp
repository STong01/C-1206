#include <iostream>
using namespace std;

//è������è��������nΪè������mΪ�����İ뾶
//����������������ܳ���è�ͽ���ȥ������Ϳ��Խ�ȥ�������Ϊ3.14
void test(double n, double m)
{
	double s1 = n;
	double s2 = 6.28 * m;

	if (s1 > s2)
	{
		cout << "No" << endl;
	}
	else
	{
		cout << "Yes" << endl;
	}
}

int main()
{
	double n, m;
	while (cin >> n >> m)
	{
		test(n, m);
	}
	system("pause");
	return 0;
}