#include <bits/stdc++.h>
using namespace std;

class MANGSO
{
private:
    int a[100], n;
public:
    void NHAP()
    {
        do
        {
            cout << "\nNhap so phan tu: "; cin >> n;
        } while (n <= 0 || n > 100);
        for (int i = 0; i < n; i++)
        {
            cout << "\nNhap a[" << i << "]: "; cin >> a[i];
        }
    }
    void SAPXEP()
    {
        int tg;
        for (int i = 0; i < n - 1; i++)
            for (int j = i + 1; j < n; j++)
                if (a[i] > a[j])
                {
                    tg = a[i]; a[i] = a[j]; a[j] = tg;
                }
    }
    void XUAT()
    {
        for (int i = 0; i < n; i++)
            cout << " " << a[i];
    }
};

int main()
{
    MANGSO a;
    cout << "NHAP MANG SO NGUYEN";
    a.NHAP();
    a.SAPXEP();
    cout << "\nMang tang dan:";
    a.XUAT();
    return 0;
}
