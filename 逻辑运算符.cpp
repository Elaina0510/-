#include<iostream>
using namespace std;

int main() {

	//�߼������ �� ��
	   int a = 10;
	   //����0������
	   cout << !a << endl;
	   
	   cout << !!a << endl;


	//�߼������ �� &&  (ͬ��Ϊ�棬����Ϊ�٣�
	   int b = 20;

	   cout << ( a && b ) << endl;

	   a = 0;
	   b = 10;
	   cout << (a && b) << endl;

	   a = 0;
	   b = 0;
	   cout << (a && b) << endl;


	//�߼������ �� ||   ��ͬ��Ϊ�٣� ����Ϊ�棩
	   cout << (a || b) << endl;

	   b = 10;
	   cout << (a || b) << endl;
 


	system("pause");

	return 0;

}