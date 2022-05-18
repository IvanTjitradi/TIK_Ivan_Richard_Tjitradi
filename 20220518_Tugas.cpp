#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int u,v;
	float nilai;
	string c[100] = {"","mm","cm","dm","m","dam","hm","km"};
	cout<<"Pilih Satuan awal"<<endl;
	cout<<"1. mm"<<endl;
	cout<<"2. cm"<<endl;
	cout<<"3. dm"<<endl;
	cout<<"4. m"<<endl;
	cout<<"5. dam"<<endl;
	cout<<"6. hm"<<endl;
	cout<<"7. km"<<endl;
	cout<<"Pilih satuan: ";
	cin>>u;
	cout<<"Masukan nilai: ";cin>>nilai;
	cout<<"Pilih Konversi"<<endl;
	cout<<"1. mm"<<endl;
	cout<<"2. cm"<<endl;
	cout<<"3. dm"<<endl;
	cout<<"4. m"<<endl;
	cout<<"5. dam"<<endl;
	cout<<"6. hm"<<endl;
	cout<<"7. km"<<endl;
	cout<<"Pilih konversi: ";
	cin>>v;
	if(u<v){
		int temp = v-u;
		cout<<"Hasil: "<<nilai/pow(10,temp)<<" "<<c[v];
	}else if(u>v){
		int temp = u-v;
		cout<<"Hasil: "<<nilai*pow(10,temp)<<" "<<c[v];
	}else if(u==v){
		cout<<"Hasil: "<<nilai<<" "<<c[u];
	}
}
