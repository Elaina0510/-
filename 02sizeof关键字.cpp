#include<iostream>
using namespace std;

int main() {
	//利用sizeof求出数据类型占用内存空间
	//语法： sizeof(数据类型/ 变量）

	short hhh = 43;
	cout << "short所占内存空间为" << sizeof(short) << endl;
	cout << "short所占内存空间为" << sizeof(hhh) << endl;




	system("pause");

	return 0;
}