#include <iostream>
#include <string>
using namespace std;
class PhanSo
{
private:
    static int dem;

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
        dem++;
    }
    void Cong()
    {
        MauSo++;
    }
    void XemGiaTriDem()
    {
        cout << dem << endl;
    }
    ~PhanSo()
    {
        cout << "Phan so da bi huy";
    }
};
int PhanSo::dem = 0; // Khong gan thi mac dinh la 0
int main()
{
    PhanSo ps1(1, 2), ps2(3, 4);
    ps1.XemGiaTriDem();
    ps2.XemGiaTriDem();
    system("pause");
    return 0;
};