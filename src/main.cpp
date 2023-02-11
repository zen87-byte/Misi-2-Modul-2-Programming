#include <iostream>
#include "seller.cpp"
// #include "customer.cpp"

using namespace std;

int main(){
    while (true) {
       cout << "Selamat datang di warung kita, Wahai Budak Korporat" << endl;
       sellerView ();
       if (sellerChoice == 1){
            // Seller
            string nama;
            cout << "Warung dibuka. pelanggan datang..." << endl;
            cout << "Halo kak, siapa namamu?" << endl;
            cout << "Namaku: ";
            cin >> nama;
            cout << "Selamat datang di Warung Kang Roger, kak " << nama << endl;
            //  Customer
            while (true)
            {
                customerView();
                int customerChoice;
                cout << "Customer choice: ";
                cin >> customerChoice;
                if (customerChoice == 1){
                    displayMenu();
                } else if (customerChoice == 2){
                    cout << "Mau pesan apa (select by ID)?: ";
                }

            }
            
            // 
            break;
        }
    }
}