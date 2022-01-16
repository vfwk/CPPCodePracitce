//sqrt.cpp -- 获取平方根

#include<iostream>
#include<cmath>
int main()
{
	using namespace std;

	double area;
	cout << "输入一个实数，获取它的平方根：" << endl;
	cin >> area;

	double side;
	side = sqrt(area);

	cout << "原数据是：" << area
		<< "结果为：" << side << endl;

	cin.get();
	cin.get();
	return 0;
}