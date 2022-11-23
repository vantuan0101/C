//
// Created by Văn Tuấn on 10/3/22.
//
#include <iostream>
using namespace std;
class Base{
public:
    //     Huỷ bỏ ao

    virtual ~Base(){
        cout <<"\n Base destructor \t";
    }
};
class Derived :public Base{
public:
//    Huỷ bỏ thường
    ~Derived(){
        cout << "\n Derived destructor \t";
    }
};
int main(){
//    upcasting
    Base *b = new Derived;
    delete b;
    return  0;
}
