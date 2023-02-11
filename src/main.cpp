#include <iostream>
#include <string>
#include <vector>
#include <map>

struct Menu {
    int id;
    std::string name;
    std::string category;
    int price;
};

struct Order {
    std::string customer_name;
    std::string menu_name;
    int quantity;
    int total_price;
};

class Warung {
    private:
        std::vector<Menu> menus;
        std::vector<Order> orders;

    public:
        Warung() {
            menus.push_back({1, "Nasi Goreng", "Makanan", 15000});
            menus.push_back({2, "Mie Goreng", "Makanan", 12000});
            menus.push_back({3, "Sate Ayam", "Makanan", 20000});
            menus.push_back({4, "Es Teh", "Minuman", 5000});
            menus.push_back({5, "Es Jeruk", "Minuman", 7000});
            menus.push_back({6, "Kopi", "Minuman", 8000});
            menus.push_back({7, "Jus Apel", "Minuman", 10000});
            menus.push_back({8, "Air Mineral", "Minuman", 3000});
            menus.push_back({9, "Sop Iga", "Makanan", 25000});
            menus.push_back({10, "Bakso", "Makanan", 15000});
        }

        void display_menu() {
            std::cout << "ID Menu\tNama Menu\tKategori\tHarga" << std::endl;
            for (auto menu : menus) {
                std::cout << menu.id << "\t\t" << menu.name << "\t\t" << menu.category << "\t\t" << menu.price << std::endl;
            }
        }

        void purchase(std::string customer_name, std::string menu_name, int quantity) {
            for (auto menu : menus) {
                if (menu.name == menu_name) {
                    int total_price = menu.price * quantity;
                    orders.push_back({customer_name, menu_name, quantity, total_price});
                    break;
                }
            }
        }

        void display_sales() {
            if (orders.empty()) {
                std::cout << "Tidak Ada Penjualan" << std::endl;
            } else {
                std::cout << "Nama Pelanggan\tNama Menu\tJumlah\tTotal Harga" << std::endl;
                for (auto order : orders) {
                    std::cout << order.customer_name << "\t\t" << order.menu_name << "\t\t" << order.quantity << "\t\t" << order.total_price << std::endl;
                }
            }
        }
};

int main() {
    Warung warung;
    std::string customer_name;
    std::string menu_name;
    int quantity;
    int choice;
while (true) {
    std::cout << "1. Nyambut Gawe" << std::endl;
    std::cout << "2. Turu" << std::endl;
    std::cout << "Pilihan penjual: ";
    std::cin >> choice;

    if (choice == 1) {
        std::cout << "Man ismuka?: ";
        std::cin.ignore();
        std::getline(std::cin, customer_name);

        while (true) {
            std::cout << "1. Lihat Menu" << std::endl;
            std::cout << "2. Beli Makanan/Minuman" << std::endl;
            std::cout << "3. Keluar" << std::endl;
            std::cout << "Pilihan pembeli: ";
            std::cin >> choice;

            if (choice == 1) {
                warung.display_menu();
            } else if (choice == 2) {
                std::cout << "Masukkan nama makanan/minuman: ";
                std::cin.ignore();
                std::getline(std::cin, menu_name);
                std::cout << "Beli berapa?: ";
                std::cin >> quantity;
                warung.purchase(customer_name, menu_name, quantity);
            } else if (choice == 3) {
                break;
            }
        }
    } else if (choice == 2) {
        warung.display_sales();
        break;
    }
}

return 0;

}