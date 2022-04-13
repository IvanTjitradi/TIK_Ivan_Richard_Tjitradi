#include <iostream>
using namespace std;

int main(){
    /*
    jika nilai >=90 sangat memuaskan
    jika nilai >=80 memuaskan
    jika nilai >=75 cukup
    nilai <75 tidak lulus
    nilai tidak > 100 dan <0 keterangan diluar jangkauan
    
    
    */
    int nilai;
    string keterangan;
    cout<<"Masukkan Nilai = ";cin>>nilai;
    if (nilai >100 || nilai <0){
        keterangan = "Diluar jangkauan";
    }
    else if(nilai >= 90){
        keterangan = "Sangat Memuaskan";
    }
    else if (nilai >= 80){
        keterangan = "Memuaskan";
    }
    else if (nilai >= 75){
        keterangan = "Cukup";
    }
    else {
        keterangan ="Tidak Lulus";
    }
    cout<<keterangan;
    
    return 0;
}
