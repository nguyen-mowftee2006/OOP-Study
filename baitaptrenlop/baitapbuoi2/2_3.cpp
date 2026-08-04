#include <bits/stdc++.h>
using namespace std;

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
};

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
        cout << "\n" << setw(15) << ma << setw(30) << ten << setw(15) << dongia << setw(15) << soluong << setw(18) << dongia * soluong;
    }
    friend class PHIEU;
};

class PHIEU
{
private:
    char ma[15], manvlap[15], hoten[50], khachhang[50];
    DATE ngaylap;
    HANG *x;
    int n;
public:
    void NHAP()
    {
        cout << "Nhap ma phieu: "; fflush(stdin); gets(ma);
        cout << "\nNHAP NGAY LAP PHIEU";
        ngaylap.NHAP();
        cout << "\nNhap ma nguoi lap phieu: "; fflush(stdin); gets(manvlap);
        cout << "\nNhap ho ten nguoi lap: "; fflush(stdin); gets(hoten);
        cout << "\nNhap ten khach hang: "; fflush(stdin); gets(khachhang);
        do
        {
            cout << "\nNhap so mat hang: "; cin >> n;
        } while (n <= 0);
        x = new HANG[n];
        for (int i = 0; i < n; i++)
        {
            cout << "\nNhap mat hang thu " << i + 1 << ":";
            x[i].NHAP();
        }
    }
    void XUAT()
    {
        cout << left << fixed << setprecision(2);
        cout << "\nBACH HOA SON TUNG";
        cout << "\n" << setw(30) << "" << "PHIEU MUA HANG";
        cout << "\nMa phieu: " << setw(30) << ma << "Ngay lap phieu: "; ngaylap.XUAT();
        cout << "\nMa nguoi lap phieu: " << setw(20) << manvlap << "Ho va ten: " << hoten;
        cout << "\nKhach hang: " << khachhang;
        cout << "\nDANH MUC HANG HOA";
        cout << "\n" << setw(15) << "Ma hang" << setw(30) << "Ten hang" << setw(15) << "Don gia" << setw(15) << "So luong" << setw(18) << "Thanh tien";
        float tong = 0;
        int tongsl = 0;
        for (int i = 0; i < n; i++)
        {
            x[i].XUAT();
            tong += x[i].dongia * x[i].soluong;
            tongsl += x[i].soluong;
        }
        cout << "\n" << setw(45) << "TONG" << setw(15) << "" << setw(15) << tongsl << setw(18) << tong;
        cout << "\n" << setw(30) << "Giam doc" << setw(30) << "Phong tai chinh" << "Nguoi lap phieu";
    }
    int DEMMAX()
    {
        int max = x[0].soluong, dem = 0;
        for (int i = 1; i < n; i++)
            if (x[i].soluong > max)
                max = x[i].soluong;
        for (int i = 0; i < n; i++)
            if (x[i].soluong == max)
                dem++;
        return dem;
    }
};

int main()
{
    PHIEU p;
    cout << "NHAP THONG TIN PHIEU";
    p.NHAP();
    p.XUAT();
    cout << "\nSo mat hang co so luong mua lon nhat: " << p.DEMMAX();
    return 0;
}
