//
// Created by Văn Tuấn on 10/2/22.
//

#include "NhanVienQuanLy.h"
NhanVienQuanLy::NhanVienQuanLy(string HoTen, string NgaySinh, float HeSo, float Thuong)  :  NhanVien(HoTen , NgaySinh){
    HeSo = HeSo;
    Thuong =Thuong;
}
void NhanVienQuanLy::Nhap() {
    NhanVien::Nhap();
    cout << "\n Nhap He So" <<endl;
    cin>>HeSo;
    cout<< "\n Nhap Thuong" <<endl;
    cin >>Thuong;
}
void NhanVienQuanLy::Xuat() {
    NhanVien::Xuat();
    cout << "\n Day la class NhanVienQuanLy" ;
    cout << "\n He So" <<HeSo;
    cout<< "\n Thuong" <<Thuong;
}
float NhanVienQuanLy::TinhLuong() {
    Luong = LuongCoBan * HeSo + Thuong;
    return Luong;
}
NhanVienQuanLy::NhanVienQuanLy() {}
NhanVienQuanLy::~NhanVienQuanLy() {}