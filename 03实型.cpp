#include<iostream>
using namespace std;

int main() {

	//单精度float   占用4字节  有效数字7位
	//双精度double  占用8字节  有效数字15-16位

	//默认情况下，输出小数会显示出六位有效数字
	float f1 = 3.147f;
	double f2 = 4.15456;

	cout << "f1=" << f1 << endl;
	cout << "f2=" << f2 << endl;

	cout << "float和double所占内存空间分别为" << sizeof(f1) << "和" << sizeof(f2) << endl;

	//科学计数法
	float f3 = 3e-4; //3*10^-4
	cout << "f3=" << f3 << endl;
	cout << "f3所占内存空间为" << sizeof(f3) << endl;


	system("pause");

	return 0;
}