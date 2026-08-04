#include <bits/stdc++.h>
using namespace std;

template <class T>
class MATRIX;

template <class T>
istream &operator>>(istream &is, MATRIX<T> &x);

template <class T>
ostream &operator<<(ostream &os, MATRIX<T> x);

template <class T>
class MATRIX
{
private:
    T **a;
    int n, m;
public:
    MATRIX()
    {
        this->a = NULL; this->n = 0; this->m = 0;
    }
    MATRIX(int n, int m)
    {
        this->n = n; this->m = m; this->a = new T *[this->n];
        for (int i = 0; i < this->n; i++)
            this->a[i] = new T[this->m];
    }
    MATRIX(const MATRIX<T> &x)
    {
        this->n = x.n; this->m = x.m; this->a = new T *[this->n];
        for (int i = 0; i < this->n; i++)
        {
            this->a[i] = new T[this->m];
            for (int j = 0; j < this->m; j++)
                this->a[i][j] = x.a[i][j];
        }
    }
    ~MATRIX()
    {
        for (int i = 0; i < this->n; i++)
            delete[] this->a[i];
        delete[] this->a; this->a = NULL; this->n = 0; this->m = 0;
    }
    MATRIX<T> operator~()
    {
        MATRIX<T> kq(m, n);
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                kq.a[j][i] = a[i][j];
        return kq;
    }
    friend istream &operator>> <T>(istream &is, MATRIX<T> &x);
    friend ostream &operator<< <T>(ostream &os, MATRIX<T> x);
};

template <class T>
istream &operator>>(istream &is, MATRIX<T> &x)
{
    do
    {
        cout << "\nNhap so dong: "; is >> x.n;
    } while (x.n <= 0);
    do
    {
        cout << "\nNhap so cot: "; is >> x.m;
    } while (x.m <= 0);
    x.a = new T *[x.n];
    for (int i = 0; i < x.n; i++)
    {
        x.a[i] = new T[x.m];
        for (int j = 0; j < x.m; j++)
        {
            cout << "\nNhap a[" << i << "][" << j << "]: "; is >> x.a[i][j];
        }
    }
    return is;
}

template <class T>
ostream &operator<<(ostream &os, MATRIX<T> x)
{
    for (int i = 0; i < x.n; i++)
    {
        os << "\n" << setw(10) << x.a[i][0];
        for (int j = 1; j < x.m; j++)
            os << setw(10) << x.a[i][j];
    }
    return os;
}

int main()
{
    MATRIX<double> a;
    MATRIX<long> b;
    cout << "NHAP MA TRAN KIEU DOUBLE"; cin >> a;
    cout << "\nNHAP MA TRAN KIEU LONG"; cin >> b;
    MATRIX<double> c = ~a;
    MATRIX<long> d = ~b;
    cout << "\nMA TRAN DOUBLE CHUYEN VI" << c;
    cout << "\nMA TRAN LONG CHUYEN VI" << d;
    return 0;
}
