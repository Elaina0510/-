#include<iostream>
using namespace std;

int main() {

	//ѡ��ṹ ����if���

	//1���û�����
	int score = 0;
	cout << "��������Ĺ���" << endl;
	cin >> score;

	//2����ӡ�û�����Ĺ���
	cout << "������Ĺ���Ϊ" << score << endl;

	//3���ж��Ƿ����8000
		 //if�������治Ҫ�ӷֺ�
	if (score > 8000)
	{
		cout << "��ϲ�㲻�����" << endl;
	}

	else if (score > 5000)
	{

		cout << "��ǿ" << endl;
	}

	else if (score > 4000)
	{
		cout << "just soso" << endl;
	}

	else //����������ִ��else������ŵ�����
	{
        cout << "������\n";
	}


    system("pause");

	return 0;

}