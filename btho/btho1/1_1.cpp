#include <bits/stdc++.h>
using namespace std;

class HANG
{
private:
    char ten[50];
    float dongia;
    int soluong;
public:
    void NHAP()
    {
        cout << "\nNhap ten hang: "; fflush(stdin); gets(ten);
        cout << "\nNhap don gia: "; cin >> dongia;
        cout << "\nNhap so luong: "; cin >> soluong;
    }
    void XUAT()
    {
        cout << "\n" << setw(30) << ten << setw(15) << dongia << setw(15) << soluong << setw(18) << dongia * soluong;
    }
    friend class PHIEU;
};

class PHIEU
{
private:
    char ma[15], ngaylap[20], mancc[15], tenncc[50], diachi[100];
    HANG x[100];
    int n;
public:
    void NHAP()
    {
        cout << "\nNhap ma phieu: "; fflush(stdin); gets(ma);
        cout << "\nNhap ngay lap: "; fflush(stdin); gets(ngaylap);
        cout << "\nNhap ma nha cung cap: "; fflush(stdin); gets(mancc);
        cout << "\nNhap ten nha cung cap: "; fflush(stdin); gets(tenncc);
        cout << "\nNhap dia chi: "; fflush(stdin); gets(diachi);
        do
        {
            cout << "\nNhap so mat hang: "; cin >> n;
        } while (n <= 0 || n > 100);
        for (int i = 0; i < n; i++)
        {
            cout << "\nNhap mat hang thu " << i + 1 << ":";
            x[i].NHAP();
        }
    }
    void XUAT()
    {
        cout << left << fixed << setprecision(2);
        cout << "\n" << setw(30) << "" << "PHIEU NHAP HANG";
        cout << "\nMa phieu: " << setw(28) << ma << "Ngay lap: " << ngaylap;
        cout << "\nMa NCC: " << setw(30) << mancc << "Ten NCC: " << tenncc;
        cout << "\nDia chi: " << diachi;
        cout << "\n" << setw(30) << "Ten hang" << setw(15) << "Don gia" << setw(15) << "So luong" << setw(18) << "Thanh tien";
        float tong = 0;
        for (int i = 0; i < n; i++)
        {
            x[i].XUAT();
            tong += x[i].dongia * x[i].soluong;
        }
        cout << "\n" << setw(45) << "" << setw(15) << "Cong thanh tien" << setw(18) << tong;
    }
};

int main()
{
    PHIEU p;
    cout << "\nNHAP THONG TIN PHIEU";
    p.NHAP();
    p.XUAT();
    return 0;
}
