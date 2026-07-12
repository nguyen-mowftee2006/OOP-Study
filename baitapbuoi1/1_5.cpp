#include <iostream>
#include <cmath>
using namespace std;

class TAMGIAC {
private:
    float a, b, c;
public:
    void NHAP();
    bool HOPLE();
    float CHUVI();
    float DIENTICH();
};

void TAMGIAC::NHAP()
{
    cout << "- Canh a: "; cin >> a;
    cout << "- Canh b: "; cin >> b;
    cout << "- Canh c: "; cin >> c;
}

bool TAMGIAC::HOPLE()
{
    return (a + b > c) && (a + c > b) && (b + c > a);
}

float TAMGIAC::CHUVI()
{
    return a + b + c;
}

float TAMGIAC::DIENTICH()
{
    float p = CHUVI() / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main()
{
    TAMGIAC tg;
    tg.NHAP();

    if (!tg.HOPLE()) {
        cout << "Ba canh khong tao thanh tam giac!" << endl;
        return 0;
    }

    cout << "Chu vi: " << tg.CHUVI() << endl;
    cout << "Dien tich: " << tg.DIENTICH() << endl;
    return 0;
}
