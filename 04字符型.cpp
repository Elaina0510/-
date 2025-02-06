#include<iostream>
using namespace std;

int main4() {

	//字符型变量用于显示单个字符
	//语法： char ch = 'a';
	//单引号只能有单个字符



//1.字符型变量创建方式
	char ljh = 'a';
	cout << ljh << endl;

//2.所占内存大小
	cout << "字符型变量所占空间为" << sizeof(ljh) << "字节" << endl;

//3.字符型变量对应ASCII编码
	cout << (int)ljh << endl ;


	system("pause");

	return 0;
}