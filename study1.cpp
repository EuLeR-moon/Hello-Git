#include<iostream>
#define month 12
using namespace std;
int main() 
{
	const int day = 7;
	short num1 = 1;
	int num2 = 10;
	long num3 = 100;
	long long num4 = 1000;
	cout << "Hello World" << endl;
	cout << "一周一共有" << day << "天。" << endl << "一年一共有" << month << "个月。" << endl;
	cout << num1 <<" " << num2 <<" " << num3 <<" " << num4 << endl;
	num3 = num1 + num2;
	cout << num3 << endl;
	num1 = 32770;
	num2 = 32768;
	cout << num1 << " " << num2 << endl;
	cout << sizeof(num1) << " " << sizeof(num2) << " " << sizeof(num3) << " " << sizeof(num4) << endl;
	system("pause");
	return 0;
	
}

