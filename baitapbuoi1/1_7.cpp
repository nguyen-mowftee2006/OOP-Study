#include <iostream>
using namespace std;

class CanBo {
private:
    char Mact[10];
    char Hoten[50];
    char Ngaysinh[15];
    int soNgayLamViec;
public:
    void nhap();
    void xuat();
};

void CanBo::nhap()
{
    cout << "- Ma can bo: "; cin.getline(Mact, 10);
    cout << "- Ho va ten: "; cin.getline(Hoten, 50);
    cout << "- Ngay sinh: "; cin.getline(Ngaysinh, 15);
    cout << "- So ngay lam viec trong thang: "; cin >> soNgayLamViec; cin.ignore();
}
void CanBo::xuat()
{
    cout << "Ma can bo: " << Mact << endl;
    cout << "Ho va ten: " << Hoten << endl;
    cout << "Ngay sinh: " << Ngaysinh << endl;
    cout << "So ngay lam viec: " << soNgayLamViec << endl;
    cout << "Luong: " << soNgayLamViec * 250000 << endl;
}

int main()
{
    CanBo cb;
    cb.nhap();
    cout << "=== Thong tin can bo ===" << endl;
    cb.xuat();
    return 0;
}
