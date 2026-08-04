#include <bits/stdc++.h>
using namespace std;

class HANG
{
private:
    char ma[15], ten[50];
    float dongia;
    int soluong;
public:
    void NHAP()
    {
        cout << "\nNhap ma hang: "; fflush(stdin); gets(ma);
        cout << "\nNhap ten hang: "; fflush(stdin); gets(ten);
        cout << "\nNhap don gia: "; cin >> dongia;
        cout << "\nNhap so luong: "; cin >> soluong;
    }
    void XUAT()
    {
        cout << "\n" << setw(15) << ma << setw(25) << ten << setw(15) << dongia << setw(15) << soluong << setw(18) << dongia * soluong;
    }
};

int main()
{
    HANG x[100];
    int n;
    do
    {
        cout << "\nNhap so mat hang: "; cin >> n;
    } while (n <= 0 || n > 100);
    for (int i = 0; i < n; i++)
    {
        cout << "\nNhap mat hang thu " << i + 1 << ":";
        x[i].NHAP();
    }
    cout << left;
    cout << "\nDANH SACH MAT HANG";
    cout << "\n" << setw(15) << "Ma hang" << setw(25) << "Ten hang" << setw(15) << "Don gia" << setw(15) << "So luong" << setw(18) << "Thanh tien";
    for (int i = 0; i < n; i++)
        x[i].XUAT();
    return 0;
}
