#include <iostream>
#include <string.h>
using namespace std;
class HocSinh
{
private: // Chỉ sử dụng được bên trong class HocSinh bên ngoài không truy cập được
    string Hoten;
    void Nhap();

public: // Sử dụng được bên ngoài class HocSinh
    string : Diachi;

    void Xuat();
};

int main()
{
    HocSinh hs;
    hs.Nhap(); // Ko truy cập được vì hàm Nhap() là private
               // hs.Hoten   // Ko truy cập được vì biến Hoten là private

    hs.Xuat(); // Truy cập được vì hàm Xuat() là public
               // hs.Diachi;     // Truy cập được vì biến Diachi là public
    system("pause");
    return 0;
};