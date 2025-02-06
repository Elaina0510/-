#include<iostream>
using namespace std;

int main2() {

	//整型
	//1.短整型 （-2*15 ~ 2*15-1）  即-32768~32767
	short num1 = 32770;

	//2.整型 (-2*31 - 2^31-1) 
	int num2 = 10;
	
	//3.长整型（-2^31 - 2^31-1)
	long num3 = 666;


	//4.长长整型（-2^63 - 2^63-1)
	long long num4 = 73287;


	cout << "number1是" << num1 << endl;
	cout << "number2是" << num2 << endl;
	cout << "number1是" << num3 << endl;
	cout << "number1是" << num4 << endl;

	system("pause");

	return 0;

}