#include<iostream>
using namespace std;

int main() {

	//逻辑运算符 非 ！
	   int a = 10;
	   //除了0都是真
	   cout << !a << endl;
	   
	   cout << !!a << endl;


	//逻辑运算符 与 &&  (同真为真，其余为假）
	   int b = 20;

	   cout << ( a && b ) << endl;

	   a = 0;
	   b = 10;
	   cout << (a && b) << endl;

	   a = 0;
	   b = 0;
	   cout << (a && b) << endl;


	//逻辑运算符 或 ||   （同假为假， 其余为真）
	   cout << (a || b) << endl;

	   b = 10;
	   cout << (a || b) << endl;
 


	system("pause");

	return 0;

}