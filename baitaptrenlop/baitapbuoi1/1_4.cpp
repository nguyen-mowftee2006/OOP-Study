#include <bits/stdc++.h>
using namespace std;

class PTBAC2
{
private:
    float a, b, c;
public:
    void NHAP()
    {
        cout << "Nhap he so a: "; cin >> a;
        cout << "\nNhap he so b: "; cin >> b;
        cout << "\nNhap he so c: "; cin >> c;
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
    PTBAC2 a;
    a.NHAP();
    a.GIAI();
    return 0;
}
