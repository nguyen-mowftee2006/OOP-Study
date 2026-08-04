#include <bits/stdc++.h>
using namespace std;

class HCN
{
private:
    float d, r;
public:
    void NHAP()
    {
        cout << "\nNhap chieu dai: "; cin >> d;
        cout << "\nNhap chieu rong: "; cin >> r;
    }
    void VE()
    {
        for (int i = 1; i <= r; i++)
        {
            cout << "\n";
            for (int j = 1; j <= d; j++)
                cout << "*";
        }
    }
    float DIENTICH() { return d * r; }
    float CHUVI() { return (d + r) * 2; }
};

int main()
{
    HCN x;
    cout << "\nNHAP HINH CHU NHAT";
    x.NHAP();
    cout << "\nHINH CHU NHAT";
    x.VE();
    cout << "\nDien tich: " << x.DIENTICH();
    cout << "\nChu vi: " << x.CHUVI();
    return 0;
}
