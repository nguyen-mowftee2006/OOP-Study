#include <iostream>
using namespace std;

class HINHTHANG {
private:
    float dayLon, dayNho, chieuCao;
public:
    void NHAP();
    void XUAT();
};

void HINHTHANG::NHAP()
{
    cout << "- Day lon: "; cin >> dayLon;
    cout << "- Day nho: "; cin >> dayNho;
    cout << "- Chieu cao: "; cin >> chieuCao;
}

void HINHTHANG::XUAT()
{
   cout << "Dien tich hinh thang: " << (dayLon + dayNho) * chieuCao / 2;
}

int main()
{
    HINHTHANG ht;
    ht.NHAP();
    ht.XUAT();
    return 0;
}
