#include <iostream>
#include<string>
#include "Time.h"
using namespace std;
//перегрузка операции присваивания
Time& Time :: operator=(const Time& t)
{
	//проверка на самоприсваивание
	if (&t == this) return *this;
	min = t.min;
	sec = t.sec;
	return *this;
}
bool Time::operator==(const Time& t)
{
	return false;
}
//перегрузка сравненения
bool Time :: operator!=(const Time& t)
{
	int temp1 = min * 60 + sec;
	int temp2 = t.min * 60 + t.sec;
	bool z;
	if (temp1 == temp2)
	{
		cout << "Временные файлы равны" << endl;
		z = true;
	}
	else
	{
		cout << "Временные файлы НЕравны" << endl;
		z = false;
	}
	return z;
}
//перегрузка бинарной операции сложения
Time Time::operator+(const Time& t)
{
	int temp1 = min * 60 + sec;
	int temp2 = t.min * 60 + t.sec;
	Time p;
	p.min = (temp1 + temp2) / 60;
	p.sec = (temp1 + temp2) % 60;
	return p;
}
Time Time::operator-(const Time& t)
{
	int temp1 = min * 60 + sec;
	int temp2 = t.min * 60 + t.sec;
	Time p;
	if (temp2 >= temp1) {
		p.min = 0;
		p.sec = 0;
		return p;
	}
	p.min = (temp1 - temp2) / 60;
	p.sec = (temp1 - temp2) % 60;
	return p;
}
//перегрузка глобальной функции-операции ввода
istream& operator>>(istream& in, Time& t)
{
	cout << "min?"; in >> t.min;
	cout << "sec?"; in >> t.sec;
	return in;
}
//перегрузка глобальной функции-операции вывода
ostream& operator<<(ostream& out, const Time& t)
{
	return (out << t.min << " : " << t.sec);
}
