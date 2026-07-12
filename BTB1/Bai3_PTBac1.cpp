#include <iostream>
using namespace std;

class PTBAC1 {
private:
    float a, b;
public:
    void NHAP();
    void GIAI();
};

void PTBAC1::NHAP()
{
    cout << "- He so a: "; cin >> a;
    cout << "- He so b: "; cin >> b;
}

void PTBAC1::GIAI()
{
    if (a == 0) {
        if (b == 0)
            cout << "Phuong trinh co vo so nghiem" << endl;
        else
            cout << "Phuong trinh vo nghiem" << endl;
    } else {
        cout << "Phuong trinh co nghiem x = " << -b / a << endl;
    }
}

int main()
{
    PTBAC1 pt;
    pt.NHAP();
    pt.GIAI();
    return 0;
}
