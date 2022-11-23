#include <iostream>

using namespace std;
class ConHeo;
class ConGa
{
    int khoiluong;
    friend void LamThit(ConGa, ConHeo);

public:
    ConGa();
    ConGa(int a)
    {
        khoiluong = a;
    }
};
class ConHeo
{
    int khoiluong;
    friend void LamThit(ConGa, ConHeo);

public:
    ConHeo();
    ConHeo(int a)
    {
        khoiluong = a;
    };
};

void LamThit(ConGa ga, ConHeo heo)
{
    if (ga.khoiluong > heo.khoiluong)
    {
        cout << "Lam thit ga";
    }
    else
    {
        cout << "Lam thit heo";
    }
};

int main()
{

    ConGa ga(5);
    ConHeo heo(10);
    LamThit(ga, heo);
    system("pause");
    return 0;
}