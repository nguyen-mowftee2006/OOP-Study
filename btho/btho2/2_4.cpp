#include <bits/stdc++.h>
using namespace std;

class NGUOI
{
protected:
    char hoten[50];
    int tuoi;
public:
    void NHAP()
    {
        cout << "\nNhap ho ten: "; fflush(stdin); gets(hoten);
        cout << "\nNhap tuoi: "; cin >> tuoi;
    }
    void XUAT()
    {
        cout << "\nHo ten: " << hoten;
        cout << "\nTuoi: " << tuoi;
    }
};

class BENHVIEN
{
private:
    char ten[50], diachi[100], giamdoc[50];
    friend class BENHNHAN;
};

class BENHNHAN : public NGUOI
{
private:
    char ma[15], tiensu[100], chandoan[100];
    BENHVIEN benhvien;
public:
    void NHAP()
    {
        NGUOI::NHAP();
        cout << "\nNhap ma benh nhan: "; fflush(stdin); gets(ma);
        cout << "\nNhap tien su: "; fflush(stdin); gets(tiensu);
        cout << "\nNhap chan doan: "; fflush(stdin); gets(chandoan);
        cout << "\nNhap ten benh vien: "; fflush(stdin); gets(benhvien.ten);
        cout << "\nNhap dia chi benh vien: "; fflush(stdin); gets(benhvien.diachi);
        cout << "\nNhap giam doc: "; fflush(stdin); gets(benhvien.giamdoc);
    }
    void XUAT()
    {
        NGUOI::XUAT();
        cout << "\nMa benh nhan: " << ma;
        cout << "\nTien su: " << tiensu;
        cout << "\nChan doan: " << chandoan;
        cout << "\nTen benh vien: " << benhvien.ten;
        cout << "\nDia chi benh vien: " << benhvien.diachi;
        cout << "\nGiam doc: " << benhvien.giamdoc;
    }
    friend int Dem(BENHNHAN x[], int n);
    friend void Sua(BENHNHAN x[], int n);
};

int Dem(BENHNHAN x[], int n)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
        if (x[i].tuoi > 30)
            dem++;
    return dem;
}

void Sua(BENHNHAN x[], int n)
{
    for (int i = 0; i < n; i++)
        if (strcmp(x[i].ma, "BN01") == 0)
            x[i].tuoi = 20;
}

int main()
{
    BENHNHAN x[100];
    int n;
    do
    {
        cout << "Nhap so benh nhan: "; cin >> n;
    } while (n <= 0 || n > 100);
    for (int i = 0; i < n; i++)
    {
        cout << "\nNhap benh nhan thu " << i + 1 << ":";
        x[i].NHAP();
    }
    cout << "\nDANH SACH BENH NHAN";
    for (int i = 0; i < n; i++)
    {
        cout << "\nBENH NHAN THU " << i + 1;
        x[i].XUAT();
    }
    cout << "\nSo benh nhan lon hon 30 tuoi: " << Dem(x, n);
    Sua(x, n);
    cout << "\nDANH SACH SAU KHI SUA BENH NHAN BN01";
    for (int i = 0; i < n; i++)
        x[i].XUAT();
    return 0;
}
