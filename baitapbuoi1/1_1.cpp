#include <iostream>
using namespace std;

class HINHTHANG {
private:
    float dayLon, dayNho, chieuCao;
public:
    void NHAP();
    float DIENTICH();
};

void HINHTHANG::NHAP()
{
    cout << "- Day lon: "; cin >> dayLon;
    cout << "- Day nho: "; cin >> dayNho;
    cout << "- Chieu cao: "; cin >> chieuCao;
}

float HINHTHANG::DIENTICH()
{
    return (dayLon + dayNho) * chieuCao / 2;
}

int main()
{
    HINHTHANG ht;
    ht.NHAP();
    cout << "Dien tich hinh thang: " << ht.DIENTICH() << endl;
    return 0;
}
