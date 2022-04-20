#include <iostream>
using namespace std;
class BiayaSKS{
      public :
        void input();
        void masuk(int n);
        void proses();
        void hitung(int n);
        void output();
        void keluar(int n);
      private:
        string nama, matkul[30];
        int jumlah, total = 0, bayar, nim, sks[30];
};

void BiayaSKS::input(){
  cout << "============= STUDI KASUS BIAYA SKS MAHASISWA ============" << endl;
  cout << "====================TIM DENGAN ANGGOTA====================" << endl;
  cout << "=============== ADITYA ORYZA MAHENDRA(401) ===============" << endl;
  cout << "=============== SHANTIKA ADILA PUTRI(386)  ===============\n\n" << endl;
  cout << "Masukkan Nama Mahasiswa\t: "; 
  cin >> nama;
  cout << "Masukkan NIM Mahasiswa\t: "; 
  cin >> nim;
  cout << "Masukkan jumlah matkul yang diambil : "; 
  cin >> jumlah;
  masuk(jumlah);
  cout << "========================================" << endl;
}

void BiayaSKS::masuk(int n){
  if (n != 0){
		cout << "\nMasukkan nama matkul\t: "; 
    cin >> matkul[n];
		cout << "Masukkan sks matkul\t: "; 
    cin >> sks[n];
		masuk(n - 1);
  }
}

void BiayaSKS::proses(){
  hitung(jumlah);
  bayar = total * ((120000-(0.1*120000))-(120000*0.05));
};

void BiayaSKS::hitung(int n){
  if (n != 0){
		total += sks[n];
		hitung (n - 1);
  }
}

void BiayaSKS::output(){
  cout << "Nama Mahasiswa\t: " << nama << endl;
  cout << "NIM Mahasiswa\t: " << nim << endl;
  cout << "\n\tDAFTAR MATKUL YANG DIAMBIL MAHASISWA\t" << endl;
  // cout << "========================================" << endl;
  keluar(jumlah);
  // cout << "========================================" << endl;
  cout << "\nTotal sks\t= " << total << " sks" << endl;
  cout << "Total biaya\t= Rp." << bayar << endl; 
  cout << "========================================" << endl;
}

void BiayaSKS::keluar(int n){
  if (n != 0){
      cout << matkul[n] << "\t-->\t" << sks[n] << " SKS" << endl;
      keluar(n - 1);
  }
}
