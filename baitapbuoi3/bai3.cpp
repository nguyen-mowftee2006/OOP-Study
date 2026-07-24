#include<bits/stdc++.h>
#include<iomanip>
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

class NCC{
public:
    char ma[20],ten[50],dc[50],sdt[15];

    void nhap(){
        cout<<"\nMa NCC: ";fflush(stdin); gets(ma);
        cout<<"\nTen NCC: ";fflush(stdin); gets(ten);
        cout<<"\nDia chi: ";fflush(stdin); gets(dc);
        cout<<"\nSDT: ";fflush(stdin); gets(sdt);
    }

    void xuat(){
        cout<<"\nMa nha cung cap: "<<ma;
        cout<<"\nTen nha cung cap: "<<ten;
        cout<<"\nDia chi: "<<dc;
        cout<<"\nSDT: "<<sdt;
    }
};

class SanPham{
public:
    char ma[20],ten[30];
    int sl;
    float dg;

    void nhap(){
        cout<<"\nMa SP: "; fflush(stdin); gets(ma);
        cout<<"\nTen SP: "; fflush(stdin); gets(ten);
        cout<<"\nSo luong: "; cin>>sl;
        cout<<"\nDon gia: "; cin>>dg;
    }

    void xuat(){
        cout<<left
            <<setw(10)<<ma
            <<setw(25)<<ten
            <<setw(10)<<sl
            <<setw(15)<<dg
            <<setw(15)<<sl*dg<<endl;
    }
};
class Phieu{
public:
    char mp[20];
    Date nl;
    NCC ncc;
    int n;
    SanPham sp[20];

    void nhap(){
        cout<<"\nMa phieu: ";  fflush(stdin);gets(mp);
        cout<<"\nNgay lap:"; nl.nhap(); 
        cout<<"\nNhap thong tin nha cung cap:";
        ncc.nhap();

        do{
            cout<<"\nNhap so SP: "; cin>>n;
        }while(n<=0||n>=20);

        for(int i=0;i<n;i++){
            cout<<"\nNhap SP "<<i+1;
            sp[i].nhap();
        }
    }

    void xuat(){
        float tong=0;

        cout<<"\n\n\t\tPHIEU NHAP VAN PHONG PHAM";
        cout<<"\nMa phieu: "<<mp;
        cout<<"\nNgay lap: "; nl.xuat();
        ncc.xuat();

        cout<<"\n\n";
        cout<<left
            <<setw(10)<<"Ma SP"
            <<setw(25)<<"Ten san pham"
            <<setw(10)<<"SL"
            <<setw(15)<<"Don gia"
            <<setw(15)<<"Thanh tien"<<endl;

        for(int i=0;i<n;i++){
            sp[i].xuat();
            tong+=sp[i].sl*sp[i].dg;
        }

        cout<<"\nTong: "<<tong<<endl;
    }

    void dem(){
        int d=0;
        for(int i=0;i<n;i++)
            if(sp[i].sl<80) d++;

        cout<<"\nSo san pham co SL < 80: "<<d<<endl;
    }

    void sapxep(){
        for(int i=0;i<n-1;i++)
            for(int j=i+1;j<n;j++)
                if(sp[i].dg<sp[j].dg){
                    SanPham t=sp[i];
                    sp[i]=sp[j];
                    sp[j]=t;
                }

        cout<<"\n\nSau khi sap xep:";
        xuat();
    }

    void sua(){
        strcpy(ncc.ten,"Cong ty TNHH Thanh Do");
        cout<<"\n\nSau khi sua ten nha cung cap:";
        xuat();
    }

    void xuly(){
        xuat();
        dem();
        sapxep();
        sua();
    }
};

int main(){
    Phieu p;
    p.nhap();
    p.xuly();
    return 0;
}