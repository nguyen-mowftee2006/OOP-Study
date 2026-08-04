#include <bits/stdc++.h>
using namespace std;

class PERSON
{
protected:
    char hoten[50], ngaysinh[15], quequan[50];
};

class KYSU : public PERSON
{
private:
    char nganh[50];
    int namTN;
public:
    void NHAP()
    {
        cout << "\nNhap ho ten: "; fflush(stdin); gets(hoten);
        cout << "\nNhap ngay sinh: "; fflush(stdin); gets(ngaysinh);
        cout << "\nNhap que quan: "; fflush(stdin); gets(quequan);
        cout << "\nNhap nganh hoc: "; fflush(stdin); gets(nganh);
        cout << "\nNhap nam tot nghiep: "; cin >> namTN;
    }
    void XUAT()
    {
        cout << "\n" << setw(25) << hoten << setw(15) << ngaysinh << setw(25) << quequan << setw(25) << nganh << setw(15) << namTN;
    }
    friend int NamTotNghiep(KYSU x);
};

int NamTotNghiep(KYSU x)
{
    return x.namTN;
}

int main()
{
    KYSU x[100];
    int n;
    do
    {
        cout << "Nhap so ky su: "; cin >> n;
    } while (n <= 0);
    for (int i = 0; i < n; i++)
    {
        cout << "\nNhap ky su thu " << i + 1 << ":";
        x[i].NHAP();
    }
    cout << left;
    cout << "\nDANH SACH KY SU";
    cout << "\n" << setw(25) << "Ho ten" << setw(15) << "Ngay sinh" << setw(25) << "Que quan" << setw(25) << "Nganh hoc" << setw(15) << "Nam tot nghiep";
    for (int i = 0; i < n; i++)
        x[i].XUAT();
    if (n > 0)
    {
        int max = NamTotNghiep(x[0]);
        for (int i = 1; i < n; i++)
            if (NamTotNghiep(x[i]) > max)
                max = NamTotNghiep(x[i]);
        cout << "\nCAC KY SU TOT NGHIEP GAN DAY NHAT";
        cout << "\n" << setw(25) << "Ho ten" << setw(15) << "Ngay sinh" << setw(25) << "Que quan" << setw(25) << "Nganh hoc" << setw(15) << "Nam tot nghiep";
        for (int i = 0; i < n; i++)
            if (NamTotNghiep(x[i]) == max)
                x[i].XUAT();
    }
    return 0;
}
