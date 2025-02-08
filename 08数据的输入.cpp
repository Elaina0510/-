#include<iostream>
using namespace std;

int main() {

/*作用：用于从键盘上获取数据
  关键字：cin
  语法： cin >> 变量*/

	//1、整型
	int a = 0;
	cout << "请给整型变量a赋值：" << endl;
	cin >> a;
	cout << "整型变量 a=" << a << endl;

	//2、浮点型
	float b = 3.14f;
	cout << "请给浮点型变量b赋值：" << endl;
	cin >> b;
	cout << "浮点型变量b=" << b << endl;

	//3、字符型
	char ch = 0;
	cout << "请输入字符型变量" << endl;
	cin >> ch;
	cout << "字符型变量为：" << ch<<endl;

	//4、字符串型
	string ljh = "wozhenshuai";
	cout << "请输入字符串型变量：" << endl;
	cin >> ljh;
	cout << "字符串型变量为：" <<ljh<< endl;

	//5、 布尔类型
	bool flag = false;
	cout << "请给布尔变量赋值：" << endl;
	cin >> flag; //布尔类型，只要非0皆为真
	cout << "布尔类型flag=" << flag << endl;

	system("pause");

	return 0;

}