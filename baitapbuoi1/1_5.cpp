#include <iostream>
#include <cmath>
using namespace std;

class TAMGIAC {
private:
    float a, b, c;
public:
    void NHAP();
    bool CHECK();
    void XUAT();
};

void TAMGIAC::NHAP()
{
    cout << "- Cac canh cua tam giac lan luot la: "; cin >> a >> b >> c;
}

bool TAMGIAC::CHECK()
{
    return (a + b > c) && (a + c > b) && (b + c > a);
}
void TAMGIAC::XUAT()
{
    float p = ( a + b + c ) / 2;
    cout << " Chu vi cua tam giac la: " << 2 * p;
    cout << " Dien tich cua tam giac la: " << sqrt(p * (p - a) * (p - b) * (p - c));
}
int main()
{
    TAMGIAC tg;
    tg.NHAP();
    if (!tg.CHECK()) {
        cout << "Ba canh khong tao thanh tam giac!" << endl;
        return 0;
    }
    tg.XUAT();
    return 0;
}
