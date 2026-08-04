#include <bits/stdc++.h>
using namespace std;

class HINHTRON
{
private:
    float r;
public:
    void NHAP()
    {
        cout << "Nhap ban kinh: "; cin >> r;
    }
    float CHUVI() { return 2 * 3.14 * r; }
    float DIENTICH() { return 3.14 * r * r; }
};

int main()
{
    HINHTRON a;
    a.NHAP();
    cout << "\nChu vi hinh tron: " << a.CHUVI();
    cout << "\nDien tich hinh tron: " << a.DIENTICH();
    return 0;
}
