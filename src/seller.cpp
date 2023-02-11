#include <iostream>
#include <string>
#include <vector>
// #include "main.cpp"
using namespace std;

void customerView();
int sellerChoice;
void sellerView(){
    cout << "Apa yang akan kamu lakukan?" << endl;
    cout << "1. Cari cuan"  << endl;
    cout << "2. Turu" << endl;
    cout << "Seller choice: ";
    cin >> sellerChoice;
};

void displayMenu(){
  int id[10] = {1,2,3,4,5,6,7,8,9,10};
  string name[10] = {"Nasi Kuning", "Nasi Uduk", "Nasi Pecel", "Nasi Kucing", "Nasi Rames", "Nasi Goreng", "Mie Goreng", "Bubur Ayam", "Teh Hangat", "Aneka Kopi"};
  string category[10] = {"Makanan", "Makanan", "Makanan", "Makanan", "Makanan", "Makanan", "Makanan", "Makanan", "Minuman", "Minuman"};
  int price[10] = {10000, 10000, 15000, 10000, 15000, 20000, 18000, 15000, 5000, 5000};

  cout << "ID\tNama\t\tKategori\tHarga" <<endl;
  cout << "---------------------------------------------"<<endl;
  for (int i = 0; i<10; i++){
    cout << id[i] << "\t" << name[i] << "\t"<< category[i]<< "\t\t" << price[i] << endl;
  }
}

int customerChoice;
void customerView(){
    cout << "Kakak ingin apa?" << endl;
    cout << "1. Lihat menu" << endl;
    cout << "2. Beli makanan/minuman" << endl;
    cout << "3. Keluar warung" << endl;
};
