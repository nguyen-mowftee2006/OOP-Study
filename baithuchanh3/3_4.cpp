#include <bits/stdc++.h>
using namespace std;

class PTB2
{
private:
    float a, b, c;

public:
    // Ham tao khong doi
    PTB2()
    {
        a = 0;
        b = 0;
        c = 0;
    }

    // Ham tao co doi
    PTB2(float x, float y, float z)
    {
        a = x;
        b = y;
        c = z;
    }

    void NHAP()
    {
        cout << "\n - Nhap a: ";
        cin >> a;

        cout << " - Nhap b: ";
        cin >> b;

        cout << " - Nhap c: ";
        cin >> c;
    }

    void XUAT()
    {
        cout << a << "x^2";

        if (b >= 0)
            cout << " + " << b << "x";
        else
            cout << " - " << -b << "x";

        if (c >= 0)
            cout << " + " << c;
        else
            cout << " - " << -c;

        cout << " = 0";
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
            {
                cout << "\nPhuong trinh co nghiem x = " << -c / b;
            }

            return;
        }

        float delta = b * b - 4 * a * c;

        if (delta < 0)
        {
            cout << "\nPhuong trinh vo nghiem.";
        }
        else if (delta == 0)
        {
            cout << "\nPhuong trinh co nghiem kep x = "
                 << -b / (2 * a);
        }
        else
        {
            float x1 = (-b + sqrt(delta)) / (2 * a);
            float x2 = (-b - sqrt(delta)) / (2 * a);

            cout << "\nPhuong trinh co hai nghiem:";
            cout << "\n - x1 = " << x1;
            cout << "\n - x2 = " << x2;
        }
    }
};

int main()
{
    // Khoi tao P bang ham tao co doi
    PTB2 p(1, -3, 2);

    cout << "\nPHUONG TRINH P";
    cout << "\nP: ";
    p.XUAT();
    p.GIAI();

    // Q dung ham tao khong doi
    PTB2 q;

    cout << "\n\nNHAP PHUONG TRINH Q";
    q.NHAP();

    cout << "\nQ: ";
    q.XUAT();
    q.GIAI();

    return 0;
}