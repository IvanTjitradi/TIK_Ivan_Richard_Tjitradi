#include <iostream>
using namespace std;

int main (){
    /*
    Buatlah sebuah program sederhana untuk menhitung nilai akhir;
    dengan ketentuan
    nilai akhir = 30% nilai tugas + 30% nilai uts + 40% nilai uas
    jika salah satu nilai lebih dari 100 program,
    program akan langsung berhenti
    dengan memberikan statamen tidak boleh lebih dari 100
    */
    int tugas;
    int uts;
    int uas;
    float nilaiakhir;
    
    cout<<"Masukkan Nilai Tugas = ";cin>>tugas;
    if (tugas >100 ){
        cout<<"tidak boleh lebih dari 100"<<endl;
        cout<<"Program berhenti";
        return 0;
    }

    cout<<"Masukkan Nilai uts = ";cin>>uts;
    if (uts >100 ){
        cout<<"tidak boleh lebih dari 100"<<endl;
        cout<<"Program berhenti";
        return 0;
    }
       
    cout<<"Masukkan Nilai uas = ";cin>>uas;
    if (uas >100 ){
        cout<<"tidak boleh lebih dari 100"<<endl;
        cout<<"Program berhenti";
        return 0;
    }
    

    nilaiakhir = 0.3*tugas + 0.3*uts + 0.4*uas;
    cout<<nilaiakhir;
    
    
    return 0;
}
