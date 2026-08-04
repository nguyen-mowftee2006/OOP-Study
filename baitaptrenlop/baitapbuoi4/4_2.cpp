#include <bits/stdc++.h>
using namespace std;

class HANG
{
protected:
    int ma;
    char ten[50];
    float gia;
public:
    void NHAP()
    {
        cout << "\nNhap ma hang: "; cin >> ma;
        cout << "\nNhap ten hang: "; fflush(stdin); gets(ten);
        cout << "\nNhap gia: "; cin >> gia;
    }
    void XUAT()
    {
        cout << "\n" << setw(15) << ma << setw(30) << ten << setw(15) << gia;
    }
};

class HANG_MM : public HANG
{
private:
    char chatlieu[30], kieudang[30];
    int soluong;
public:
    void NHAP()
    {
        HANG::NHAP();
        cout << "\nNhap chat lieu: "; fflush(stdin); gets(chatlieu);
        cout << "\nNhap kieu dang: "; fflush(stdin); gets(kieudang);
        cout << "\nNhap so luong: "; cin >> soluong;
    }
    void XUAT()
    {
        HANG::XUAT();
        cout << setw(25) << chatlieu << setw(25) << kieudang << setw(15) << soluong;
    }
    friend class CUAHANG;
};

class CUAHANG
{
private:
    int ma;
    char ten[50];
    HANG_MM *x;
    int n;
public:
    void NHAP()
    {
        cout << "Nhap ma cua hang: "; cin >> ma;
        cout << "\nNhap ten cua hang: "; fflush(stdin); gets(ten);
        do
        {
            cout << "\nNhap so hang may mac: "; cin >> n;
        } while (n <= 0);
        x = new HANG_MM[n];
        for (int i = 0; i < n; i++)
        {
            cout << "\nNhap hang may mac thu " << i + 1 << ":";
            x[i].NHAP();
        }
    }
    void XUAT()
    {
        cout << left;
        cout << "\nMa cua hang: " << ma;
        cout << "\nTen cua hang: " << ten;
        cout << "\nDANH SACH HANG MAY MAC";
        cout << "\n" << setw(15) << "Ma hang" << setw(30) << "Ten hang" << setw(15) << "Gia" << setw(25) << "Chat lieu" << setw(25) << "Kieu dang" << setw(15) << "So luong";
        for (int i = 0; i < n; i++)
            x[i].XUAT();
    }
    void SUA() { strcpy(ten, "IVYMODA"); }
    void HIENTHI()
    {
        for (int i = 0; i < n; i++)
            if (x[i].soluong > 25)
                x[i].XUAT();
    }
};

int main()
{
    CUAHANG a;
    cout << "NHAP THONG TIN CUA HANG";
    a.NHAP();
    cout << "\nTHONG TIN CUA HANG";
    a.XUAT();
    a.SUA();
    cout << "\nTHONG TIN CUA HANG SAU KHI SUA TEN";
    a.XUAT();
    cout << "\nHANG MAY MAC CO SO LUONG LON HON 25";
    a.HIENTHI();
    return 0;
}
