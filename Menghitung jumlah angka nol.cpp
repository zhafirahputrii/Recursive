//ZhafirahNurShadrinaPutri
//G1A021028

#include<iostream>
using namespace std;
int hitungnol(int angka)
{
static int hitung=0;
    if(angka>0)
    {

        if(angka%10==0)
        hitung++;

        hitungnol(angka/10);
    }
    return hitung;
}
int main()
{
    int n;
    cout<<"Masukkan angka yang ingin dicari:";
    cin>>n;
    cout<<"Banyak nol dalam angka tersebut adalah : "<<hitungnol(n);
}