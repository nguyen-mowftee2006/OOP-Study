#include <bits/stdc++.h>
using namespace std;

class PTBAC1
{
private:
    float a, b;
public:
    void NHAP()
    {
        cout << "Nhap he so a: "; cin >> a;
        cout << "\nNhap he so b: "; cin >> b;
    }
    void GIAI()
    {
        if (a == 0)
        {
            if (b == 0)
                cout << "\nPhuong trinh vo so nghiem.";
            else
                cout << "\nPhuong trinh vo nghiem.";
        }
        else
            cout << "\nPhuong trinh co nghiem x = " << -b / a;
    }
};

int main()
{
    PTBAC1 a;
    a.NHAP();
    a.GIAI();
    return 0;
}
