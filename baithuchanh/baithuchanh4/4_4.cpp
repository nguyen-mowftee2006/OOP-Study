#include <bits/stdc++.h>
using namespace std;

class ELECTRONIC
{
protected:
    float congsuat, dienap;
public:
    ELECTRONIC(float congsuat, float dienap)
    {
        this->congsuat = congsuat; this->dienap = dienap;
    }
};

class MAYGIAT : public ELECTRONIC
{
private:
    float dungtich;
    char loai[50];
public:
    MAYGIAT(float congsuat, float dienap, float dungtich, const char loai[]) : ELECTRONIC(congsuat, dienap)
    {
        this->dungtich = dungtich; strcpy(this->loai, loai);
    }
    void XUAT()
    {
        cout << "\nCong suat: " << congsuat;
        cout << "\nDien ap: " << dienap;
        cout << "\nDung tich: " << dungtich << " kg";
        cout << "\nLoai: " << loai;
    }
};

class TULANH : public ELECTRONIC
{
private:
    float dungtich;
    int songan;
public:
    TULANH(float congsuat, float dienap, float dungtich, int songan) : ELECTRONIC(congsuat, dienap)
    {
        this->dungtich = dungtich; this->songan = songan;
    }
    void XUAT()
    {
        cout << "\nCong suat: " << congsuat;
        cout << "\nDien ap: " << dienap;
        cout << "\nDung tich: " << dungtich << " lit";
        cout << "\nSo ngan: " << songan;
    }
};

int main()
{
    MAYGIAT a(2000, 220, 9, "Cua truoc");
    TULANH b(150, 220, 300, 3);
    cout << "\nTHONG TIN MAY GIAT";
    a.XUAT();
    cout << "\nTHONG TIN TU LANH";
    b.XUAT();
    return 0;
}
