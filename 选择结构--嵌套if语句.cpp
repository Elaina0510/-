#include<iostream>
using namespace std;

int main() {
	//1、提示用户输入工资
	int score = 0;
	cout << "请输入你的工资" << endl;
	cin >> score;

	//2、显示用户输入的工资
	cout << "您输入的工资为" << score << endl;

	//3、判断是否大于8000
		 //if条件后面不要加分号
	if (score > 8000)
	{
		
		if (score > 20000)
		{
			cout << "哇是富哥哎"<<endl;
		}
		else if (score > 10000)
		{
			cout << "有点钱哈" << endl;
		}
		else
		{
			cout << "继续努力" << endl;
		}
	}

	else if (score > 5000)
	{

		cout << "勉强" << endl;
	}

	else if (score > 4000)
	{
		cout << "just soso" << endl;
	}

	else //不满足条件执行else后大括号的内容
	{
		cout << "你个穷逼呵呵\n";
	}




	system("pause");

	return 0;

}