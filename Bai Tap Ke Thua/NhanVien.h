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
    void Nhap();
    void Xuat();
    string GetName (){
        return Hoten;
    };
    NhanVien();
    ~NhanVien();

};


#endif //C___NHANVIEN_H
