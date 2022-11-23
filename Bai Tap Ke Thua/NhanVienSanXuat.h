//
// Created by Văn Tuấn on 10/2/22.
//

#ifndef BAI_TAP_KE_THUA_NHANVIENSANXUAT_H
#define BAI_TAP_KE_THUA_NHANVIENSANXUAT_H
#include "NhanVien.h"

class NhanVienSanXuat : public NhanVien{
private:
    int SoSanPham;
public:
    void Nhap();
    void Xuat();
    float TinhLuong();
    NhanVienSanXuat();
    ~NhanVienSanXuat();
};


#endif //BAI_TAP_KE_THUA_NHANVIENSANXUAT_H
