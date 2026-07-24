#include <iostream>
#include <cstring>
using namespace std;

class Date {
public:
    int day, month, year;
    void nhap() { cin >> day >> month >> year; }
    void xuat() { cout << day << "/" << month << "/" << year; }
};

class NhaCungCap {
public:
    char maNcc[10], tenNcc[60], diaChi[60], sdt[12];
    void nhap() {
        cout << "Ma NCC: "; cin >> maNcc;
        cin.ignore();
        cout << "Ten NCC: "; cin.getline(tenNcc, 60);
        cout << "Dia chi: "; cin.getline(diaChi, 60);
        cout << "SDT: "; cin.getline(sdt, 12);
    }
    void xuat() {
        cout << maNcc << " - " << tenNcc << " - " << diaChi << " - " << sdt << endl;
    }
};

class SanPham {
public:
    char maSp[10], tenSp[60];
    int soLuong;
    double donGia, thanhTien;

    void nhap() {
        cout << "Ma SP: "; cin >> maSp;
        cin.ignore();
        cout << "Ten SP: "; cin.getline(tenSp, 60);
        cout << "So luong: "; cin >> soLuong;
        cout << "Don gia: "; cin >> donGia;
        thanhTien = donGia * soLuong;
    }
    void xuat() {
        cout << maSp << "\t" << tenSp << "\t" << soLuong << "\t"
             << donGia << "\t" << thanhTien << endl;
    }
};

class PhieuNhap {
public:
    char maPhieu[10];
    Date ngayLap;
    NhaCungCap ncc;
    SanPham sp[20];
    int soLuongSp;
    double tongTien;

    void nhap() {
        cout << "Ma phieu: "; cin >> maPhieu;
        cout << "Ngay lap: "; ngayLap.nhap();
        ncc.nhap();
        cout << "So luong san pham: "; cin >> soLuongSp;
        for (int i = 0; i < soLuongSp; i++) {
            cout << "San pham " << i + 1 << ":\n";
            sp[i].nhap();
        }
        tongTien = 0;
        for (int i = 0; i < soLuongSp; i++) tongTien += sp[i].thanhTien;
    }

    void xuat() {
        cout << "\nMa phieu: " << maPhieu << " - Ngay lap: "; ngayLap.xuat(); cout << endl;
        ncc.xuat();
        cout << "Ma SP\tTen SP\tSL\tDon gia\tThanh tien\n";
        for (int i = 0; i < soLuongSp; i++) sp[i].xuat();
        cout << "TONG: " << tongTien << endl;
    }
};

int main() {
    PhieuNhap phieu;
    phieu.nhap();

    cout << "\n-- Phieu vua nhap --";
    phieu.xuat();

    int dem = 0;
    for (int i = 0; i < phieu.soLuongSp; i++)
        if (phieu.sp[i].soLuong < 80) dem++;
    cout << "\nSo san pham co so luong < 80: " << dem << endl;

    for (int i = 0; i < phieu.soLuongSp - 1; i++) {
        for (int j = 0; j < phieu.soLuongSp - 1 - i; j++) {
            if (phieu.sp[j].donGia < phieu.sp[j + 1].donGia) {
                SanPham tam = phieu.sp[j];
                phieu.sp[j] = phieu.sp[j + 1];
                phieu.sp[j + 1] = tam;
            }
        }
    }
    cout << "\n-- Phieu sau khi sap xep giam dan don gia --";
    phieu.xuat();

    strcpy(phieu.ncc.tenNcc, "Cong ty TNHH Thanh Do");
    cout << "\n-- Phieu sau khi sua ten nha cung cap --";
    phieu.xuat();

    return 0;
}
