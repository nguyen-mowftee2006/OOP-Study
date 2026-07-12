#include <iostream>
#include <cmath>
using namespace std;

class PTBAC2 {
private:
    float a, b, c;
public:
    void NHAP();
    void XUAT();
};

void PTBAC2::NHAP()
{
    cout << "- He so : "; cin >> a >> b >> c;
    
}

void PTBAC2::XUAT()
{
    if (a == 0) {
        if (b == 0)
            cout << (c == 0 ? "Vo so nghiem" : "Vo nghiem") << endl;
        else
            cout << "Nghiem x = " << -c / b << endl;
        return;
    }

    float delta = b * b - 4 * a * c;
    if (delta < 0) {
        cout << "Phuong trinh vo nghiem" << endl;
    } else if (delta == 0) {
        cout << "Phuong trinh co nghiem kep x = " << -b / (2 * a) << endl;
    } else {
        float x1 = (-b + sqrt(delta)) / (2 * a);
        float x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "Phuong trinh co 2 nghiem: x1 = " << x1 << ", x2 = " << x2 << endl;
    }
}

int main()
{
    PTBAC2 pt;
    pt.NHAP();
    pt.XUAT();
    return 0;
}
