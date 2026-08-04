#include <bits/stdc++.h>
using namespace std;

class MANG
{
private:
    float *value;
    int n;
public:
    void operator++()
    {
        float tg;
        for (int i = 0; i < n - 1; i++)
            for (int j = i + 1; j < n; j++)
                if (value[i] > value[j])
                {
                    tg = value[i]; value[i] = value[j]; value[j] = tg;
                }
    }
    void operator--()
    {
        float tg;
        for (int i = 0; i < n - 1; i++)
            for (int j = i + 1; j < n; j++)
                if (value[i] < value[j])
                {
                    tg = value[i]; value[i] = value[j]; value[j] = tg;
                }
    }
    friend istream &operator>>(istream &is, MANG &x);
    friend ostream &operator<<(ostream &os, MANG x);
};

istream &operator>>(istream &is, MANG &x)
{
    do
    {
        cout << "\nNhap so phan tu: "; is >> x.n;
    } while (x.n <= 0);
    x.value = new float[x.n];
    for (int i = 0; i < x.n; i++)
    {
        cout << "\nNhap value[" << i << "]: "; is >> x.value[i];
    }
    return is;
}

ostream &operator<<(ostream &os, MANG x)
{
    for (int i = 0; i < x.n; i++)
        os << " " << x.value[i];
    return os;
}

int main()
{
    MANG a;
    cout << "NHAP MANG"; cin >> a;
    ++a;
    cout << "\nMang tang dan:" << a;
    ofstream f("MANG.txt");
    f << "Mang tang dan:" << a;
    --a;
    cout << "\nMang giam dan:" << a;
    f << "\nMang giam dan:" << a;
    f.close();
    return 0;
}
