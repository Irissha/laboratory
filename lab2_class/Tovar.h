#pragma once
#include <iostream>
#include <string>
using namespace std;
class Tovar
{
	//��������
	string naimenovanie;
	int kolichestvo;
	double stoimost;
public:
	Tovar();//����������� ��� ����������
	Tovar(string, int, double);//����������� � �����������
	Tovar(const Tovar&);//����������� �����������
	~Tovar();//����������
	string get_naimenovanie();//��������
	void set_naimenovanie(string);//�����������
	int get_kolichestvo();//��������
	void set_kolichestvo(int); //�����������
	double get_stoimost();//��������
	void set_stoimost(double); //�����������
	void show();//�������� ���������
};