//
// Created by Văn Tuấn on 10/2/22.
//
#include "CongTy.h"
void CongTy::Nhap() {
    int LuaChon;
    do{
        cout << "\n-------Menu--------";
        cout << "\n 1.Nhap Nhap vien van phong";
        cout << "\n 2.Nhap nhan vien san xuat";
        cout << "\n 3.Nhap nhan vien quan ly";
        cout << "\n 4.Thoat";
        cout << "\n-------------------" <<endl;
        do {
            cin >> LuaChon;
            if(LuaChon  < 1 || LuaChon > 4)
                cout << "\n Nhap Sai Lua Chon";
        }while (LuaChon < 1 || LuaChon > 4);
            if (LuaChon ==1 ) {
                NhanVienVanPhong VP;
                VP.Nhap();
                NVVanPhong.push_back(VP);

            } else if(LuaChon == 2) {
                NhanVienSanXuat sx;
                sx.Nhap();
                NVSanXuat.push_back(sx);

            }else if(LuaChon == 3 ){
                NhanVienQuanLy ql;
                ql.Nhap();
                NVQuanLy.push_back(ql);
            }

    }while(LuaChon != 4);
};
void CongTy::Xuat() {
    cout << "\n-------Danh Sach Nhan vien quan ly";
    for (int i=0 ; i< NVQuanLy.size() ; i++){
        NVQuanLy[i].Xuat();
    }
    cout << "\n-------Danh Sach Nhan vien san xuat";
    for (int i=0 ; i< NVSanXuat.size() ; i++){
        NVSanXuat[i].Xuat();
    }
    cout << "\n-------Danh Sach Nhan vien Van phong";
    for (int i=0 ; i< NVVanPhong.size() ; i++){
        NVVanPhong[i].Xuat();
    }
}
float CongTy::TinhTongLuong() {
    float tong=0;
    for (int i=0 ; i<NVQuanLy.size() ; i++){
        tong += NVQuanLy[i].TinhLuong();
    }
    for (int i=0 ; i<NVSanXuat.size() ; i++){
        tong += NVSanXuat[i].TinhLuong();
    }
    for (int i=0 ; i<NVVanPhong.size() ; i++){
        tong += NVVanPhong[i].TinhLuong();
    }
    return tong;
}
void CongTy::TimKiemNhanVien(string name) {
    bool check = false;
    for (int i=0 ; i<NVQuanLy.size() ; i++){
        if(NVQuanLy[i].GetName() == name) {
           NVQuanLy[i].Xuat();
           cout << endl;
           check = true;
        }
    }
    for (int i=0 ; i<NVSanXuat.size() ; i++){
        if(NVSanXuat[i].GetName() == name) {
            NVSanXuat[i].Xuat();
            cout << endl;
            check = true;
        }
    }
    for (int i=0 ; i<NVVanPhong.size() ; i++){
        if(NVVanPhong[i].GetName() == name) {
            NVVanPhong[i].Xuat();
            cout << endl;
            check = true;
        }
    }
    if (!check){
        cout << "Kong tim thay";
    }
}
CongTy::CongTy() {}
CongTy::~CongTy() {}