#include "HocSinh.h"
void HocSinh::Nhap()
{
    cout << "Nhap ho ten: ";
    getline(cin, Hoten);
    cout << "Nhap dia chi: ";
    getline(cin, DiaChi);
    cout << "Nhap diem toan: ";
    cin >> DiemToan;
    cout << "Nhap diem van: ";
    cin >> DiemVan;
}

void HocSinh::Xuat()
{
    fflush(stdin);
    cout << "Ho ten: " << Hoten << endl;
    cout << "Dia chi: " << DiaChi << endl;
    cout << "Diem toan: " << DiemToan << endl;
    cout << "Diem van: " << DiemVan << endl;
}
HocSinh::HocSinh()
{
}

HocSinh::~HocSinh()
{
}