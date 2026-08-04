#include <bits/stdc++.h>
using namespace std;

class XEHOI;
void Thang5Nam2025(XEHOI *x, int n);

class DATE
{
private:
    int d, m, y;
public:
    void NHAP()
    {
        cout << "\nNhap ngay: "; cin >> d;
        cout << "\nNhap thang: "; cin >> m;
        cout << "\nNhap nam: "; cin >> y;
    }
    void XUAT() { cout << d << "/" << m << "/" << y; }
    friend class XEHOI;
    friend void Thang5Nam2025(XEHOI *x, int n);
};

class XEHOI
{
private:
    char nhanhieu[30], hangsx[30], kieudang[30], mauson[20], xuatxu[30];
    DATE namsx;
    float giaban;
public:
    void NHAP()
    {
        cout << "\nNhap nhan hieu: "; fflush(stdin); gets(nhanhieu);
        cout << "\nNhap hang san xuat: "; fflush(stdin); gets(hangsx);
        cout << "\nNhap kieu dang: "; fflush(stdin); gets(kieudang);
        cout << "\nNhap mau son: "; fflush(stdin); gets(mauson);
        cout << "\nNHAP NGAY SAN XUAT";
        namsx.NHAP();
        cout << "\nNhap xuat xu: "; fflush(stdin); gets(xuatxu);
        cout << "\nNhap gia ban: "; cin >> giaban;
    }
    void XUAT()
    {
        cout << "\n" << setw(20) << nhanhieu << setw(20) << hangsx << setw(20) << kieudang << setw(15) << mauson << namsx.d << "/" << namsx.m << "/" << setw(15) << namsx.y << setw(20) << xuatxu << setw(15) << giaban;
    }
    friend void HienThiToyota(XEHOI *x, int n);
    friend void Thang5Nam2025(XEHOI *x, int n);
    friend void SapXep(XEHOI *x, int n);
};

void HienThiToyota(XEHOI *x, int n)
{
    for (int i = 0; i < n; i++)
        if (strcmp((x + i)->hangsx, "Toyota") == 0)
            (x + i)->XUAT();
}

void Thang5Nam2025(XEHOI *x, int n)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
        if ((x + i)->namsx.m == 5 && (x + i)->namsx.y == 2025)
        {
            (x + i)->XUAT();
            dem++;
        }
    cout << "\nSo xe san xuat thang 5/2025: " << dem;
}

void SapXep(XEHOI *x, int n)
{
    XEHOI tg;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if ((x + i)->giaban > (x + j)->giaban)
            {
                tg = *(x + i); *(x + i) = *(x + j); *(x + j) = tg;
            }
}

int main()
{
    int n;
    do
    {
        cout << "Nhap so xe hoi: "; cin >> n;
    } while (n <= 0);
    XEHOI *x = new XEHOI[n];
    for (int i = 0; i < n; i++)
    {
        cout << "\nNhap xe hoi thu " << i + 1 << ":";
        (x + i)->NHAP();
    }
    cout << left;
    cout << "\nDANH SACH XE HOI";
    for (int i = 0; i < n; i++)
        (x + i)->XUAT();
    cout << "\nCAC XE HOI CUA HANG TOYOTA";
    HienThiToyota(x, n);
    cout << "\nCAC XE SAN XUAT THANG 5/2025";
    Thang5Nam2025(x, n);
    SapXep(x, n);
    cout << "\nDANH SACH TANG DAN THEO GIA BAN";
    for (int i = 0; i < n; i++)
        (x + i)->XUAT();
    delete[] x;
    return 0;
}
