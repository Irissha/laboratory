#pragma once
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

    CashIn() // конструктор
    {
        int t[K] = { 1,2,5,10,50,100,500,1000,5000 };
        for (int j = 0; j < K; j++)
            allowed[j] = t[j];
    }
};