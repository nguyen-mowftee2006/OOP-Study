#include <iostream>
using namespace std;

class MANGTHUC {
private:
    float *a;
    int n;
public:
    void NHAP();
    float TIMMAX();
    float TIMMIN();
    void XUAT();
};

void MANGTHUC::NHAP()
{
    cout << "- So phan tu n: "; cin >> n;
    a = new float[n];
    for (int i = 0; i < n; i++) {
        cout << "- Phan tu thu " << i + 1 << ": "; cin >> a[i];
    }
}

float MANGTHUC::TIMMAX()
{
    float max = a[0];
    for (int i = 1; i < n; i++)
        if (a[i] > max) max = a[i];
    return max;
}

float MANGTHUC::TIMMIN()
{
    float min = a[0];
    for (int i = 1; i < n; i++)
        if (a[i] < min) min = a[i];
    return min;
}

void MANGTHUC::XUAT()
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

int main()
{
    MANGTHUC m;

    cout << "=== Nhap mang ===" << endl;
    m.NHAP();

    cout << "=== Mang vua nhap ===" << endl;
    m.XUAT();

    cout << "Phan tu lon nhat: " << m.TIMMAX() << endl;
    cout << "Phan tu nho nhat: " << m.TIMMIN() << endl;

    return 0;
}