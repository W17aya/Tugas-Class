#include <iostream>
#include <iostream>
using namespace std;

class Hotel{
	public:
	
	string kelasHotel;
	int JumlahKamar;
	void kota (string letak);
};

int main(){
	Hotel Montana_Syariah;
	Hotel BanjarmasinIndah;

	Montana_Syariah.kelasHotel="DELUXE";
	cout<<(Montana_Syariah.kelasHotel)<<endl;
	Montana_Syariah.kota("Banjarmasin");
}

	void Hotel::kota(string letak ){
	cout << "di" <<letak;
	}
