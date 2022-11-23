//
// Created by Văn Tuấn on 10/2/22.
//

#ifndef C___NHANVIEN_H
#define C___NHANVIEN_H
#include <iostream>
#include <string>
using namespace std;

class NhanVien {
protected:
    string Hoten ;
    string NgaySinh;
    float LuongCoBan;
    float Luong;
public:
    virtual void Nhap();
    virtual void Xuat();
    virtual float TinhLuong()= 0;
    string GetName (){
        return Hoten;
    };
    NhanVien(string HoTen , string NgaySinh);
    NhanVien();
    ~NhanVien();

};


#endif //C___NHANVIEN_H
