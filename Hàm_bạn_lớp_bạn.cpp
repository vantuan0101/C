#include <iostream>
using namespace std;
class HinhChuNhat
{
private:
    float chieuDai, chieuRong;

public:
    HinhChuNhat();
    HinhChuNhat(float chieuDai, float chieuRong)
    {
        this->chieuDai = chieuDai;
        this->chieuRong = chieuRong;
    };
    friend float DienTich(HinhChuNhat);
};

float DienTich(HinhChuNhat hcn)
{
    return hcn.chieuDai * hcn.chieuRong;
};

int main()
{
    HinhChuNhat hcn(3, 4);
    cout << "Dien tich hinh chu nhat la: " << DienTich(hcn);
    system("pause");
    return 0;
}