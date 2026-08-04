#include <bits/stdc++.h>
using namespace std;

class HANGHOA
{
private:
    int mahang;
    char tenhang[50];
    long tientra;
public:
    void NHAP()
    {
        cout << "\nNhap ma hang: "; cin >> mahang;
        cout << "\nNhap ten hang: "; fflush(stdin); gets(tenhang);
        cout << "\nNhap tien tra: "; cin >> tientra;
    }
    void XUAT()
    {
        cout << "\n" << setw(15) << mahang << setw(35) << tenhang << setw(20) << tientra;
    }
    friend class PHIEUMUAHANG;
};

class PHIEUMUAHANG
{
private:
    int maphieu;
    char tenkhach[30];
    int n;
    HANGHOA *a;
public:
    void NHAP()
    {
        cout << "Nhap ma phieu: "; cin >> maphieu;
        cout << "\nNhap ten khach: "; fflush(stdin); gets(tenkhach);
        do
        {
            cout << "\nNhap so hang hoa: "; cin >> n;
        } while (n <= 0);
        a = new HANGHOA[n];
        for (int i = 0; i < n; i++)
        {
            cout << "\nNhap hang hoa thu " << i + 1 << ":";
            a[i].NHAP();
        }
    }
    void XUAT()
    {
        cout << left;
        cout << "\n" << setw(25) << "" << "PHIEU MUA HANG";
        cout << "\nMa phieu: " << maphieu;
        cout << "\nTen khach: " << tenkhach;
        cout << "\n" << setw(15) << "Ma hang" << setw(35) << "Ten hang" << setw(20) << "Tien tra";
        long tong = 0;
        int dem = 0;
        for (int i = 0; i < n; i++)
        {
            a[i].XUAT();
            tong += a[i].tientra;
            if (a[i].tientra > 250)
                dem++;
        }
        cout << "\nTong tien hang: " << tong;
        cout << "\nSo hang hoa co tien tra lon hon 250: " << dem;
    }
};

int main()
{
    PHIEUMUAHANG p;
    cout << "NHAP THONG TIN PHIEU";
    p.NHAP();
    p.XUAT();
    return 0;
}
