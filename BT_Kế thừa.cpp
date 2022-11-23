//
// Created by Văn Tuấn on 10/2/22.
//

//Bài toán: Cong ty ABC la cong ty san xuat kinh doanh thú nhồi bông. Cong ty co nhiéu nhan vién
//lam viéc trong ba bộ phận khac nhau: bộ phận quan ly, bộ phan san xuat, bộ phận van phong.
//Việc tinh lưong cho nhan vién dua vao cac yéu tố sau:

 //Dối với nhan viên van phong: Luong = Luong Co Ban + Số ngay lam việc *100.000 + Tro Cap

//Đối với nhan vién san xuat: Luong = Luong Co Ban + Số San Pham * 2.000

//Đối voi nhan vién quan ly: Luong = Luong Co Ban* Hệ số chức vụ + Thưởng.

//Ngoai ra công ty can quan ly cac thông tin về nhan viên cua minh nhu: ho tên, ngay sinh va cac
//thông số trên để tinh luong cho từng nhan viên trong công ty.

 //Yêu cau: Thiết kế các lớp thích hợp để thực hiện các công việc  sau:

//Nhập thông tin của các nhân viên để phục vụ việc tính lương;

//Thực hiện tính lương cho từng nhân viên

//Xuat thong tin cua của nhan viên.

//Tinh tổng luong cua công ty.
//Tìm kiếm 1 nhân viên theo họ tên

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
    void Nhap(){
        cout << "Nhap ho ten" <<endl;
        cin >> Hoten;
        cout << "Nhap Ngay Sinh" <<endl;
        cin >> NgaySinh;
        cout << "Nhap luong co ban" <<endl;
        cin >> LuongCoBan;
    }
    void Xuat (){
        cout << "ho ten" <<Hoten <<endl;
        cout << "Ngay Sinh" <<NgaySinh <<endl;
        cout << "luong co ban" <<LuongCoBan <<endl;
        cout << "luong" <<Luong <<endl;


    }
};
int main(){
    system("pause");
    return 0;
}
