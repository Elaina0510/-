#include<iostream>
using namespace std;

int main() {
	//1����ʾ�û����빤��
	int score = 0;
	cout << "��������Ĺ���" << endl;
	cin >> score;

	//2����ʾ�û�����Ĺ���
	cout << "������Ĺ���Ϊ" << score << endl;

	//3���ж��Ƿ����8000
		 //if�������治Ҫ�ӷֺ�
	if (score > 8000)
	{
		
		if (score > 20000)
		{
			cout << "���Ǹ��簥"<<endl;
		}
		else if (score > 10000)
		{
			cout << "�е�Ǯ��" << endl;
		}
		else
		{
			cout << "����Ŭ��" << endl;
		}
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
		cout << "�����ƺǺ�\n";
	}




	system("pause");

	return 0;

}