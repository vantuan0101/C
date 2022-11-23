//
// Created by Văn Tuấn on 10/3/22.
//
#include <iostream>
using  namespace  std;
class Base {
public:
    virtual void show(){
        cout << "\n This is class Base";
    }
};
class Delivered1 : public Base{
public:
    void show(){
        cout << "\n This is class Delivered";
    }
};
class Delivered2 : public Base{
public:
    void show(){
        cout << "\n This is class Delivered";
    }
};
int main(){
    Base *b;
    Delivered1 d1;
    b = &d1;
    b->show();
    // Khong co virtual thi se in ra "This is class Base"
    // Co virtual thi se in ra "This is class Delivered"
    return  0;
}