#include <iostream>
#include <string>
using namespace std;

struct Iskelet {
    string malzeme;
    string birlestirme;
    string boyut;
    int miktar;
    string tarz;
};

struct Kumas {
    double dm2agirlik;
    string dokumatipi;
    string ipliktipi;
    string kaplama;
    int miktar;
    string renk;
};

struct Mobilya {
    Iskelet iskelet;
    Kumas kumas;
    int miktar;
    double fiyat;
};

int main() {
	int toplam =0;
    Mobilya mobilyalar[10] = {
        { {"Tahta", "Dovetail", "4x1.5", 10, "Koltuk"}, {30.0, "Duz Dokuma", "Pamuk", "Dogal / Ahsap Kaplama", 10, "Kirmizi"}, 1, 100 },
        { {"Tahta", "Dovetail", "4x1.5", 10, "Sandalye"}, {10.0, "Duz Dokuma", "Elyaf", "Dogal / Ahsap Kaplama", 10, "Mavi"}, 1, 150 },
        { {"Tahta", "Dovetail", "4x1.5", 10, "Koltuk"}, {30.0, "Duz Dokuma", "Pamuk", "Dogal / Ahsap Kaplama", 10, "Yesil"}, 1, 100 },
        { {"Metal", "Kaynak", "3x2", 8, "Masa"}, {50.0, "Duz Dokuma", "Polyester", "Dogal / Metalik Kaplama", 5, "Gri"}, 1, 200 },
        { {"Tahta", "Dovetail", "3.5x1.8", 15, "Sehpa"}, {15.0, "Sik Dokuma", "Pamuk", "Dogal / Ahsap Kaplama", 3, "Kahverengi"}, 1, 120 },
        { {"Plastik", "Civili", "2x1", 20, "Tabure"}, {5.0, "Duz Dokuma", "Sentetik", "Dogal / Plastik Kaplama", 1, "Sari"}, 1, 50 },
        { {"Tahta", "Dovetail", "5x2", 12, "Dolap"}, {40.0, "Duz Dokuma", "Keten", "Dogal / Ahsap Kaplama", 6, "Beyaz"}, 1, 300 },
        { {"Cam", "Yapistirma", "1x1", 5, "Vitrin"}, {60.0, "Ince Dokuma", "Naylon", "Dogal / Cam Kaplama", 2, "Siyah"}, 1, 250 },
        { {"Metal", "Kaynak", "4x2.5", 7, "Sandalye"}, {20.0, "Duz Dokuma", "Polyester", "Dogal / Metalik Kaplama", 8, "Kirmizi"}, 1, 180 },
        { {"Tahta", "Dovetail", "6x2", 14, "Kanepe"}, {35.0, "Kalýn Dokuma", "Pamuk", "Dogal / Ahsap Kaplama", 9, "Mor"}, 1, 400 }
    };

    for (int i = 0; i < 10; i++) {
        cout << "Mobilya " << i + 1 << endl;
        cout << "  Iskelet:\n";
        cout << "    Malzeme: " << mobilyalar[i].iskelet.malzeme << endl;
        cout << "    Birlestirme: " << mobilyalar[i].iskelet.birlestirme << endl;
        cout << "    Boyut: " << mobilyalar[i].iskelet.boyut << endl;
        cout << "    Miktar: " << mobilyalar[i].iskelet.miktar << endl;
        cout << "    Tarz: " << mobilyalar[i].iskelet.tarz << endl;
        cout << "  Kumas:\n";
        cout << "    DM2 Agirlik: " << mobilyalar[i].kumas.dm2agirlik << endl;
        cout << "    Dokuma Tipi: " << mobilyalar[i].kumas.dokumatipi << endl;
        cout << "    Iplik Tipi: " << mobilyalar[i].kumas.ipliktipi << endl;
        cout << "    Kaplama: " << mobilyalar[i].kumas.kaplama << endl;;
        cout << "    Miktar: " << mobilyalar[i].kumas.miktar << endl;
        cout << "    Renk: " << mobilyalar[i].kumas.renk << endl;
        cout << "  Genel Miktar: " << mobilyalar[i].miktar << endl;
        cout << "  Fiyat: " << mobilyalar[i].fiyat << endl;
        toplam += mobilyalar[i].fiyat;
    }
    	cout << "Toplam Genel Fiyat : " << toplam << endl;

    return 0;
}

