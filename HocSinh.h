#include <iostream>
using namespace std;
#pragma once

class HocSinh
{
private:
    string Hoten, DiaChi;
    float DiemToan, DiemVan;

public:
    void Xuat();
    void Nhap();
    HocSinh();  // Hàm khởi tạo mat dinh
    ~HocSinh(); // Hàm hủy
};