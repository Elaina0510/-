#include<iostream>
using namespace std;

int main2() {

	//����
	//1.������ ��-2*15 ~ 2*15-1��  ��-32768~32767
	short num1 = 32770;

	//2.���� (-2*31 - 2^31-1) 
	int num2 = 10;
	
	//3.�����ͣ�-2^31 - 2^31-1)
	long num3 = 666;


	//4.�������ͣ�-2^63 - 2^63-1)
	long long num4 = 73287;


	cout << "number1��" << num1 << endl;
	cout << "number2��" << num2 << endl;
	cout << "number1��" << num3 << endl;
	cout << "number1��" << num4 << endl;

	system("pause");

	return 0;

}