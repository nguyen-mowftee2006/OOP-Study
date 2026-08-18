#include <bits/stdc++.h>
using namespace std;

class MANG
{
private:
    float *a;
    int n;
public:
    // Khoi tao khong doi.
    MANG()
    {
        this->a = NULL; this->n = 0;
    }

    // Khoi tao co doi, cac phan tu ban dau bang 0.
    MANG(int n)
    {
        this->n = n; this->a = new float[this->n];
        for (int i = 0; i < this->n; i++)
            this->a[i] = 0;
    }

    // Ham huy giai phong danh sach dong.
    ~MANG()
    {
        delete[] this->a; this->a = NULL; this->n = 0;
    }

    // Ham toan tu nhap va xuat.
    friend istream &operator>>(istream &is, MANG &x);
    friend ostream &operator<<(ostream &os, const MANG &x);

    /*
        CAC YEU CAU CO THE BO SUNG TRONG DE THI:

        1. KHOI TAO SAO CHEP:
           Sao chep du lieu sang mot vung nho doc lap.

        2. TOAN TU GAN:
           Nap chong = de gan hai doi tuong co du lieu dong.

        3. TOAN TU HAI NGOI:
           Nap chong +, -, *, / de tinh toan giua hai doi tuong.

        4. TOAN TU MOT NGOI:
           Nap chong -, +, !, ~ de doi dau, kiem tra hoac bien
           doi du lieu cua mot doi tuong.

        5. TOAN TU TANG GIAM:
           Nap chong ++, -- dang tien to hoac hau to de tang,
           giam, sap xep hay bien doi du lieu.

        6. TOAN TU SO SANH:
           Nap chong ==, !=, >, <, >=, <= de so sanh hai doi
           tuong theo dieu kien cua de bai.

        7. TOAN TU CHUYEN KIEU:
           Chuyen doi doi tuong thanh int, float hoac double de
           tra ve tong, trung binh hay mot gia tri can tinh.

        8. HAM BAN:
           Kiem tra dieu kien, tim kiem, thong ke hoac xu ly cac
           thuoc tinh private cua lop.

        9. SAP XEP:
           Sap xep du lieu tang dan hoac giam dan theo yeu cau.

        10. TIM KIEM, DEM, TINH TONG:
            Tim phan tu lon nhat, nho nhat; dem hoac tinh tong
            cac phan tu thoa man dieu kien.

        11. TEP:
            Ghi doi tuong hoac ket qua xu ly vao tep bang
            ofstream; doc du lieu tu tep bang ifstream.

        12. KIEM TRA DIEU KIEN PHEP TOAN:
            Kiem tra hai doi tuong co cung kich thuoc hay co
            thoa man dieu kien truoc khi tinh toan.
    */
};

// Ham toan tu nhap.
istream &operator>>(istream &is, MANG &x)
{
    delete[] x.a;
    do
    {
        cout << "\nNhap so phan tu duong: "; is >> x.n;
    } while (x.n <= 0);
    x.a = new float[x.n];
    for (int i = 0; i < x.n; i++)
    {
        cout << "\nNhap a[" << i << "]: "; is >> x.a[i];
    }
    return is;
}

// Ham toan tu xuat.
ostream &operator<<(ostream &os, const MANG &x)
{
    for (int i = 0; i < x.n; i++)
        os << " " << x.a[i];
    return os;
}

int main()
{
    MANG a;
    cout << "\nNHAP MANG A"; cin >> a;
    cout << "\nMANG A:" << a;
    return 0;
}

