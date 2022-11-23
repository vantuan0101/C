#include <iostream>
#include <string.h>
#include "HocSinh.h"
using namespace std;

int main()
{
    HocSinh hs;
    hs.Nhap(); // Ko truy cập được vì hàm Nhap() là private
               // hs.Hoten   // Ko truy cập được vì biến Hoten là private

    hs.Xuat(); // Truy cập được vì hàm Xuat() là public
    // hs.Diachi;     // Truy cập được vì biến Diachi là public
    system("pause");
    return 0;
}