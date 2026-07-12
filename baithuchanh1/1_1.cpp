#include <iostream>
using namespace std;

class SINVIEN {
private:
    char MSV[20];
    char HoTen[50];
    int tuoi;
    double diem;
public:
    void Nhap();
    void Xuat();
};

void SINVIEN::Nhap()
{
    cout << "---Vui long nhap cac thong tin ben duoi---" << endl;
    cout << "- Ma sinh vien: "; cin.getline(MSV, 20);
    cout << "- Ho va ten: "; cin.getline(HoTen, 50);
    cout << "- Tuoi: "; cin >> tuoi;
    cout << "- Diem: "; cin >> diem; cin.ignore();
}

void SINVIEN::Xuat()
{
    cout << "#Thong tin sinh vien" << endl;
    cout << "Ma sinh vien: " << MSV << endl;
    cout << "Ho va ten: " << HoTen << endl;
    cout << "Tuoi: " << tuoi << endl;
    cout << "Diem: " << diem << endl;
}

int main()
{
    SINVIEN a, b;

    cout << "=== Nhap thong tin sinh vien A ===" << endl;
    a.Nhap();

    cout << "=== Nhap thong tin sinh vien B ===" << endl;
    b.Nhap();

    cout << "=== Thong tin sinh vien A ===" << endl;
    a.Xuat();

    cout << "=== Thong tin sinh vien B ===" << endl;
    b.Xuat();

    return 0;
}