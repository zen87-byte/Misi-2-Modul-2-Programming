#include <iostream>
#include "seller.cpp"

using namespace std;

int customerChoice;
void customerView(){
    cout << "1. Lihat menu" << endl;
    cout << "2. Beli makanan/minuman" << endl;
    cout << "3. Keluar warung" << endl;
    cout << "Customer choice: ";
    cin >> customerChoice;
};
