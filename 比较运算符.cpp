#include<iostream>
using namespace std;

int main() {

	//比较运算符         //括号优先计算
	// == 等于
	int a = 10;
	int b = 20;

	cout << "这是对的还是错的:（对是1，错是0）"<<(a == b) << endl;


	// ！= 不等于
	cout << "这是对的还是错的:（对是1，错是0）" << (a != b) << endl;

	//>
	cout << "这是对的还是错的:（对是1，错是0）" << (a > b) << endl;

	//<
	cout << "这是对的还是错的:（对是1，错是0）" << (a < b) << endl;

	//>=
	cout << "这是对的还是错的:（对是1，错是0）" << (a >= b) << endl;

	//<=
	cout << "这是对的还是错的:（对是1，错是0）" << (a <= b) << endl;




	system("pause");

	return 0;
}