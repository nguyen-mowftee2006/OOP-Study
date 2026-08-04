#include <bits/stdc++.h>
using namespace std;

class SINHVIEN
{
private:
    char ma[15], hoten[50];
    float toan, ly, hoa;
public:
    void NHAP()
    {
        cout << "\nNhap ma sinh vien: "; fflush(stdin); gets(ma);
        cout << "\nNhap ho ten: "; fflush(stdin); gets(hoten);
        cout << "\nNhap diem Toan: "; cin >> toan;
        cout << "\nNhap diem Ly: "; cin >> ly;
        cout << "\nNhap diem Hoa: "; cin >> hoa;
    }
    void XUAT()
    {
        cout << "\n" << setw(15) << ma << setw(30) << hoten << setw(12) << toan << setw(12) << ly << setw(12) << hoa << setw(12) << TongDiem(*this);
    }
    friend float TongDiem(SINHVIEN x);
};

float TongDiem(SINHVIEN x)
{
    return x.toan + x.ly + x.hoa;
}

int main()
{
    SINHVIEN x[100], tg;
    int n;
    do
    {
        cout << "Nhap so sinh vien: "; cin >> n;
    } while (n <= 0 || n > 100);
    for (int i = 0; i < n; i++)
    {
        cout << "\nNhap sinh vien thu " << i + 1 << ":";
        x[i].NHAP();
    }
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (TongDiem(x[i]) > TongDiem(x[j]))
            {
                tg = x[i]; x[i] = x[j]; x[j] = tg;
            }
    cout << left;
    cout << "\nDANH SACH SINH VIEN TANG DAN THEO TONG DIEM";
    cout << "\n" << setw(15) << "Ma SV" << setw(30) << "Ho ten" << setw(12) << "Toan" << setw(12) << "Ly" << setw(12) << "Hoa" << setw(12) << "Tong diem";
    for (int i = 0; i < n; i++)
        x[i].XUAT();
    return 0;
}
