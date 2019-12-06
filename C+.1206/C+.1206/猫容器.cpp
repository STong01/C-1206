#include <iostream>
using namespace std;

//猫容器，猫进容器，n为猫的身长，m为容器的半径
//如果身长超过容器的周长，猫就进不去，否则就可以进去，假设π为3.14
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