#include <iostream>
using namespace std;

class SACH {
private:
    char Masach[10];
    char Tensach[50];
    char Nxb[50];
    int Sotrang;
    float Giatien;
public:
    void NHAP();
    void XUAT();
};

void SACH::NHAP()
{
    cout << "- Ma sach: "; cin.getline(Masach, 10);
    cout << "- Ten sach: "; cin.getline(Tensach, 50);
    cout << "- Nha xuat ban: "; cin.getline(Nxb, 50);
    cout << "- So trang: "; cin >> Sotrang;
    cout << "- Gia tien: "; cin >> Giatien; cin.ignore();
}

void SACH::XUAT()
{
    cout << Masach << " | " << Tensach << " | " << Nxb
         << " | " << Sotrang << " trang | " << Giatien << " dong" << endl;
}

int main()
{
    int n;
    cout << "Nhap so cuon sach n: "; cin >> n; cin.ignore();

    SACH *ds = new SACH[n];

    for (int i = 0; i < n; i++) {
        cout << "=== Nhap sach thu " << i + 1 << " ===" << endl;
        ds[i].NHAP();
    }

    cout << "=== Danh sach sach ===" << endl;
    for (int i = 0; i < n; i++)
        ds[i].XUAT();

    delete[] ds;
    return 0;
}