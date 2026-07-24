#include<bits/stdc++.h>
using namespace std;

class Date{
public:
    int d,m,y;

    void nhap(){
        cout<<"\nNgay: "; cin>>d;
        cout<<"\nThang: "; cin>>m;
        cout<<"\nNam: "; cin>>y;
    }

    void xuat(){
        cout<<d<<"/"<<m<<"/"<<y;
    }
};

class XeHoi{
public:
    char nh[30],hsx[30],kd[30],ms[20],xx[30];
    Date nsx;
    double gia;

    void nhap(){
        cout<<"\nNhan hieu: "; fflush(stdin); gets(nh);
        cout<<"\nHang san xuat: "; fflush(stdin); gets(hsx);
        cout<<"\nKieu dang: "; fflush(stdin); gets(kd);
        cout<<"\nMau son: "; fflush(stdin); gets(ms);
        cout<<"\nNgay san xuat:";
        nsx.nhap();
        cout<<"\nXuat xu: "; fflush(stdin); gets(xx);
        cout<<"\nGia ban: "; cin>>gia;
    }

    void xuat(){
        cout<<nh<<"\t"<<hsx<<"\t"<<kd<<"\t"<<ms<<"\t";
        nsx.xuat();
        cout<<"\t"<<xx<<"\t"<<gia<<endl;
    }
};
class QuanLy{
public:
    int n;
    XeHoi *ds;

    void nhap(){
        do{
            cout<<"\nNhap n: "; cin>>n;
        }while(n<=0||n>=20);

        ds=new XeHoi[n];

        for(int i=0;i<n;i++){
            cout<<"\n===== XE "<<i+1<<" =====";
            (ds+i)->nhap();
        }
    }

    void xuat(){
        cout<<"\n\n===== DANH SACH XE =====\n";
        for(int i=0;i<n;i++) (ds+i)->xuat();
    }

    void toyota(){
        cout<<"\n\n===== XE HANG TOYOTA =====\n";
        for(int i=0;i<n;i++)
            if(strcmp((ds+i)->hsx,"Toyota")==0)
                (ds+i)->xuat();
    }

    void dem(){
        int d=0;

        cout<<"\n\n===== XE SAN XUAT THANG 5/2025 =====\n";

        for(int i=0;i<n;i++)
            if((ds+i)->nsx.m==5&&(ds+i)->nsx.y==2025){
                (ds+i)->xuat();
                d++;
            }

        cout<<"\nSo luong: "<<d<<endl;
    }

    void sapxep(){
        for(int i=0;i<n-1;i++)
            for(int j=i+1;j<n;j++)
                if((ds+i)->gia>(ds+j)->gia){
                    XeHoi t=*(ds+i);
                    *(ds+i)=*(ds+j);
                    *(ds+j)=t;
                }

        cout<<"\n\n===== DANH SACH SAU SAP XEP =====\n";
        xuat();
    }

    void xuly(){
        xuat();
        toyota();
        dem();
        sapxep();
    }
};

int main(){
    QuanLy q;
    q.nhap();
    q.xuly();
    return 0;
}
