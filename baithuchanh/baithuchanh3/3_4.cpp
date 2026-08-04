#include <bits/stdc++.h>
using namespace std;

class PTB2
{
private:
    float a, b, c;
public:
    PTB2()
    {
        this->a = 0; this->b = 0; this->c = 0;
    }
    PTB2(float a, float b, float c)
    {
        this->a = a; this->b = b; this->c = c;
    }
    void NHAP()
    {
        cout << "\nNhap a: "; cin >> a;
        cout << "\nNhap b: "; cin >> b;
        cout << "\nNhap c: "; cin >> c;
    }
    void XUAT()
    {
        cout << a << "x^2";
        if (b >= 0)
            cout << "+" << b << "x";
        else
            cout << b << "x";
        if (c >= 0)
            cout << "+" << c << "=0";
        else
            cout << c << "=0";
    }
    void GIAI()
    {
        if (a == 0)
        {
            if (b == 0)
            {
                if (c == 0)
                    cout << "\nPhuong trinh vo so nghiem.";
                else
                    cout << "\nPhuong trinh vo nghiem.";
            }
            else
                cout << "\nPhuong trinh co nghiem x = " << -c / b;
        }
        else
        {
            float delta = b * b - 4 * a * c;
            if (delta < 0)
                cout << "\nPhuong trinh vo nghiem.";
            else if (delta == 0)
                cout << "\nPhuong trinh co nghiem kep x = " << -b / (2 * a);
            else
            {
                cout << "\nNghiem x1 = " << (-b + sqrt(delta)) / (2 * a);
                cout << "\nNghiem x2 = " << (-b - sqrt(delta)) / (2 * a);
            }
        }
    }
};

int main()
{
    PTB2 p(1, -3, 2), q;
    cout << "PHUONG TRINH P: ";
    p.XUAT();
    p.GIAI();
    cout << "\nNHAP PHUONG TRINH Q";
    q.NHAP();
    cout << "\nPHUONG TRINH Q: ";
    q.XUAT();
    q.GIAI();
    return 0;
}
