#include <bits/stdc++.h>
using namespace std;

class MANGTHUC
{
private:
    float a[100];
    int n;
public:
    void NHAP()
    {
        do
        {
            cout << "\nNhap so phan tu: "; cin >> n;
        } while (n <= 0 || n > 100);
        for (int i = 0; i < n; i++)
        {
            cout << "\nNhap a[" << i << "]: "; cin >> a[i];
        }
    }
    float MAX()
    {
        float max = a[0];
        for (int i = 1; i < n; i++)
            if (a[i] > max)
                max = a[i];
        return max;
    }
    float MIN()
    {
        float min = a[0];
        for (int i = 1; i < n; i++)
            if (a[i] < min)
                min = a[i];
        return min;
    }
    void XUAT()
    {
        for (int i = 0; i < n; i++)
            cout << " " << a[i];
    }
};

int main()
{
    MANGTHUC a;
    cout << "NHAP MANG SO THUC";
    a.NHAP();
    cout << "\nMang vua nhap:";
    a.XUAT();
    cout << "\nPhan tu lon nhat: " << a.MAX();
    cout << "\nPhan tu nho nhat: " << a.MIN();
    return 0;
}
