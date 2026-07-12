#include <iostream>
#include <cmath>
using namespace std;

class HINHTRON {
private:
    float r;
public:
    void NHAP();
    void XUAT();
};

void HINHTRON::NHAP()
{
    cout << "- Ban kinh: "; cin >> r;
}
void HINHTRON::XUAT()
{
    cout << " Chu vi hinh tron la: " << 2* M_PI * r;
    cout << "\n Dien tich hinh tron la: " << r * r * M_PI;
}

int main()
{
    HINHTRON ht;
    ht.NHAP();
    ht.XUAT();
    return 0;
}
