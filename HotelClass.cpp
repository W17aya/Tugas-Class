#include <iostream>
#include <string>
using namespace std;

class HOTEL{
	public:
	void lokasi(string letak);
	string bintang,nama;

};

int main(){
	
	HOTEL RODITA,HBI,GRANDDAFAM;
	
	RODITA.nama    ="Hotel Rodita ";
	RODITA.bintang = " bintang 3 ";
	HBI.nama       = "Hotel HBI ";
	HBI.bintang    = " bintang 1 ";
	GRANDDAFAM.nama= "HOTEL GRANDDAFAM";
	GRANDDAFAM.bintang = " bintang 4 ";


	cout << (RODITA.nama);
	cout << (RODITA.bintang);
    RODITA.lokasi("Banjarbaru");
    
    cout<< (HBI.nama);
    cout << (HBI.bintang);
    HBI.lokasi("Banjarmasin");

	cout<< (GRANDDAFAM.nama);
	cout<< (GRANDDAFAM.bintang);
	GRANDDAFAM.lokasi("Martapura");
}
void HOTEL::lokasi(string letak){
	cout<<"di "<<letak<<"!!"<<endl;
}
