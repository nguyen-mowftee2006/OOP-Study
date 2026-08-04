#include <bits/stdc++.h>
using namespace std;

class HINHTHANG
{
private:
    float daylon, daynho, chieucao;
public:
    void NHAP()
    {
        cout << "\nNhap day lon: "; cin >> daylon;
        cout << "\nNhap day nho: "; cin >> daynho;
        cout << "\nNhap chieu cao: "; cin >> chieucao;
    }
    float DIENTICH() { return (daylon + daynho) * chieucao / 2; }
};

int main()
{
    HINHTHANG a;
    a.NHAP();
    cout << "\nDien tich hinh thang: " << a.DIENTICH();
    return 0;
}
