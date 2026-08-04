#include <bits/stdc++.h>
using namespace std;

class PRINTER
{
protected:
    float trongluong, tocdo;
    char hangsx[50];
    int namsx;
public:
    void SUA2020() { namsx = 2020; }
};

class DOTPRINTER : public PRINTER
{
private:
    int matdokim;
public:
    void NHAP()
    {
        cout << "Nhap trong luong: "; cin >> trongluong;
        cout << "\nNhap hang san xuat: "; fflush(stdin); gets(hangsx);
        cout << "\nNhap nam san xuat: "; cin >> namsx;
        cout << "\nNhap toc do: "; cin >> tocdo;
        cout << "\nNhap mat do kim: "; cin >> matdokim;
    }
    void XUAT()
    {
        cout << "\nTrong luong: " << trongluong;
        cout << "\nHang san xuat: " << hangsx;
        cout << "\nNam san xuat: " << namsx;
        cout << "\nToc do: " << tocdo << " trang/phut";
        cout << "\nMat do kim: " << matdokim;
    }
};

class LASERPRINTER : public PRINTER
{
private:
    int dophangiai;
public:
    void NHAP()
    {
        cout << "Nhap trong luong: "; cin >> trongluong;
        cout << "\nNhap hang san xuat: "; fflush(stdin); gets(hangsx);
        cout << "\nNhap nam san xuat: "; cin >> namsx;
        cout << "\nNhap toc do: "; cin >> tocdo;
        cout << "\nNhap do phan giai: "; cin >> dophangiai;
    }
    void XUAT()
    {
        cout << "\nTrong luong: " << trongluong;
        cout << "\nHang san xuat: " << hangsx;
        cout << "\nNam san xuat: " << namsx;
        cout << "\nToc do: " << tocdo << " trang/phut";
        cout << "\nDo phan giai: " << dophangiai;
    }
};

int main()
{
    LASERPRINTER a;
    DOTPRINTER b;
    cout << "NHAP MAY IN LASER";
    a.NHAP();
    cout << "\nNHAP MAY IN KIM";
    b.NHAP();
    a.SUA2020(); b.SUA2020();
    cout << "\nTHONG TIN MAY IN LASER";
    a.XUAT();
    cout << "\nTHONG TIN MAY IN KIM";
    b.XUAT();
    return 0;
}
