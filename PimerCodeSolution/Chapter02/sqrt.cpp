//sqrt.cpp -- ��ȡƽ����

#include<iostream>
#include<cmath>
int main()
{
	using namespace std;

	double area;
	cout << "����һ��ʵ������ȡ����ƽ������" << endl;
	cin >> area;

	double side;
	side = sqrt(area);

	cout << "ԭ�����ǣ�" << area
		<< "���Ϊ��" << side << endl;

	cin.get();
	cin.get();
	return 0;
}