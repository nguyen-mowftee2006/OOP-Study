#include <bits/stdc++.h>
using namespace std;

class KHOA
{
private:
    char ma[15], ten[50], truongkhoa[50];
    friend class TRUONGDH;
};

class BAN
{
private:
    char ma[15], ten[50], ngaythanhlap[20];
    friend class TRUONGDH;
};

class TRUONG
{
protected:
    char ma[15], ten[50], diachi[100];
public:
    void NHAP()
    {
        cout << "\nNhap ma truong: "; fflush(stdin); gets(ma);
        cout << "\nNhap ten truong: "; fflush(stdin); gets(ten);
        cout << "\nNhap dia chi: "; fflush(stdin); gets(diachi);
    }
    void XUAT()
    {
        cout << "\nMa truong: " << ma;
        cout << "\nTen truong: " << ten;
        cout << "\nDia chi: " << diachi;
    }
};

class TRUONGDH : public TRUONG
{
private:
    KHOA x[100];
    int n;
    BAN y[100];
    int m;
public:
    void NHAP()
    {
        TRUONG::NHAP();
        do
        {
            cout << "\nNhap so khoa: "; cin >> n;
        } while (n <= 0 || n > 100);
        for (int i = 0; i < n; i++)
        {
            cout << "\nNhap ma khoa: "; fflush(stdin); gets(x[i].ma);
            cout << "\nNhap ten khoa: "; fflush(stdin); gets(x[i].ten);
            cout << "\nNhap truong khoa: "; fflush(stdin); gets(x[i].truongkhoa);
        }
        do
        {
            cout << "\nNhap so ban: "; cin >> m;
        } while (m <= 0 || m > 100);
        for (int i = 0; i < m; i++)
        {
            cout << "\nNhap ma ban: "; fflush(stdin); gets(y[i].ma);
            cout << "\nNhap ten ban: "; fflush(stdin); gets(y[i].ten);
            cout << "\nNhap ngay thanh lap: "; fflush(stdin); gets(y[i].ngaythanhlap);
        }
    }
    void XUAT()
    {
        TRUONG::XUAT();
        cout << left;
        cout << "\nDANH SACH KHOA";
        cout << "\n" << setw(15) << "Ma khoa" << setw(30) << "Ten khoa" << setw(30) << "Truong khoa";
        for (int i = 0; i < n; i++)
            cout << "\n" << setw(15) << x[i].ma << setw(30) << x[i].ten << setw(30) << x[i].truongkhoa;
        cout << "\nDANH SACH BAN";
        cout << "\n" << setw(15) << "Ma ban" << setw(30) << "Ten ban" << setw(20) << "Ngay thanh lap";
        for (int i = 0; i < m; i++)
            cout << "\n" << setw(15) << y[i].ma << setw(30) << y[i].ten << setw(20) << y[i].ngaythanhlap;
    }
    void XOA()
    {
        for (int i = 0; i < n; i++)
            if (strcmp(x[i].ma, "KH01") == 0)
            {
                for (int j = i; j < n - 1; j++)
                    x[j] = x[j + 1];
                n--; i--;
            }
    }
};

int main()
{
    TRUONGDH a;
    cout << "\nNHAP THONG TIN TRUONG DAI HOC";
    a.NHAP();
    cout << "\nTHONG TIN TRUONG DAI HOC";
    a.XUAT();
    a.XOA();
    cout << "\nTHONG TIN TRUONG SAU KHI XOA KHOA KH01";
    a.XUAT();
    return 0;
}
