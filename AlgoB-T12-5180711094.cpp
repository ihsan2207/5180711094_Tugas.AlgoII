#include<iostream>
#include<stdlib.h>
using namespace::std;

int b[10],j,e,c,f,x,s,i,desc,d,a,u,cri,hps,edt,ketemu=0;
bool keadaan=0;

void insertdata(){
        if (x>=10){
            cout<<"\n Batas maksimal adalah 10";}
        else {
            for(i=0;i<x;i++){
                cout<<" Masukkan Data Ke-"<<i + 1<<" : ";
                cin>>b[i];}
            for(i=x-2;i>=0;i--){
                for(j=0;j<=i;j++){
                  if(b[j]>b[j+1]){
                        desc=b[j];
                        b[j]=b[j+1];
                        b[j+1]=desc;}}
                system("CLS");}
            for(i=0;i<x;i++){cout<<"\n Data ke-"<<i+1<<"="<<b[i];}}}

int searching(){
    for (e=0;e<x;e++){
            if (cri==b[e]){
                keadaan=true;
                keadaan++;
                if(keadaan==1){
                    cout<<" "<<e+1;
                    ketemu=1;}}}
    if (ketemu==0) cout<<" =============================="<<" Data tidak ditemukan";}

int hapusdata(){
    for (a=0;a<x;a++){
            if (hps==b[a]){
                for (c=a;c<x;c++){
                    b[c]=b[c+1];}
                x-=1;}}
        cout<<"\n\n Sorting data setelah dihapus :";
    for (f=0;f<x;f++){ cout<<"\n Data ke-"<<f+1<<"="<<b[f];}}

int editdata(){
    for (u=0;u<x;u++){
        if (b[u] == edt){
            cout<<" Input nilai baru : "; cin>>b[u];}}
    for(i=x-2;i>=0;i--){
        for(d=0;d<=i;d++){
            if(b[d]>b[d+1]){
                desc=b[d];
                b[d]=b[d+1];
                b[d+1]=desc;}}}}

main(){
    cout<<"\n           INSERT DATA"<<endl<<endl;
    cout<<" Input banyak data : ";cin>>x;
    insertdata();

	cout<<"\n\n            SEARCHING  DATA\n";
	cout<<"\n Data yang akan dicari : ";cin>>cri;
	cout<<"\n Nilai "<<cri<<" Terdapat pada index ";
	searching();
    cout<<"\n ==============================";

	cout<<"\n\n              HAPUS  DATA\n";
	cout<<"\n Data yang akan dihapus : ";cin>>hps;
	hapusdata();
	cout<<"\n ==============================";

	cout<<"\n\n               EDIT DATA"<<endl;
	cout<<"\n Data yang akan diedit : ";cin>>edt;
	editdata();
    cout<<"\n Data setelah diedit : ";
    for(s=0;s<x;s++){cout<<"\n Data ke-"<<s+1<<" : "<<b[s];}}
