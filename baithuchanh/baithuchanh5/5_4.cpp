#include <bits/stdc++.h>
using namespace std;

class MATRIX
{
private:
    double **a;
    int n, m;
public:
    MATRIX()
    {
        this->a = NULL; this->n = 0; this->m = 0;
    }
    MATRIX(int n, int m)
    {
        this->n = n; this->m = m; this->a = new double *[this->n];
        for (int i = 0; i < this->n; i++)
        {
            this->a[i] = new double[this->m];
            for (int j = 0; j < this->m; j++)
                this->a[i][j] = 0;
        }
    }
    MATRIX(const MATRIX &x)
    {
        n = x.n; m = x.m; a = new double *[n];
        for (int i = 0; i < n; i++)
        {
            a[i] = new double[m];
            for (int j = 0; j < m; j++)
                a[i][j] = x.a[i][j];
        }
    }
    ~MATRIX()
    {
        for (int i = 0; i < this->n; i++)
            delete[] this->a[i];
        delete[] this->a; this->a = NULL; this->n = 0; this->m = 0;
    }
    MATRIX &operator=(const MATRIX &x)
    {
        if (this != &x)
        {
            for (int i = 0; i < n; i++)
                delete[] a[i];
            delete[] a; n = x.n; m = x.m; a = new double *[n];
            for (int i = 0; i < n; i++)
            {
                a[i] = new double[m];
                for (int j = 0; j < m; j++)
                    a[i][j] = x.a[i][j];
            }
        }
        return *this;
    }
    MATRIX operator-()
    {
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                a[i][j] = -a[i][j];
        return *this;
    }
    MATRIX operator+(MATRIX x)
    {
        MATRIX kq(n, m);
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                kq.a[i][j] = a[i][j] + x.a[i][j];
        return kq;
    }
    MATRIX operator-(MATRIX x)
    {
        MATRIX kq(n, m);
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                kq.a[i][j] = a[i][j] - x.a[i][j];
        return kq;
    }
    friend istream &operator>>(istream &is, MATRIX &x);
    friend ostream &operator<<(ostream &os, MATRIX x);
    friend bool CungKichThuoc(MATRIX x, MATRIX y);
};

istream &operator>>(istream &is, MATRIX &x)
{
    for (int i = 0; i < x.n; i++)
        delete[] x.a[i];
    delete[] x.a;
    do
    {
        cout << "\nNhap so dong duong: "; is >> x.n;
    } while (x.n <= 0);
    do
    {
        cout << "\nNhap so cot duong: "; is >> x.m;
    } while (x.m <= 0);
    x.a = new double *[x.n];
    for (int i = 0; i < x.n; i++)
    {
        x.a[i] = new double[x.m];
        for (int j = 0; j < x.m; j++)
        {
            cout << "\nNhap a[" << i << "][" << j << "]: "; is >> x.a[i][j];
        }
    }
    return is;
}

ostream &operator<<(ostream &os, MATRIX x)
{
    for (int i = 0; i < x.n; i++)
    {
        os << "\n" << setw(10) << x.a[i][0];
        for (int j = 1; j < x.m; j++)
            os << setw(10) << x.a[i][j];
    }
    return os;
}

bool CungKichThuoc(MATRIX x, MATRIX y)
{
    return x.n == y.n && x.m == y.m;
}

int main()
{
    MATRIX p, q;
    cout << "NHAP MA TRAN P"; cin >> p;
    cout << "\nNHAP MA TRAN Q"; cin >> q;
    if (!CungKichThuoc(p, q))
    {
        cout << "\nHai ma tran khong cung kich thuoc.";
        return 0;
    }
    p = -p; q = -q;
    cout << "\nMA TRAN P SAU KHI DOI DAU" << p;
    cout << "\nMA TRAN Q SAU KHI DOI DAU" << q;
    cout << "\nTONG HAI MA TRAN" << p + q;
    cout << "\nHIEU HAI MA TRAN" << p - q;
    return 0;
}
