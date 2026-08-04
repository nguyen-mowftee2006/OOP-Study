#include <bits/stdc++.h>
using namespace std;

class NGUOI
{
protected:
    char hoten[50], ngaysinh[20], quequan[50];
public:
    void NHAP()
    {
        cout << "\nNhap ho ten: "; fflush(stdin); gets(hoten);
        cout << "\nNhap ngay sinh: "; fflush(stdin); gets(ngaysinh);
        cout << "\nNhap que quan: "; fflush(stdin); gets(quequan);
    }
    void XUAT()
    {
        cout << "\nHo ten: " << hoten;
        cout << "\nNgay sinh: " << ngaysinh;
        cout << "\nQue quan: " << quequan;
    }
};

class SINHVIEN : public NGUOI
{
private:
    char ma[15], nganh[50];
    int khoahoc;
public:
    void NHAP()
    {
        NGUOI::NHAP();
        cout << "\nNhap ma sinh vien: "; fflush(stdin); gets(ma);
        cout << "\nNhap nganh: "; fflush(stdin); gets(nganh);
        cout << "\nNhap khoa hoc: "; cin >> khoahoc;
    }
    void XUAT()
    {
        cout << "\n" << setw(15) << ma << setw(25) << hoten << setw(15) << ngaysinh << setw(20) << quequan << setw(20) << nganh << setw(10) << khoahoc;
    }
    friend class LOPHOC;
};

class LOPHOC
{
private:
    char ma[15], ten[50], ngaymo[20];
    SINHVIEN *x;
    int n;
    NGUOI giaovien;
public:
    LOPHOC()
    {
        this->x = NULL; this->n = 0;
    }
    ~LOPHOC()
    {
        delete[] this->x; this->x = NULL; this->n = 0;
    }
    void NHAP()
    {
        cout << "\nNhap ma lop hoc: "; fflush(stdin); gets(ma);
        cout << "\nNhap ten lop hoc: "; fflush(stdin); gets(ten);
        cout << "\nNhap ngay mo: "; fflush(stdin); gets(ngaymo);
        cout << "\nNHAP THONG TIN GIAO VIEN";
        giaovien.NHAP();
        do
        {
            cout << "\nNhap so sinh vien: "; cin >> n;
        } while (n <= 0);
        x = new SINHVIEN[n];
        for (int i = 0; i < n; i++)
        {
            cout << "\nNhap sinh vien thu " << i + 1 << ":";
            x[i].NHAP();
        }
    }
    void XUAT()
    {
        cout << left;
        cout << "\n" << setw(38) << "" << "THONG TIN LOP HOC";
        cout << "\nMa lop hoc: " << setw(25) << ma << "Ten lop hoc: " << ten;
        cout << "\nNgay mo: " << ngaymo;
        cout << "\nGIAO VIEN";
        giaovien.XUAT();
        cout << "\nDANH SACH SINH VIEN";
        cout << "\n" << setw(15) << "Ma SV" << setw(25) << "Ho ten" << setw(15) << "Ngay sinh" << setw(20) << "Que quan" << setw(20) << "Nganh" << setw(10) << "Khoa hoc";
        for (int i = 0; i < n; i++)
            x[i].XUAT();
    }
    int DEM()
    {
        int dem = 0;
        for (int i = 0; i < n; i++)
            if (x[i].khoahoc == 11)
                dem++;
        return dem;
    }
    void SAPXEP()
    {
        SINHVIEN tg;
        for (int i = 0; i < n - 1; i++)
            for (int j = i + 1; j < n; j++)
                if (x[i].khoahoc > x[j].khoahoc)
                {
                    tg = x[i]; x[i] = x[j]; x[j] = tg;
                }
    }
};

int main()
{
    LOPHOC a;
    cout << "\nNHAP THONG TIN LOP HOC";
    a.NHAP();
    cout << "\nLOP HOC VUA NHAP";
    a.XUAT();
    cout << "\nSo sinh vien khoa 11: " << a.DEM();
    a.SAPXEP();
    cout << "\nLOP HOC SAU KHI SAP XEP TANG DAN THEO KHOA HOC";
    a.XUAT();
    return 0;
}
