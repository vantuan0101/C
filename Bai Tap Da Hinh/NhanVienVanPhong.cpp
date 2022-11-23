//
// Created by Văn Tuấn on 10/2/22.
//

#include "NhanVienVanPhong.h"
void NhanVienVanPhong::Nhap() {
    NhanVien::Nhap();  // Ke thua tu lop cha la : Nhan Vien
    cout << "\nNhap So ngay lam viec" <<endl;
    cin >> SoNgayLamViec;
    cout << "\n Nhap tro cap" <<endl;
    cin >> TroCap;
}
void NhanVienVanPhong::Xuat() {
    NhanVien::Xuat();
    cout << "\nSo ngay lam viec : " <<SoNgayLamViec;
    cout << "\ntro cap :" <<TroCap;
}
float NhanVienVanPhong::TinhLuong() {
    Luong = LuongCoBan + SoNgayLamViec*100000 + TroCap;
    return Luong;
}
NhanVienVanPhong::NhanVienVanPhong() {}
NhanVienVanPhong::~NhanVienVanPhong() {}
