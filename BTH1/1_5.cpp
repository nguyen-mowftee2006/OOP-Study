#include <iostream>
using namespace std;

class MANGSO {
private:
    int *a;
    int n;
public:
    void NHAP();
    void SAPXEP();
    void XUAT();
};

void MANGSO::NHAP()
{
    cout << "- So phan tu n: "; cin >> n;
    a = new int[n];
    for (int i = 0; i < n; i++) {
        cout << "- Phan tu thu " << i + 1 << ": "; cin >> a[i];
    }
}

void MANGSO::SAPXEP()
{
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - 1 - i; j++)
            if (a[j] > a[j + 1]) {
                int tam = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tam;
            }
}

void MANGSO::XUAT()
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

int main()
{
    MANGSO m;

    cout << "=== Nhap mang ===" << endl;
    m.NHAP();

    m.SAPXEP();

    cout << "=== Mang sau khi sap xep tang dan ===" << endl;
    m.XUAT();

    return 0;
}