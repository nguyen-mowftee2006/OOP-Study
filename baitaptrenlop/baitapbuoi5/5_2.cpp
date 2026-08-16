#include <bits/stdc++.h>
using namespace std;

class DIEM
{
private:
    float x, y, z;
public:
    DIEM(float x = 0, float y = 0, float z = 0)
    {
        this->x = x; this->y = y; this->z = z;
    }
    DIEM operator+(DIEM a)
    {
        return DIEM(x + a.x, y + a.y, z + a.z);
    }
    DIEM operator-(DIEM a)
    {
        return DIEM(x - a.x, y - a.y, z - a.z);
    }
    friend istream &operator>>(istream &is, DIEM &a);
    friend ostream &operator<<(ostream &os, DIEM a);
};

istream &operator>>(istream &is, DIEM &a)
{
    cout << "\nNhap hoanh do x: "; is >> a.x;
    cout << "\nNhap tung do y: "; is >> a.y;
    cout << "\nNhap cao do z: "; is >> a.z;
    return is;
}

ostream &operator<<(ostream &os, DIEM a)
{
    os << "(" << a.x << ", " << a.y << ", " << a.z << ")";
    return os;
}

int main()
{
    DIEM a(1, 2, 3), b, t, h;
    cout << "\nDIEM A KHOI TAO BAT KY: " << a;
    cout << "\nNHAP DIEM B"; cin >> b;
    t = a + b; h = a - b;
    cout << "\nT = A + B = " << t;
    cout << "\nH = A - B = " << h;
    return 0;
}
