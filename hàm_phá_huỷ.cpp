#include <iostream>
#include <string>
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
    ~PhanSo()
    {
        cout << "Phan so da bi huy";
    } 
};
int main()
{
    PhanSo a;
    a.~PhanSo();
    system("pause");
    return 0;
};