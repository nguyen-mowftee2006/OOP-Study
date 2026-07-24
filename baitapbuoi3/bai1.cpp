#include<bits/stdc++.h>
using namespace std;

class Date{
public:
    int d,m,y;

    void nhap(){
        cout<<"Ngay: "; cin>>d;
        cout<<"Thang: "; cin>>m;
        cout<<"Nam: "; cin>>y;
    }
    void xuat(){
        cout<<d<<"/"<<m<<"/"<<y;
    }
};

class DiaChi{
public:
    char sdt[15],p[30],q[30],tp[30];

    void nhap(){
        cout<<"SDT: "; fflush(stdin); gets(sdt);
        cout<<"Phuong: "; fflush(stdin); gets(p);
        cout<<"Quan: "; fflush(stdin); gets(q);
        cout<<"Thanh pho: "; fflush(stdin); gets(tp);
    }

    void xuat(){
        cout<<p<<", "<<q<<", "<<tp;
    }
};

class DoanhNghiep{
public:
    int ma;
    char ten[50];
    Date ntl;
    DiaChi dc;
    char gd[30];
    long dt;

    void nhap(){
        cout<<"Ma DN: "; cin>>ma;
        cout<<"Ten DN: "; fflush(stdin); gets(ten);
        cout<<"Ngay thanh lap:\n"; ntl.nhap();
        cout<<"Dia chi:\n"; dc.nhap();
        cout<<"Giam doc: ";  fflush(stdin); gets(gd);
        cout<<"Doanh thu: "; cin>>dt;
    }
    void xuat(){
        cout<<ma<<"\t"<<ten<<"\t";
        ntl.xuat();
        cout<<"\t";
        dc.xuat();
        cout<<"\t"<<gd<<"\t"<<dt<<endl;
    }
};
class QuanLy{
public:
    int n;
    DoanhNghiep ds[20];

    void nhap(){
        do{
            cout<<"Nhap n: ";
            cin>>n;
        }while(n<=0||n>=20);

        for(int i=0;i<n;i++){
            cout<<"\nNhap DN "<<i+1<<":\n";
            ds[i].nhap();
        }
    }

    void xuat(){
        cout<<"\n===== DANH SACH DOANH NGHIEP =====\n";
        for(int i=0;i<n;i++)
            ds[i].xuat();
    }

    void haNoi(){
        cout<<"\n===== DOANH NGHIEP O HA NOI =====\n";
        for(int i=0;i<n;i++)
            if(strcmp(ds[i].dc.tp,"Ha Noi")==0)
                ds[i].xuat();
    }

    void tong2015(){
        long s=0;
        for(int i=0;i<n;i++)
            if(ds[i].ntl.y==2015)
                s+=ds[i].dt;

        cout<<"\nTong doanh thu nam 2015: "<<s<<endl;
    }

    void sua(){
        int ma;

        cout<<"\nNhap ma DN can sua: ";
        cin>>ma;

        for(int i=0;i<n;i++)
            if(ds[i].ma==ma){
                cout<<"\nNhap lai thong tin:\n";
                ds[i].nhap();
                return;
            }

        cout<<"Khong tim thay!\n";
    }

    void xuly(){
        xuat();
        haNoi();
        tong2015();
        sua();

        cout<<"\n===== DANH SACH SAU KHI SUA =====\n";
        xuat();
    }
};

int main(){
    QuanLy q;
    q.nhap();
    q.xuly();
    return 0;
}