#include <iostream>
#include <cstring>
using namespace std;

class Date {
public:
    int day, month, year;
    void nhap() { cin >> day >> month >> year; }
    void xuat() { cout << day << "/" << month << "/" << year; }
};

class XeHoi {
public:
    char nhanHieu[30], hangSanXuat[30], kieuDang[30], mauSon[20], xuatXu[30];
    Date namSanXuat;
    double giaBan;

    void nhap() {
        cin.ignore();
        cout << "Nhan hieu: "; cin.getline(nhanHieu, 30);
        cout << "Hang san xuat: "; cin.getline(hangSanXuat, 30);
        cout << "Kieu dang: "; cin.getline(kieuDang, 30);
        cout << "Mau son: "; cin.getline(mauSon, 20);
        cout << "Ngay san xuat: "; namSanXuat.nhap();
        cin.ignore();
        cout << "Xuat xu: "; cin.getline(xuatXu, 30);
        cout << "Gia ban: "; cin >> giaBan;
    }

    void xuat() {
        cout << nhanHieu << " - " << hangSanXuat << " - " << kieuDang
             << " - " << mauSon << " - ";
        namSanXuat.xuat();
        cout << " - " << xuatXu << " - " << giaBan << endl;
    }
};

int main() {
    int n;
    cout << "So luong xe hoi (0<n<20): "; cin >> n;

    XeHoi *dsXe = new XeHoi[n];

    for (int i = 0; i < n; i++) {
        cout << "\nNhap xe hoi " << i + 1 << ":\n";
        (dsXe + i)->nhap();
    }

    cout << "\n-- Danh sach xe hoi --\n";
    for (int i = 0; i < n; i++) (dsXe + i)->xuat();

    cout << "\n-- Xe hoi hang Toyota --\n";
    for (int i = 0; i < n; i++)
        if (strcmp((dsXe + i)->hangSanXuat, "Toyota") == 0) (dsXe + i)->xuat();

    int dem = 0;
    cout << "\n-- Xe san xuat thang 5/2025 --\n";
    for (int i = 0; i < n; i++) {
        if ((dsXe + i)->namSanXuat.month == 5 && (dsXe + i)->namSanXuat.year == 2025) {
            (dsXe + i)->xuat();
            dem++;
        }
    }
    cout << "So luong: " << dem << endl;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if ((dsXe + j)->giaBan > (dsXe + j + 1)->giaBan) {
                XeHoi tam = *(dsXe + j);
                *(dsXe + j) = *(dsXe + j + 1);
                *(dsXe + j + 1) = tam;
            }
        }
    }

    cout << "\n-- Danh sach sau khi sap xep gia tang dan --\n";
    for (int i = 0; i < n; i++) (dsXe + i)->xuat();

    delete[] dsXe;
    return 0;
}
