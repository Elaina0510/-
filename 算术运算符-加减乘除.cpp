#include<iostream>
using namespace std;

int main() {

	//加减乘除
	int a1 = 10;
	int b2 = 3;

	cout << "相加为 "<<a1 + b2 << endl;
	cout << "相乘为"<<a1 * b2 << endl;
	cout << "除为"<<a1 / b2 << endl; //两个整数相除结果为整数，将小数部分去除


	//除数为0
	int c1 = 10;
	int d1 = 0;
		//cout << c1 / d1 << endl; 错误！ 两个数相除，除数不可为0

	
	//两小数相除
	double e1 = 0.66;
	double f1 = 0.367326;
	cout << e1 / f1 << endl;//运算结果可以是小数

	int k = 10;
	double j = 0.541123;
	cout << k / j << endl;

	system("pause");

	return 0;

}