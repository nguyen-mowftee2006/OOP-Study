#include <iostream>
#include <cstring>
using namespace std;

class Date {
public:
    int day, month, year;
    void nhap() { cin >> day >> month >> year; }
    void xuat() { cout << day << "/" << month << "/" << year; }
};

class DiaChi {
public:
    char dienThoai[12], phuong[30], quan[30], thanhPho[30];
    void nhap() {
        cin.ignore();
        cout << "Dien thoai: "; cin.getline(dienThoai, 12);
        cout << "Phuong: "; cin.getline(phuong, 30);
        cout << "Quan: "; cin.getline(quan, 30);
        cout << "Thanh pho: "; cin.getline(thanhPho, 30);
    }
    void xuat() { cout << phuong << ", " << quan << ", " << thanhPho; }
};

class DoanhNghiep {
public:
    int maDn;
    char tenDn[60];
    Date ngayTl;
    DiaChi diaChi;
    char giamDoc[30];
    long doanhThu;

    void nhap() {
        cout << "Ma DN: "; cin >> maDn;
        cout << "Ten DN: "; cin.ignore(); cin.getline(tenDn, 60);
        cout << "Ngay thanh lap: "; ngayTl.nhap();
        diaChi.nhap();
        cout << "Giam doc: "; cin.ignore(); cin.getline(giamDoc, 30);
        cout << "Doanh thu: "; cin >> doanhThu;
    }

    void xuat() {
        cout << maDn << " - " << tenDn << " - ";
        ngayTl.xuat();
        cout << " - "; diaChi.xuat();
        cout << " - " << giamDoc << " - " << doanhThu << endl;
    }
};

int main() {
    int n;
    cout << "So luong doanh nghiep (0<n<20): "; cin >> n;

    DoanhNghiep dn[20];
    for (int i = 0; i < n; i++) {
        cout << "\nNhap doanh nghiep " << i + 1 << ":\n";
        dn[i].nhap();
    }

    cout << "\n-- Danh sach doanh nghiep --\n";
    for (int i = 0; i < n; i++) dn[i].xuat();

    cout << "\n-- Doanh nghiep o Ha Noi --\n";
    for (int i = 0; i < n; i++)
        if (strcmp(dn[i].diaChi.thanhPho, "Ha Noi") == 0) dn[i].xuat();

    long tong = 0;
    for (int i = 0; i < n; i++)
        if (dn[i].ngayTl.year == 2015) tong += dn[i].doanhThu;
    cout << "\nTong doanh thu DN thanh lap nam 2015: " << tong << endl;

    int ma;
    cout << "\nNhap ma DN can sua: "; cin >> ma;
    for (int i = 0; i < n; i++) {
        if (dn[i].maDn == ma) {
            cout << "Nhap lai thong tin:\n";
            dn[i].nhap();
            break;
        }
    }

    return 0;
}
