#include<iostream>
using namespace std;

int main() {

/*���ã����ڴӼ����ϻ�ȡ����
  �ؼ��֣�cin
  �﷨�� cin >> ����*/

	//1������
	int a = 0;
	cout << "������ͱ���a��ֵ��" << endl;
	cin >> a;
	cout << "���ͱ��� a=" << a << endl;

	//2��������
	float b = 3.14f;
	cout << "��������ͱ���b��ֵ��" << endl;
	cin >> b;
	cout << "�����ͱ���b=" << b << endl;

	//3���ַ���
	char ch = 0;
	cout << "�������ַ��ͱ���" << endl;
	cin >> ch;
	cout << "�ַ��ͱ���Ϊ��" << ch<<endl;

	//4���ַ�����
	string ljh = "wozhenshuai";
	cout << "�������ַ����ͱ�����" << endl;
	cin >> ljh;
	cout << "�ַ����ͱ���Ϊ��" <<ljh<< endl;

	//5�� ��������
	bool flag = false;
	cout << "�������������ֵ��" << endl;
	cin >> flag; //�������ͣ�ֻҪ��0��Ϊ��
	cout << "��������flag=" << flag << endl;

	system("pause");

	return 0;

}