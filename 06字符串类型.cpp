#include<iostream>
using namespace std;
#include<string>   //使用c++风格字符串时需要加入该头文件#include<string>

int main6() {
	//1.c风格的字符串
	//     记得加中括号[]
	//     等号后面加双引号
	char ljh[] = "hello world";
	cout << ljh << endl;

	
		
	//2.c++风格字符串
		string ljh2 = "world hello";
		cout << ljh2 << endl;

	system("pause");

	return 0;

}