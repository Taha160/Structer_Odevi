#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

struct Otomobil{
	string marka;
	string model;
	int yil;
	string yakit;
	float km;
};


int main(){

	Otomobil SUV;
	SUV.marka = "Mercedes";
	SUV.model = "G63";
	SUV.yil = 2025;
	SUV.km = 0;
	SUV.yakit = "B";
	
	Otomobil Ticari;
	Ticari.marka = "Fiat";
	Ticari.model = "Doblo";
	Ticari.yil = 2012;
	Ticari.km = 102.500;
	Ticari.yakit = "G";
	
	
	Otomobil Binek;
	Binek.marka = "BMW";
	Binek.model = "F30";
	Binek.yil = 2015;
	Binek.km = 170.904;
	Binek.yakit = "D";
	
	
	cout << "SUV Aracin Ozellikleri : " << endl;
	cout << "Marka / Model : " << SUV.marka << "  /  " << SUV.model << endl;
	cout << "Yil : " << SUV.yil << endl;
	cout << "KM : " << SUV.km << endl;
	cout << "Yakit :" << SUV.yakit << endl; 
	cout << "-----------------------------------------------------------"<<endl;
	cout << "Ticari Aracin Ozellikleri : " << endl;
	cout << "Marka / Model : " << Ticari.marka << "  /  " << Ticari.model << endl;
	cout << "Yil : " << Ticari.yil << endl;
	cout << "KM : " << Ticari.km << endl;
	cout << "Yakit :" << Ticari.yakit << endl; 	
	cout << "-----------------------------------------------------------"<<endl;
	cout << "Binek Aracin Ozellikleri : " << endl;
	cout << "Marka / Model : " << Binek.marka << "  /  " << Binek.model << endl;
	cout << "Yil : " << Binek.yil << endl;
	cout << "KM : " << Binek.km << endl;
	cout << "Yakit :" << Binek.yakit << endl; 	
	
	
	return 0;
}
