#include <bits/stdc++.h>
using namespace std;

class ARRAY
{
private:
    int *value, n;
public:
    ARRAY()
    {
        this->value = NULL; this->n = 0;
    }
    ARRAY(int n)
    {
        this->n = n; this->value = new int[this->n];
        for (int i = 0; i < this->n; i++)
            this->value[i] = 0;
    }
    ~ARRAY()
    {
        delete[] this->value; this->value = NULL; this->n = 0;
    }
    void NHAP()
    {
        delete[] value;
        do
        {
            cout << "\nNhap so phan tu: "; cin >> n;
        } while (n <= 0);
        value = new int[n];
        for (int i = 0; i < n; i++)
        {
            cout << "\nNhap value[" << i << "]: "; cin >> value[i];
        }
    }
    void XUAT()
    {
        for (int i = 0; i < n; i++)
            cout << " " << value[i];
    }
};

int main()
{
    ARRAY a(5);
    cout << "MANG A SAU KHI KHOI TAO:";
    a.XUAT();
    cout << "\nNHAP MANG A";
    a.NHAP();
    cout << "\nMANG A SAU KHI NHAP:";
    a.XUAT();
    return 0;
}
