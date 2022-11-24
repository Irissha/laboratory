#include "Tovar.h"
#include <iostream>
#include <string>
using namespace std;
//конструктор без параметров
Tovar::Tovar()
{
	naimenovanie = "";
	kolichestvo = 0;
	stoimost = 0;
	cout << "Constructor bez parametrov dlia objecta" << this << endl;
}
//конструктор с параметрами
Tovar::Tovar(string N, int K, double S)
{
	naimenovanie = N;
	kolichestvo = K;
	stoimost = S;
	cout << "Constructor s parametrami dlia objecta" << this << endl;
}
//конструктор копирования
Tovar::Tovar(const Tovar& t)
{
	naimenovanie = t.naimenovanie;
	kolichestvo = t.kolichestvo;
	stoimost = t.stoimost;
	cin >> i;
	cout << "Vvedite stoimost: ";
	cin >> d;
	Tovar t(s, i, d);
	return t;
}
//функция для передачи объекта как параметра
void print_tovar(Tovar t)
{
	t.show();
}
void main()
{
	//конструктор без параметров
	Tovar t1;
	t1.show();
	//коструктор с параметрами
	Tovar t2("Computer", 1, 15000);
	t2.show();
	//конструктор копирования
	Tovar t3 = t2;
	t3.set_naimenovanie("Telephon");
	t3.set_kolichestvo(2);
	t3.set_stoimost(5000.0);
	//конструктор копирования
	print_tovar(t3);
	//конструктор копирования
	t1 = make_tovar();
	t1.show();
}