#include <iostream>
using namespace std;

int main(){
	int x;
	cout<<"Inputkan Nilai x : ";
	cin>>x;
	switch(x){
		case 10000 :
			cout<<"sepuluh ribu rupiah"<<endl;
		break;
		case 20000 :
			cout<<"dua puluh ribu rupiah"<<endl;
		break;
		case 30000 :
			cout<<"tiga puluh ribu rupiah"<<endl;
		break;
		case 40000 :
			cout<<"empat puluh ribu rupiah"<<endl;
		break;
		case 50000 :
			cout<<"lima puluh ribu rupiah"<<endl;
		break;
		default :
			cout<<"Tidak Terdaftar di program"<<endl;
	}
	return 0;
}

//10000 : Tampilkan output sepuluh ribu rupiah
//20000 : Tampikan output dua puluh ribu rupiah
//30000 : Tampilkan output tiga puluh ribu rupiah
//40000 : Tampilkan output empat puluh ribu rupiah
//50000 : Tampilkan output lima puluh ribu rupiah
//selain diatas : Tidak Terdaftar di program
