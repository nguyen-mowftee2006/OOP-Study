#include <bits/stdc++.h>
using namespace std;

// Khai bao lai gets de tuong thich voi che do GNU++14 cua Dev-C++.
extern "C" char *gets(char *);

class NGUOIDUNG
{
protected:
    // Thong tin chung cua nguoi lap, nguoi mua hoac nguoi nhan phieu.
    char ma[15], hoten[50], diachi[100], sdt[20];
public:
    // Nhap thong tin nguoi dung.
    void NHAP()
    {
        cout << "\nNhap ma nguoi dung: "; fflush(stdin); gets(ma);
        cout << "\nNhap ho ten: "; fflush(stdin); gets(hoten);
        cout << "\nNhap dia chi: "; fflush(stdin); gets(diachi);
        cout << "\nNhap so dien thoai: "; fflush(stdin); gets(sdt);
    }
};

class HANGHOA
{
private:
    // Thong tin cua mot hang hoa trong phieu.
    char ma[15], ten[50];
    int soluong;
    float dongia;
public:
    // Nhap mot hang hoa.
    void NHAP()
    {
        cout << "\nNhap ma hang hoa: "; fflush(stdin); gets(ma);
        cout << "\nNhap ten hang hoa: "; fflush(stdin); gets(ten);
        do
        {
            cout << "\nNhap so luong duong: "; cin >> soluong;
        } while (soluong <= 0);
        do
        {
            cout << "\nNhap don gia khong am: "; cin >> dongia;
        } while (dongia < 0);
    }
    // Xuat mot dong hang hoa, thanh tien = so luong * don gia.
    void XUAT()
    {
        cout << "\n" << setw(15) << ma << setw(30) << ten << setw(15) << soluong << setw(15) << dongia << setw(18) << soluong * dongia;
    }
    // Cho phep lop PHIEU truy cap cac thuoc tinh private cua HANGHOA.
    friend class PHIEU;
};

// PHIEU ke thua thong tin tu lop NGUOIDUNG.
class PHIEU : public NGUOIDUNG
{
private:
    char maphieu[15], ngaylap[20];
    // Danh sach cac hang hoa thuoc phieu.
    HANGHOA x[100];
    int n;
public:
    // Nhap thong tin chung va danh sach hang hoa cua phieu.
    void NHAP()
    {
        cout << "\nNhap ma phieu: "; fflush(stdin); gets(maphieu);
        cout << "\nNhap ngay lap: "; fflush(stdin); gets(ngaylap);
        cout << "\nNHAP THONG TIN NGUOI DUNG";
        // Goi phuong thuc NHAP cua lop cha.
        NGUOIDUNG::NHAP();
        do
        {
            cout << "\nNhap so hang hoa: "; cin >> n;
        } while (n <= 0 || n > 100);
        for (int i = 0; i < n; i++)
        {
            cout << "\nNhap hang hoa thu " << i + 1 << ":";
            x[i].NHAP();
        }
    }
    // Xuat phieu theo dang bang va tinh tong thanh tien.
    void XUAT()
    {
        cout << left << fixed << setprecision(2);
        cout << "\n" << setw(35) << "" << "PHIEU HANG HOA";
        cout << "\nMa phieu: " << setw(30) << maphieu << "Ngay lap: " << ngaylap;
        cout << "\nMa nguoi dung: " << setw(25) << ma << "Ho ten: " << hoten;
        cout << "\nDia chi: " << setw(32) << diachi << "SDT: " << sdt;
        cout << "\n" << setw(15) << "Ma hang" << setw(30) << "Ten hang" << setw(15) << "So luong" << setw(15) << "Don gia" << setw(18) << "Thanh tien";
        float tong = 0;
        for (int i = 0; i < n; i++)
        {
            x[i].XUAT();
            tong += x[i].soluong * x[i].dongia;
        }
        cout << "\n" << setw(60) << "" << setw(15) << "TONG" << setw(18) << tong;
        cout << "\n" << setw(35) << "Nguoi lap" << "Nguoi nhan";
    }

    /*
        CAC YEU CAU CO THE BO SUNG TRONG DE THI:

        1. DEM(): Dem hang hoa thoa man dieu kien ve so luong,
           don gia, thanh tien, ma hang hoac ten hang.

        2. TONG(): Tinh tong so luong hoac tong tien cua cac
           hang hoa thoa man mot dieu kien cho truoc.

        3. HIENTHI(): Hien thi cac hang hoa co ten, ma, so luong,
           don gia hoac thanh tien thoa man dieu kien.

        4. TIMMAX() / TIMMIN(): Tim hang hoa co so luong, don gia
           hoac thanh tien lon nhat, nho nhat.

        5. SAPXEP(): Sap xep tang dan hoac giam dan theo ma hang,
           ten hang, so luong, don gia hoac thanh tien.

        6. SUA(): Sua thong tin nguoi dung, thong tin phieu hoac
           thong tin cua hang hoa co ma duoc chi dinh.
    */
};

int main()
{
    PHIEU p;
    // Nhap va hien thi phieu vua nhap.
    cout << "\nNHAP THONG TIN PHIEU";
    p.NHAP();
    cout << "\nPHIEU VUA NHAP";
    p.XUAT();
    return 0;
}
