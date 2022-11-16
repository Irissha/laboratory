#include <iostream>
#include <windows.h>
#include "Header.h"
using namespace std;

int money::summa()
{
    return first * second; //сумма купюр однго номинала
}

void money::Display()
{
    cout << first << ':' << second << endl;
}

void money::Read(int nom)
{
    first = nom;
    cout << "Enter amount:";
    cin >> second;
}

void CashIn::ReadAll()
{
    for (int j = 0; j < K; j++)
    {
        cout << "Second " << allowed[j] << endl;
        a[j].Read(allowed[j]);
    }
}

void CashIn::DisplayAll()
{
    for (int i = 0; i < K; i++)
        a[i].Display();
}          

int CashIn::TotalSum()
{
    int totalsum = 0;
    for (int i = 0; i < K; i++)
        totalsum += a[i].summa();
    return totalsum;
}

int main() 
{
    CashIn A;
    A.ReadAll();
    A.DisplayAll();
    cout << "Summa=" << A.TotalSum() << endl;

    return 0;
}
*/Header.h*/
/*#pragma once   
class money
{
private:
    int first;
    int second;
public:
    int summa();

    void Display();

    void Read(int nom);
    friend class CashIn;
};

class CashIn
{
private:
    static const int K = 9;
    int allowed[K];
    money a[K];

public:
    void ReadAll();
    void DisplayAll();
    int TotalSum();

    CashIn() 
    {
        int t[K] = { 1,2,5,10,50,100,500,1000,5000 };
        for (int j = 0; j < K; j++)
            allowed[j] = t[j];
    }
}; */
