#include<iostream>
using namespace std;

int main() {

	//ѡ��ṹ ����if���
	//���빤�ʣ�����8000��Ϊ����

	//1���û����빤��
	int score = 0;
	cout << "��������Ĺ���" << endl;
	cin >> score;

	//2����ӡ�û�����Ĺ���
	cout << "������Ĺ���Ϊ" << score << endl;

	//3���ж��Ƿ����8000
	     //if�������治Ҫ�ӷֺ�
	if (score > 8000)
	{
		cout << "��ϲ�㲻�ǹ�" << endl;
	}


	system("pause");

	return 0;
}