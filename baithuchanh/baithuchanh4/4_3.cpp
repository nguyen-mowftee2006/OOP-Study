#include <bits/stdc++.h>
using namespace std;

class VEHICLE
{
protected:
    char nhanhieu[50], hang[50];
    int namsx;
public:
    void NHAP()
    {
        cout << "Nhap nhan hieu: "; fflush(stdin); gets(nhanhieu);
        cout << "\nNhap nam san xuat: "; cin >> namsx;
        cout << "\nNhap hang: "; fflush(stdin); gets(hang);
    }
    void XUAT()
    {
        cout << "\nNhan hieu: " << nhanhieu;
        cout << "\nNam san xuat: " << namsx;
        cout << "\nHang: " << hang;
    }
};

class OTO : public VEHICLE
{
private:
    int sochongoi;
    float dungtich;
public:
    void NHAP()
    {
        VEHICLE::NHAP();
        cout << "\nNhap so cho ngoi: "; cin >> sochongoi;
        cout << "\nNhap dung tich: "; cin >> dungtich;
    }
    void XUAT()
    {
        VEHICLE::XUAT();
        cout << "\nSo cho ngoi: " << sochongoi;
        cout << "\nDung tich: " << dungtich;
    }
    void SUA() { dungtich = 3.0; }
};

class MOTO : public VEHICLE
{
private:
    float phankhoi;
public:
    void NHAP()
    {
        VEHICLE::NHAP();
        cout << "\nNhap phan khoi: "; cin >> phankhoi;
    }
    void XUAT()
    {
        VEHICLE::XUAT();
        cout << "\nPhan khoi: " << phankhoi;
    }
};

int main()
{
    OTO a;
    MOTO b;
    cout << "NHAP XE O TO";
    a.NHAP();
    cout << "\nNHAP XE MO TO";
    b.NHAP();
    a.SUA();
    cout << "\nTHONG TIN XE O TO";
    a.XUAT();
    cout << "\nTHONG TIN XE MO TO";
    b.XUAT();
    return 0;
}
