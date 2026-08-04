#include <bits/stdc++.h>
using namespace std;

class TAMGIAC
{
private:
    float a, b, c;
public:
    void NHAP()
    {
        cout << "Nhap canh a: "; cin >> a;
        cout << "\nNhap canh b: "; cin >> b;
        cout << "\nNhap canh c: "; cin >> c;
    }
    bool KIEMTRA() { return a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a; }
    float CHUVI() { return a + b + c; }
    float DIENTICH()
    {
        float p = CHUVI() / 2;
        return sqrt(p * (p - a) * (p - b) * (p - c));
    }
};

int main()
{
    TAMGIAC a;
    a.NHAP();
    if (a.KIEMTRA())
    {
        cout << "\nChu vi tam giac: " << a.CHUVI();
        cout << "\nDien tich tam giac: " << a.DIENTICH();
    }
    else
        cout << "\nBa canh khong tao thanh tam giac.";
    return 0;
}
