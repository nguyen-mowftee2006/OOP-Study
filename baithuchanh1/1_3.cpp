#include <iostream>
using namespace std;

class HANG {
private:
    char Mahang[10];
    char Tenhang[50];
    float Dongia;
    int Soluong;
public:
    void NHAP();
    void XUAT();
};

void HANG::NHAP()
{
    cout << "- Ma hang: "; cin.getline(Mahang, 10);
    cout << "- Ten hang: "; cin.getline(Tenhang, 50);
    cout << "- Don gia: "; cin >> Dongia;
    cout << "- So luong: "; cin >> Soluong; cin.ignore();
}

void HANG::XUAT()
{
    cout << Mahang << " | " << Tenhang << " | " << Dongia
         << " | " << Soluong << " | Thanh tien: " << Dongia * Soluong << endl;
}

int main()
{
    int n;
    cout << "Nhap so mat hang n: "; cin >> n; cin.ignore();

    HANG *ds = new HANG[n];

    for (int i = 0; i < n; i++) {
        cout << "=== Nhap hang thu " << i + 1 << " ===" << endl;
        ds[i].NHAP();
    }

    cout << "=== Danh sach hang ===" << endl;
    for (int i = 0; i < n; i++)
        ds[i].XUAT();

    delete[] ds;
    return 0;
}