#include <bits/stdc++.h>
using namespace std;

class DOANHNGHIEP;
void HienThiHaNoi(DOANHNGHIEP x[], int n);
long Tong2015(DOANHNGHIEP x[], int n);

class DATE
{
private:
    int day, month, year;
public:
    void NHAP()
    {
        cout << "\nNhap ngay: "; cin >> day;
        cout << "\nNhap thang: "; cin >> month;
        cout << "\nNhap nam: "; cin >> year;
    }
    void XUAT() { cout << day << "/" << month << "/" << year; }
    friend class DOANHNGHIEP;
    friend long Tong2015(DOANHNGHIEP x[], int n);
};

class DIACHI
{
private:
    char dienthoai[12], phuong[30], quan[30], thanhpho[30];
    friend class DOANHNGHIEP;
    friend void HienThiHaNoi(DOANHNGHIEP x[], int n);
};

class DOANHNGHIEP
{
private:
    int ma;
    char ten[60], giamdoc[30];
    DATE ngaytl;
    DIACHI diachi;
    long doanhthu;
public:
    void NHAP()
    {
        cout << "\nNhap ma doanh nghiep: "; cin >> ma;
        cout << "\nNhap ten doanh nghiep: "; fflush(stdin); gets(ten);
        cout << "\nNHAP NGAY THANH LAP";
        ngaytl.NHAP();
        cout << "\nNhap dien thoai: "; fflush(stdin); gets(diachi.dienthoai);
        cout << "\nNhap phuong: "; fflush(stdin); gets(diachi.phuong);
        cout << "\nNhap quan: "; fflush(stdin); gets(diachi.quan);
        cout << "\nNhap thanh pho: "; fflush(stdin); gets(diachi.thanhpho);
        cout << "\nNhap giam doc: "; fflush(stdin); gets(giamdoc);
        cout << "\nNhap doanh thu: "; cin >> doanhthu;
    }
    void XUAT()
    {
        cout << "\n" << setw(10) << ma << setw(25) << ten << ngaytl.day << "/" << ngaytl.month << "/" << setw(15) << ngaytl.year << setw(15) << diachi.dienthoai << setw(20) << diachi.phuong << setw(20) << diachi.quan << setw(20) << diachi.thanhpho << setw(25) << giamdoc << setw(15) << doanhthu;
    }
    friend void HienThiHaNoi(DOANHNGHIEP x[], int n);
    friend long Tong2015(DOANHNGHIEP x[], int n);
    friend void Sua(DOANHNGHIEP x[], int n);
};

void HienThiHaNoi(DOANHNGHIEP x[], int n)
{
    for (int i = 0; i < n; i++)
        if (strcmp(x[i].diachi.thanhpho, "Ha Noi") == 0)
            x[i].XUAT();
}

long Tong2015(DOANHNGHIEP x[], int n)
{
    long tong = 0;
    for (int i = 0; i < n; i++)
        if (x[i].ngaytl.year == 2015)
            tong += x[i].doanhthu;
    return tong;
}

void Sua(DOANHNGHIEP x[], int n)
{
    int ma;
    cout << "\nNhap ma doanh nghiep can sua: "; cin >> ma;
    for (int i = 0; i < n; i++)
        if (x[i].ma == ma)
        {
            cout << "\nNhap lai toan bo thong tin doanh nghiep:";
            x[i].NHAP();
            return;
        }
}

int main()
{
    DOANHNGHIEP x[20];
    int n;
    do
    {
        cout << "\nNhap so doanh nghiep: "; cin >> n;
    } while (n <= 0 || n >= 20);
    for (int i = 0; i < n; i++)
    {
        cout << "\nNhap doanh nghiep thu " << i + 1 << ":";
        x[i].NHAP();
    }
    cout << left;
    cout << "\nDANH SACH DOANH NGHIEP";
    cout << "\n" << setw(10) << "Ma DN" << setw(25) << "Ten DN" << setw(15) << "Ngay thanh lap" << setw(15) << "Dien thoai" << setw(20) << "Phuong" << setw(20) << "Quan" << setw(20) << "Thanh pho" << setw(25) << "Giam doc" << setw(15) << "Doanh thu";
    for (int i = 0; i < n; i++)
        x[i].XUAT();
    cout << "\nCAC DOANH NGHIEP O HA NOI";
    HienThiHaNoi(x, n);
    cout << "\nTong doanh thu cua doanh nghiep thanh lap nam 2015: " << Tong2015(x, n);
    Sua(x, n);
    cout << "\nDANH SACH SAU KHI SUA";
    for (int i = 0; i < n; i++)
        x[i].XUAT();
    return 0;
}
