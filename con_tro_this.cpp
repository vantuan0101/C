#include <iostream>
using namespace std;
// Con trõ this là gì ?
class PhanSo
{
private:
    int TuSo, MauSo;

public:
    PhanSo RutGon();
    void Nhap();
    void Xuat();
};

void PhanSo::Nhap()
{
    cout << "Nhap tu so";
    // cin >> TuSo;
    // Hai cach nhu nhau
    cin >> this->TuSo;
    cout << "Nhap mau so";
    //  cin >> MauSo;
    cin >> this->MauSo;
};
void PhanSo::Xuat()
{
    cout << "Phan so vua nhap la: " << this->TuSo << "/" << this->MauSo;
};
PhanSo PhanSo::RutGon()
{
    int a, b;
    a = abs(this->TuSo);
    b = abs(this->MauSo);
    while (a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    this->TuSo /= a;
    this->MauSo /= a;
    return *this;
    // this là con trỏ , *this là giá trị của con trỏ
};
int main()
{
    PhanSo ps;
    ps.Nhap();
    ps.RutGon();
    ps.Xuat();
    system("pause");
    return 0;
};