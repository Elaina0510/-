#include<iostream>
using namespace std;

int main() {

	//������float   ռ��4�ֽ�  ��Ч����7λ
	//˫����double  ռ��8�ֽ�  ��Ч����15-16λ

	//Ĭ������£����С������ʾ����λ��Ч����
	float f1 = 3.147f;
	double f2 = 4.15456;

	cout << "f1=" << f1 << endl;
	cout << "f2=" << f2 << endl;

	cout << "float��double��ռ�ڴ�ռ�ֱ�Ϊ" << sizeof(f1) << "��" << sizeof(f2) << endl;

	//��ѧ������
	float f3 = 3e-4; //3*10^-4
	cout << "f3=" << f3 << endl;
	cout << "f3��ռ�ڴ�ռ�Ϊ" << sizeof(f3) << endl;


	system("pause");

	return 0;
}