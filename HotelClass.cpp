#include <iostream>
#include <string>
using namespace std;

class HOTEL{
	public:
	void lokasi(string letak);
	string bintang;

};

int main(){
	
	HOTEL RODITA,HBI,GRANDDAFAM;

	RODITA.bintang = " 3 ";
	HBI.bintang    = " 1 ";
	GRANDDAFAM.bintang = " 4 ";

	cout << (RODITA.bintang);
    RODITA.lokasi("Banjarbaru");


}
void HOTEL::lokasi(string letak){
	cout<<"di "<<letak<<"!!"<<endl;
}
