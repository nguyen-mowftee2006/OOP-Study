#include <bits/stdc++.h>
using namespace std;

class HANG
{
private:
    char ma[15], ten[50];
    float dongia;
public:
    void NHAP()
    {
        cout << "\nNhap ma hang: "; fflush(stdin); gets(ma);
        cout << "\nNhap ten hang: "; fflush(stdin); gets(ten);
        cout << "\nNhap don gia: "; cin >> dongia;
    }
    void XUAT()
    {
        cout << "\n" << setw(15) << ma << setw(30) << ten << setw(15) << dongia;
    }
};

class PHIEU
{
private:
    char ma[15];
    HANG x[100];
    int n;
public:
    void NHAP()
    {
        cout << "Nhap ma phieu: "; fflush(stdin); gets(ma);
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
        cout << left;
        cout << "\n" << setw(25) << "" << "PHIEU MAT HANG";
        cout << "\nMa phieu: " << ma;
        cout << "\nSo mat hang: " << n;
        cout << "\n" << setw(15) << "Ma hang" << setw(30) << "Ten hang" << setw(15) << "Don gia";
        for (int i = 0; i < n; i++)
            x[i].XUAT();
    }
};

int main()
{
    PHIEU p;
    cout << "NHAP THONG TIN PHIEU";
    p.NHAP();
    cout << "\nTHONG TIN PHIEU";
    p.XUAT();
    return 0;
}
