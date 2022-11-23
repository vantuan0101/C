//
// Created by Văn Tuấn on 10/2/22.
//

#ifndef BAI_TAP_KE_THUA_CONGTY_H
#define BAI_TAP_KE_THUA_CONGTY_H
#include "NhanVienVanPhong.h"
#include "NhanVienSanXuat.h"
#include "NhanVienQuanLy.h"
#include <vector>

class CongTy {
private:
    vector<NhanVienQuanLy> NVQuanLy;
    vector<NhanVienVanPhong> NVVanPhong;
    vector<NhanVienSanXuat> NVSanXuat;
    vector<NhanVien *> DSNhanVien;
public:
    void Nhap();
    void Xuat();
    float TinhTongLuong();
    void TimKiemNhanVien(string name);
    CongTy();
    ~CongTy();
};


#endif //BAI_TAP_KE_THUA_CONGTY_H
