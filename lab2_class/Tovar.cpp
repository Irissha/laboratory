#include "Tovar.h"
#include <iostream>
#include <string>
using namespace std;
//����������� ��� ����������
Tovar::Tovar()
{
	naimenovanie = "";
	kolichestvo = 0;
	stoimost = 0;
	cout << "Constructor bez parametrov dlia objecta" << this << endl;
}
//����������� � �����������
Tovar::Tovar(string N, int K, double S)
{
	naimenovanie = N;
	kolichestvo = K;
	stoimost = S;
	cout << "Constructor s parametrami dlia objecta" << this << endl;
}
//����������� �����������
Tovar::Tovar(const Tovar& t)
{
	naimenovanie = t.naimenovanie;
	kolichestvo = t.kolichestvo;
	stoimost = t.stoimost;

cout << "Constructor copirovania dlia objecta" << this << endl;
}
//����������
Tovar::~Tovar()
{
	cout << "Destructor dlia objecta" << this << endl;
}
//���������
string Tovar::get_naimenovanie()
{
	return naimenovanie;
}
int Tovar::get_kolichestvo()
{
	return kolichestvo;
}
double Tovar::get_stoimost()
{
	return stoimost;
}
//������������
void Tovar::set_naimenovanie(string N)
{
	naimenovanie = N;
}
void Tovar::set_kolichestvo(int K)
{
	kolichestvo = K;
}
void Tovar::set_stoimost(double S)
{
	stoimost = S;
}
//����� ��� ��������� ���������
void Tovar::show()
{
	cout << "naimenovanie :" << naimenovanie << endl;
	cout << "kolichestvo :" << kolichestvo << endl;
	cout << "stoimost :" << stoimost << endl;
}