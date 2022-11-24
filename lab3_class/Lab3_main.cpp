#include <iostream>
#include "Time.h"
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	Time a;        //конструктор без параметров
	Time b;       //конструктор без параметров
	Time c;      //конструктор без параметров
	cin >> a;   //ввод переменной
	cin >> b;  //ввод переменной
	a == b;
	c = (a - b);  //сложение и постфиксная операция инкремент
	cout << "a= " << a << endl;   //вывод переменной
	cout << "b= " << b << endl;   //вывод переменной
	cout << "c= " << c << endl;   //вывод переменной

	return 0;
}