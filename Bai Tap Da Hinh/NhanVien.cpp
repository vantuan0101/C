//
// Created by Văn Tuấn on 10/2/22.
//

#include "NhanVien.h"
NhanVien::NhanVien(string HoTen , string NgaySinh) {
    HoTen = Hoten;
    NgaySinh = NgaySinh;
}
void NhanVien::Nhap(){
    fflush(stdin);
    cout << "\nNhap ho ten" <<endl;
    getline(cin,Hoten);
    fflush(stdin);
    cout << "\nNhap Ngay Sinh" <<endl;
    getline(cin,NgaySinh);

}
void NhanVien::Xuat (){
    cout << "\nho ten" <<Hoten <<endl;
    cout << "\nNgay Sinh" <<NgaySinh <<endl;
    cout << "\nluong co ban" <<LuongCoBan <<endl;
}
NhanVien::NhanVien() {
    LuongCoBan = 200000;
}
NhanVien::~NhanVien() {}
