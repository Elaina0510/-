#include<iostream>
using namespace std;

int main4() {

	//�ַ��ͱ���������ʾ�����ַ�
	//�﷨�� char ch = 'a';
	//������ֻ���е����ַ�



//1.�ַ��ͱ���������ʽ
	char ljh = 'a';
	cout << ljh << endl;

//2.��ռ�ڴ��С
	cout << "�ַ��ͱ�����ռ�ռ�Ϊ" << sizeof(ljh) << "�ֽ�" << endl;

//3.�ַ��ͱ�����ӦASCII����
	cout << (int)ljh << endl ;


	system("pause");

	return 0;
}