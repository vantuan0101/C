#include <iostream>
using namespace std;
class PhanSo
{
private:
    int tu, mau;

public:
    PhanSo(){};
    PhanSo(int a, int b)
    {
        tu = a;
        mau = b;
    }
    void Xuat()
    {
        cout << tu << "/" << mau << endl;
    }
    void operate - ();
};
void PhanSo::operate - ()
{
    tu = -tu;
    mau = mau;
}
int main()
{
    PhanSo a(1, 2);
    -a;
    a.Xuat();
    return 0;
}