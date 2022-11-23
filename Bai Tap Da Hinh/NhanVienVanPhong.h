//
// Created by Văn Tuấn on 10/2/22.
//

#ifndef BAI_TAP_KE_THUA_NHANVIENVANPHONG_H
#define BAI_TAP_KE_THUA_NHANVIENVANPHONG_H
#include "NhanVien.h"

class NhanVienVanPhong :public  NhanVien{
protected:
    int SoNgayLamViec;
    float TroCap;
public:
    void Nhap();
    void Xuat();
    float TinhLuong();

    NhanVienVanPhong();
    ~NhanVienVanPhong();
};


#endif //BAI_TAP_KE_THUA_NHANVIENVANPHONG_H
