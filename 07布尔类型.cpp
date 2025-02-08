#include<iostream>
using namespace std;

int main7() {

	//1、创建布尔数据类型

	bool flag = true;//true代表真 1
	cout << flag << endl;

	     flag = false;//false代表假 0 
	cout << flag << endl;
	
	
	//2、查看bool类型所占内存空间
	cout << "布尔类型所占内存空间为" << sizeof(bool) << endl;

	system("pause");

	return 0;
}