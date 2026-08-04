#include <bits/stdc++.h>
using namespace std;

class NHANSU
{
protected:
    char hoten[50], gioitinh[5], diachi[100];
    int ngay, thang, nam;
};

class CONGCHUC : public NHANSU
{
private:
    char nganhnghe[20], trinhdo[50];
    int namvaocq;
    float hsluong, phucap;
public:
    void NHAP()
    {
        cout << "\nNhap ho ten: "; fflush(stdin); gets(hoten);
        cout << "\nNhap gioi tinh: "; fflush(stdin); gets(gioitinh);
        cout << "\nNhap ngay sinh: "; cin >> ngay;
        cout << "\nNhap thang sinh: "; cin >> thang;
        cout << "\nNhap nam sinh: "; cin >> nam;
        cout << "\nNhap dia chi: "; fflush(stdin); gets(diachi);
        cout << "\nNhap nganh nghe: "; fflush(stdin); gets(nganhnghe);
        cout << "\nNhap nam vao co quan: "; cin >> namvaocq;
        cout << "\nNhap trinh do: "; fflush(stdin); gets(trinhdo);
        cout << "\nNhap he so luong: "; cin >> hsluong;
        cout << "\nNhap phu cap: "; cin >> phucap;
    }
    float THUNHAP() { return hsluong * 830 + phucap; }
    void XUAT()
    {
        cout << "\n" << setw(25) << hoten << setw(12) << gioitinh << ngay << "/" << thang << "/" << setw(15) << nam << setw(25) << diachi << setw(20) << nganhnghe << setw(15) << namvaocq << setw(20) << trinhdo << setw(15) << hsluong << setw(15) << phucap << setw(15) << THUNHAP();
    }
};

int main()
{
    CONGCHUC x[50], tg;
    int n;
    do
    {
        cout << "Nhap so cong chuc: "; cin >> n;
    } while (n <= 0 || n > 50);
    for (int i = 0; i < n; i++)
    {
        cout << "\nNhap cong chuc thu " << i + 1 << ":";
        x[i].NHAP();
    }
    cout << left;
    cout << "\nDANH SACH CONG CHUC";
    for (int i = 0; i < n; i++)
        x[i].XUAT();
    int vt = 0;
    for (int i = 1; i < n; i++)
        if (x[i].THUNHAP() < x[vt].THUNHAP())
            vt = i;
    cout << "\nCONG CHUC CO THU NHAP THAP NHAT";
    x[vt].XUAT();
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (x[i].THUNHAP() < x[j].THUNHAP())
            {
                tg = x[i]; x[i] = x[j]; x[j] = tg;
            }
    cout << "\nDANH SACH GIAM DAN THEO THU NHAP";
    for (int i = 0; i < n; i++)
        x[i].XUAT();
    return 0;
}
