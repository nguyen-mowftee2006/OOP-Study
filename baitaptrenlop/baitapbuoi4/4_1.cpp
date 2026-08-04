#include <bits/stdc++.h>
using namespace std;

class SACHGK;
void HienThi(SACHGK x[], int n);

class TACGIA
{
private:
    char ten[50], diachi[100];
    friend class SACHGK;
    friend void HienThi(SACHGK x[], int n);
};

class NXB
{
private:
    char ten[50], diachi[100];
    friend class SACHGK;
    friend void HienThi(SACHGK x[], int n);
};

class IDSACH
{
protected:
    char tensach[50];
    int masach;
public:
    void NHAP()
    {
        cout << "\nNhap ten sach: "; fflush(stdin); gets(tensach);
        cout << "\nNhap ma sach: "; cin >> masach;
    }
    void XUAT()
    {
        cout << "\n" << setw(15) << masach << setw(30) << tensach;
    }
};

class SACHGK : public IDSACH
{
private:
    TACGIA x;
    NXB y;
public:
    void NHAP()
    {
        IDSACH::NHAP();
        cout << "\nNhap ten tac gia: "; fflush(stdin); gets(x.ten);
        cout << "\nNhap dia chi tac gia: "; fflush(stdin); gets(x.diachi);
        cout << "\nNhap ten nha xuat ban: "; fflush(stdin); gets(y.ten);
        cout << "\nNhap dia chi nha xuat ban: "; fflush(stdin); gets(y.diachi);
    }
    void XUAT()
    {
        IDSACH::XUAT();
        cout << setw(25) << x.ten << setw(30) << x.diachi << setw(25) << y.ten << setw(30) << y.diachi;
    }
    friend void HienThi(SACHGK x[], int n);
    friend void SapXep(SACHGK x[], int n);
};

void HienThi(SACHGK x[], int n)
{
    for (int i = 0; i < n; i++)
        if (strcmp(x[i].y.ten, "KIMDONG") == 0 || strcmp(x[i].x.ten, "Pham Van At") == 0)
            x[i].XUAT();
}

void SapXep(SACHGK x[], int n)
{
    SACHGK tg;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (x[i].masach < x[j].masach)
            {
                tg = x[i]; x[i] = x[j]; x[j] = tg;
            }
}

int main()
{
    SACHGK x[100];
    int n;
    do
    {
        cout << "\nNhap so sach giao khoa: "; cin >> n;
    } while (n <= 0 || n > 100);
    for (int i = 0; i < n; i++)
    {
        cout << "\nNhap sach giao khoa thu " << i + 1 << ":";
        x[i].NHAP();
    }
    cout << left;
    cout << "\nDANH SACH SACH GIAO KHOA";
    cout << "\n" << setw(15) << "Ma sach" << setw(30) << "Ten sach" << setw(25) << "Tac gia" << setw(30) << "Dia chi tac gia" << setw(25) << "NXB" << setw(30) << "Dia chi NXB";
    for (int i = 0; i < n; i++)
        x[i].XUAT();
    cout << "\nSACH CUA NXB KIMDONG VA TAC GIA PHAM VAN AT";
    HienThi(x, n);
    SapXep(x, n);
    cout << "\nDANH SACH GIAM DAN THEO MA SACH";
    for (int i = 0; i < n; i++)
        x[i].XUAT();
    return 0;
}
