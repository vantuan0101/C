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
        NhanVien *temp;
            if (LuaChon ==1 ) {
                cout << "\n 1.Nhap Nhap vien van phong";
               temp = new NhanVienVanPhong;


            } else if(LuaChon == 2) {
                cout << "\n 2.Nhap nhan vien san xuat";
              temp = new NhanVienSanXuat;


            }else if(LuaChon == 3 ){
                cout << "\n 3.Nhap nhan vien quan ly";
                temp = new NhanVienQuanLy;
            }
            if(LuaChon != 4){
                temp ->Nhap();
                DSNhanVien.push_back(temp);
            }

    }while(LuaChon != 4);
};
void CongTy::Xuat() {
   for (int i=0; i< DSNhanVien.size();i++){
       DSNhanVien[i]->Xuat();
   }
}
float CongTy::TinhTongLuong() {
    float tong=0;
    for (int i=0 ; i<DSNhanVien.size() ; i++){
        tong += DSNhanVien[i] -> TinhLuong();
    }

    return tong;
}
void CongTy::TimKiemNhanVien(string name) {
    bool check = false;
    for (int i=0 ; i<DSNhanVien.size() ; i++){
        if(DSNhanVien[i]->GetName() == name) {
           DSNhanVien[i]->Xuat();
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