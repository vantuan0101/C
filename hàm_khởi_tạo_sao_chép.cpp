#include <iostream>
using namespace std;
class PhanSo
{
private:
    int TuSo, MauSo;

public:
    PhanSo()
    {
        TuSo = 0;
        MauSo = 1;
    }
    PhanSo(int tu, int mau)
    {
        TuSo = tu;
        MauSo = mau;
    }
    void Cong()
    {
        MauSo++;
    }
};
class HocSinh
{
private:
    int MSSV;
    string HoTen;

public:
    HocSinh() {}
    HocSinh(int ms, string name)
    {
        MSSV = ms;
        HoTen = name;
    }
    // Sao chep
    HocSinh(const HocSinh &hs)
    {
        Hoten = hs.HoTen;
    }
};
int main()
{
    PhanSo ps1(1, 2), ps2;
    ps2 = ps1;
    system("cls");
    system("pause");
    return 0;
}