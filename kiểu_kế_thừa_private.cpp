//
// Created by Văn Tuấn on 10/2/22.
//
#include <iostream>

using namespace std;
class Base {
private:
    int private_variable;
public:
    int public_variable;
protected:
    int protected_varibale;
};
class Pri : private  Base{
    // Tất cả các thuộc tính của lớp cha sẽ trỡ thành Private};
public:
    int a ;
    Pri()
    {
        // private_variable = 1; Can't Access
        public_variable =1 ;
        protected_varibale =1 ;

    }
};
int main(){
    Pri cPri;
    cPri.protected_varibale=1;
    cPri.public_variable =1;
    cPri.protected_varibale =1 ;

    system("pause");
    return 0;
}
