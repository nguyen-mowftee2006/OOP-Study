#include <iostream>
using namespace std;

class HCN {
private:
    float D, R;
public:
    void NHAP();
    void VE();
    float DIENTICH();
    float CHUVI();
};

void HCN::NHAP()
{
    cout << "- Chieu dai: "; cin >> D;
    cout << "- Chieu rong: "; cin >> R;
}

void HCN::VE()
{
    for (int i = 1; i <= R; i++) {
        for (int j = 1; j <= D; j++)
            cout << "*";
        cout << endl;
    }
}

float HCN::DIENTICH()
{
    return D * R;
}

float HCN::CHUVI()
{
    return (D + R) * 2;
}

int main()
{
    HCN x;

    cout << "=== Nhap hinh chu nhat ===" << endl;
    x.NHAP();

    cout << "=== Hinh chu nhat ===" << endl;
    x.VE();

    cout << "Dien tich: " << x.DIENTICH() << endl;
    cout << "Chu vi: " << x.CHUVI() << endl;

    return 0;
}