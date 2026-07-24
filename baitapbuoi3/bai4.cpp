#include<bits/stdc++.h>
using namespace std;

class HOCSINH{
public:
    char ten[30],que[30];
    int tuoi;
    float toan,ly,hoa;

    HOCSINH(){
        strcpy(ten,"");
        strcpy(que,"");
        tuoi=0;
        toan=ly=hoa=0;
    }

    HOCSINH(char ten[],int tuoi,char que[],float toan,float ly,float hoa){
        strcpy(this->ten,ten);
        this->tuoi=tuoi;
        strcpy(this->que,que);
        this->toan=toan;
        this->ly=ly;
        this->hoa=hoa;
    }

    void xuat(){
        cout<<"\nHo ten: "<<ten;
        cout<<"\nTuoi: "<<tuoi;
        cout<<"\nQue quan: "<<que;
        cout<<"\nDiem Toan: "<<toan;
        cout<<"\nDiem Ly: "<<ly;
        cout<<"\nDiem Hoa: "<<hoa<<endl;
    }
};

int main(){
    HOCSINH a;
    HOCSINH b("Nguyen Van A",20,"Ha Noi",8,7.5,9);

    cout<<"\n===== Hoc sinh a =====";
    a.xuat();

    cout<<"\n===== Hoc sinh b =====";
    b.xuat();

    return 0;
}