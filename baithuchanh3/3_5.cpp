#include <bits/stdc++.h>
using namespace std;

class ARRAY
{
private:
    int *value;
    int n;

public:
    // Ham tao khong doi
    ARRAY()
    {
        n = 0;
        value = NULL;
    }

    // Ham tao co doi
    ARRAY(int x)
    {
        n = x;
        value = new int[n];

        for (int i = 0; i < n; i++)
            value[i] = 0;
    }

    // Ham huy
    ~ARRAY()
    {
        delete[] value;
        value = NULL;
        n = 0;
    }

    void NHAP()
    {
        cout << "\n - Nhap so phan tu: ";
        cin >> n;

        if (value != NULL)
            delete[] value;

        value = new int[n];

        for (int i = 0; i < n; i++)
        {
            cout << " - value[" << i << "] = ";
            cin >> value[i];
        }
    }

    void XUAT()
    {
        for (int i = 0; i < n; i++)
            cout << value[i] << " ";
    }
};

int main()
{
    ARRAY a(5);

    cout << "\nMang a sau khi khoi tao: ";
    a.XUAT();

    cout << "\n\nNHAP MANG A";
    a.NHAP();

    cout << "\nMang a sau khi nhap: ";
    a.XUAT();

    return 0;
}