#include <bits/stdc++.h>
using namespace std;

class NhaCungCap {
private:
    char maNCC[20];
    char tenNCC[50];
    char diaChi[100];
    char sdt[20];

public:
    void nhap();
    void xuat();
};

class SanPham {
private:
    char maSP[20];
    char tenSP[50];
    int soLuong;
    long long donGia;

public:
    void nhap();
    void xuat();
    long long thanhTien();
    int getSoLuong();
    long long getDonGia();
};

class PhieuNhap {
private:
    char maPhieu[20];
    char ngayLap[20];
    NhaCungCap nhaCungCap;
    int n;
    SanPham ds[20];

public:
    void nhap();
    void xuat();
    long long tongTien();
    int demSanPham();
    void sapXep();
};

void NhaCungCap::nhap() {
    cout << "\n - Nhap ma nha cung cap: "; fflush(stdin); gets(maNCC);
    cout << "\n - Nhap ten nha cung cap: "; fflush(stdin); gets(tenNCC);
    cout << "\n - Nhap dia chi: "; fflush(stdin); gets(diaChi);
    cout << "\n - Nhap so dien thoai: "; fflush(stdin); gets(sdt);
}

void NhaCungCap::xuat() {
    cout << "\n - Ma nha cung cap: " << maNCC;
    cout << "\n - Ten nha cung cap: " << tenNCC;
    cout << "\n - Dia chi: " << diaChi;
    cout << "\n - So dien thoai: " << sdt;
}

void SanPham::nhap() {
    cout << "\n - Nhap ma san pham: "; fflush(stdin); gets(maSP);
    cout << "\n - Nhap ten san pham: "; fflush(stdin); gets(tenSP);
    cout << "\n - Nhap so luong: "; cin >> soLuong;
    cout << "\n - Nhap don gia: "; cin >> donGia;
}

void SanPham::xuat() {
    cout << "\n" << setw(15) << maSP << setw(25) << tenSP << setw(15) << soLuong << setw(18) << donGia << setw(18) << thanhTien();
}

long long SanPham::thanhTien() {
    return soLuong * donGia;
}

int SanPham::getSoLuong() {
    return soLuong;
}

long long SanPham::getDonGia() {
    return donGia;
}

void PhieuNhap::nhap() {
    cout << "\n - Nhap ma phieu: "; fflush(stdin); gets(maPhieu);
    cout << "\n - Nhap ngay lap: "; fflush(stdin); gets(ngayLap);
    cout << "\n - Nhap thong tin nha cung cap:"; nhaCungCap.nhap();
    do{
		cout << "\n - Nhap so san pham: "; cin >> n;
	} while (n<=0 or n>=20)
    for (int i = 0; i < n; i++) {
        cout << "\n - Nhap san pham thu " << i + 1 << ":";
        ds[i].nhap();
    }
}

long long PhieuNhap::tongTien() {
    long long tong = 0;

    for (int i = 0; i < n; i++)
        tong += ds[i].thanhTien();

    return tong;
}

int PhieuNhap::demSanPham() {
    int dem = 0;
    for (int i = 0; i < n; i++)
        if (ds[i].getSoLuong() < 80)
            dem++;

    return dem;
}

void PhieuNhap::sapXep() {
    SanPham tg;

    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (ds[i].getDonGia() > ds[j].getDonGia()) {
                tg = ds[i];
                ds[i] = ds[j];
                ds[j] = tg;
            }
}

void PhieuNhap::xuat() {
    cout << "\n ===================== DAI HOC VICTORY =====================";
    cout << "\n =============== PHIEU NHAP VAN PHONG PHAM =================";
    cout << "\n Ma phieu: " << left << setw(25) << maPhieu << "Ngay lap: " << ngayLap;
    cout << "\n Ma nha cung cap: ";
    nhaCungCap.xuat();
    cout << "\n" << setw(15) << "Ma SP" << setw(25) << "Ten san pham" << setw(15) << "So luong" << setw(18) << "Don gia" << setw(18) << "Thanh tien";
    for (int i = 0; i < n; i++)
        ds[i].xuat();
    cout << "\n " << right << setw(73) << "Tong tien: " << tongTien();
    cout << "\n " << setw(30) << "Hieu truong" << setw(30) << "Phong tai chinh" << "Nguoi lap";
    cout << "\n -------------------------------------------------------------"
}

int main() {
    PhieuNhap p;

    cout << "\nNhap thong tin phieu:";
    p.nhap();

    cout << "\n\nPhieu vua nhap:";
    p.xuat();

    cout << "\n\n - So san pham co so luong nho hon 80: " << p.demSanPham();

    p.sapXep();

    cout << "\n\nPhieu sau khi sap xep tang dan theo don gia:";
    p.xuat();

    return 0;
}