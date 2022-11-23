//
// Created by Văn Tuấn on 10/2/22.
//

#include "NhanVienSanXuat.h"

void NhanVienSanXuat::Nhap() {
    NhanVien::Nhap();
    cout<< "\n Nhap So san pham" <<endl;
    cin >> SoSanPham;
}
void NhanVienSanXuat::Xuat() {
    NhanVien::Xuat();
    cout<< "\nSo san pham" <<SoSanPham;
}
float NhanVienSanXuat::TinhLuong() {
    Luong =  LuongCoBan + SoSanPham*2000;
    return Luong;
}
NhanVienSanXuat::NhanVienSanXuat() {}
NhanVienSanXuat::~NhanVienSanXuat() {}
