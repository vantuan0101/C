//
// Created by Văn Tuấn on 10/2/22.
//

#ifndef BAI_TAP_KE_THUA_NHANVIENQUANLY_H
#define BAI_TAP_KE_THUA_NHANVIENQUANLY_H
#include "NhanVien.h"

class NhanVienQuanLy : public  NhanVien{
private:
    float HeSo,Thuong;
public:
    void Nhap();
    void Xuat();
    float TinhLuong();
    NhanVienQuanLy(string HoTen , string NgaySinh , float HeSo , float Thuong);
 NhanVienQuanLy();
 ~NhanVienQuanLy();
};


#endif //BAI_TAP_KE_THUA_NHANVIENQUANLY_H
