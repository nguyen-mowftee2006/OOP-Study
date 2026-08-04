#include <bits/stdc++.h>
using namespace std;

class HOCSINH
{
private:
    char hoten[50], quequan[50];
    int tuoi;
    float toan, ly, hoa;
public:
    HOCSINH()
    {
        strcpy(this->hoten, ""); strcpy(this->quequan, ""); this->tuoi = 0;
        this->toan = 0; this->ly = 0; this->hoa = 0;
    }
    HOCSINH(const char hoten[], int tuoi, const char quequan[], float toan, float ly, float hoa)
    {
        strcpy(this->hoten, hoten); this->tuoi = tuoi; strcpy(this->quequan, quequan);
        this->toan = toan; this->ly = ly; this->hoa = hoa;
    }
    void XUAT()
    {
        cout << "\nHo ten: " << hoten;
        cout << "\nTuoi: " << tuoi;
        cout << "\nQue quan: " << quequan;
        cout << "\nDiem Toan: " << toan;
        cout << "\nDiem Ly: " << ly;
        cout << "\nDiem Hoa: " << hoa;
    }
};

int main()
{
    HOCSINH a;
    HOCSINH b("Nguyen Van A", 20, "Ha Noi", 8, 7.5, 9);
    cout << "HOC SINH A";
    a.XUAT();
    cout << "\nHOC SINH B";
    b.XUAT();
    return 0;
}
