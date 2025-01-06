#include <iostream>
#include <string>

using namespace std;

struct SiparisBilgiler {
    string Gad_soyad;
    string Gtelno;
    string Gadres;
    string Aad_soyad;
    string Atelno;
    string Aadres;	
};

struct SiparisDetay {
    int gonderino;
    float agirlik;
    float hacim;
    bool garanti;
    string Kadsoyad;
    string Ktelno;
};

struct KodSepetim {
    SiparisDetay siparis;
    SiparisBilgiler bilgiler;
    float ucret;
};

void yazdirSiparis(const KodSepetim& siparis) {
    cout << "----------------------------" << endl;
    cout << "Alici Bilgileri:" << endl;
    cout << "Ad Soyad: " << siparis.bilgiler.Aad_soyad << endl;
    cout << "Telefon: " << siparis.bilgiler.Atelno << endl;
    cout << "Adres: " << siparis.bilgiler.Aadres << endl;
    cout << "----------------------------" << endl;
    cout << "Gonderici Bilgileri:" << endl;
    cout << "Ad Soyad: " << siparis.bilgiler.Gad_soyad << endl;
    cout << "Telefon: " << siparis.bilgiler.Gtelno << endl;
    cout << "Adres: " << siparis.bilgiler.Gadres << endl;
    cout << "----------------------------" << endl;
    cout << "Siparis Detaylari:" << endl;
    cout << "Gonderi No: " << siparis.siparis.gonderino << endl;
    cout << "Agirlik: " << siparis.siparis.agirlik << " kg" << endl;
    cout << "Hacim: " << siparis.siparis.hacim << " m^3" << endl;
    cout << "Garanti: " << (siparis.siparis.garanti ? "Evet" : "Hayir") << endl;
    cout << "Kuryeci Ad Soyad: " << siparis.siparis.Kadsoyad << endl;
    cout << "Kuryeci Telefon: " << siparis.siparis.Ktelno << endl;
    cout << "----------------------------" << endl;
}

int main() {
    KodSepetim siparis1;
    siparis1.bilgiler.Aadres = "Bahcelievler/Isparta";
    siparis1.bilgiler.Aad_soyad = "Taha Cevher";
    siparis1.bilgiler.Atelno = "056565565";
    siparis1.bilgiler.Gadres = "Bursa/Osmangazi";
    siparis1.bilgiler.Gad_soyad = "Kaan Avci";
    siparis1.bilgiler.Gtelno = "054587589";
    siparis1.siparis.agirlik = 15.30;
    siparis1.siparis.garanti = true;  
    siparis1.siparis.gonderino = 51;
    siparis1.siparis.hacim = 10;
    siparis1.siparis.Kadsoyad = "Murat Kansiz";
    siparis1.siparis.Ktelno = "05364786";

    KodSepetim siparis2;
    siparis2.bilgiler.Aadres = "Fatih/Isparta";
    siparis2.bilgiler.Aad_soyad = "Suleyman Kor";
    siparis2.bilgiler.Atelno = "056534365";
    siparis2.bilgiler.Gadres = "Eskisehir/OdunPazari";
    siparis2.bilgiler.Gad_soyad = "Adil Cihan";
    siparis2.bilgiler.Gtelno = "05344587589";
    siparis2.siparis.agirlik = 12.15;
    siparis2.siparis.garanti = false;
    siparis2.siparis.gonderino = 52;
    siparis2.siparis.hacim = 12;
    siparis2.siparis.Kadsoyad = "Can Kansiz";
    siparis2.siparis.Ktelno = "05334364786";
    KodSepetim siparis3;
    siparis3.bilgiler.Aadres = "TeknoKent/Isparta";
    siparis3.bilgiler.Aad_soyad = "Mehmet Avcý";
    siparis3.bilgiler.Atelno = "052534365";
    siparis3.bilgiler.Gadres = "Istanbul/Fatih";
    siparis3.bilgiler.Gad_soyad = "Kadir Kurt";
    siparis3.bilgiler.Gtelno = "0515687589";
    siparis3.siparis.agirlik = 14.15;
    siparis3.siparis.garanti = true;
    siparis3.siparis.gonderino = 053;
    siparis3.siparis.hacim = 16;
    siparis3.siparis.Kadsoyad = "Mutlu Mutsuz";
    siparis3.siparis.Ktelno = "0566964786";
   
    KodSepetim siparis4;
    siparis4.bilgiler.Aadres = "Carsi/Isparta";
    siparis4.bilgiler.Aad_soyad = "Ahmet Dalli";
    siparis4.bilgiler.Atelno = "05254334365";
    siparis4.bilgiler.Gadres = "Ankara/Merkez";
    siparis4.bilgiler.Gad_soyad = "Secil Ot";
    siparis4.bilgiler.Gtelno = "05345687589";
    siparis4.siparis.agirlik = 5;
    siparis4.siparis.garanti = false;
    siparis4.siparis.gonderino = 054;
    siparis4.siparis.hacim = 5;
    siparis4.siparis.Kadsoyad = "Kamil Kodcu";
    siparis4.siparis.Ktelno = "0565664786";
    
	KodSepetim siparis5;
    siparis5.bilgiler.Aadres = "Uskudar/Istanbul";
    siparis5.bilgiler.Aad_soyad = "Dogukan Akar";
    siparis5.bilgiler.Atelno = "0532698567";
    siparis5.bilgiler.Gadres = "Ankara/Merkez";
    siparis5.bilgiler.Gad_soyad = "Gokdeniz Fici";
    siparis5.bilgiler.Gtelno = "05369687589";
    siparis5.siparis.agirlik = 0.5;
    siparis5.siparis.garanti = false;
    siparis5.siparis.gonderino = 055;
    siparis5.siparis.hacim = 4;
    siparis5.siparis.Kadsoyad = "Muhammed Sonmez";
    siparis5.siparis.Ktelno = "05365712653";

  

    cout << "Guncel Siparisleriniz Listeleniyor ..." << endl;

  
    yazdirSiparis(siparis1);
    yazdirSiparis(siparis2);
    yazdirSiparis(siparis3);
    yazdirSiparis(siparis4);
    yazdirSiparis(siparis5);
  

    return 0;
}

