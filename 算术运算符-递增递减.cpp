#include<iostream>
using namespace std;

int main() {

	//1��ǰ�õ���
	int a = 10;
	++a;//�ñ�����һ
	cout << "a = " << a<<endl;

	//2�����õ���
	int b = 10;
	b++;//�ñ�����һ
	cout << "b = " <<b<< endl;

	//3��ǰ�úͺ��õ�����
	//ǰ�ã����ñ�����һ���ٽ��б��ʽ����
	int a2 = 10;
	int b2 = ++a2 * 10;
	cout << a2 << endl;
	cout << b2 << endl;


	//���ã��Ƚ��б��ʽ���㣬���ñ�����һ
	int a3 = 10;
	int b3 = a3++ * 10;
	cout << a3 << endl;
	cout << b3 << endl;


	system("pause");

	return 0;

}