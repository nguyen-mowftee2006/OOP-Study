#include <bits/stdc++.h>
using namespace std;

class SACH
{
private:
    char ma[15], ten[50], nxb[50];
    int sotrang;
    float giatien;
public:
    void NHAP()
    {
        cout << "\nNhap ma sach: "; fflush(stdin); gets(ma);
        cout << "\nNhap ten sach: "; fflush(stdin); gets(ten);
        cout << "\nNhap nha xuat ban: "; fflush(stdin); gets(nxb);
        cout << "\nNhap so trang: "; cin >> sotrang;
        cout << "\nNhap gia tien: "; cin >> giatien;
    }
    void XUAT()
    {
        cout << "\n" << setw(15) << ma << setw(25) << ten << setw(25) << nxb << setw(15) << sotrang << setw(15) << giatien;
    }
};

int main()
{
    SACH x[100];
    int n;
    do
    {
        cout << "\nNhap so cuon sach: "; cin >> n;
    } while (n <= 0 || n > 100);
    for (int i = 0; i < n; i++)
    {
        cout << "\nNhap cuon sach thu " << i + 1 << ":";
        x[i].NHAP();
    }
    cout << left;
    cout << "\nDANH SACH SACH";
    cout << "\n" << setw(15) << "Ma sach" << setw(25) << "Ten sach" << setw(25) << "Nha xuat ban" << setw(15) << "So trang" << setw(15) << "Gia tien";
    for (int i = 0; i < n; i++)
        x[i].XUAT();
    return 0;
}
