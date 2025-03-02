#include <iostream>
#include <string>

using namespace std;

// kelas dasar: PetShop
class PetShop {
protected:
    int id;
    string nama_produk;
    double harga;
    int stok;

public:
    // konstruktor
    PetShop() {}
    PetShop(int id, string nama_produk, double harga, int stok) {
        this->id = id;
        this->nama_produk = nama_produk;
        this->harga = harga;
        this->stok = stok;
    }

    // getter
    int getId() { return id; }
    string getNamaProduk() { return nama_produk; }
    double getHarga() { return harga; }
    int getStok() { return stok; }

    // setter
    void setId(int id) { this->id = id; }
    void setNamaProduk(string nama_produk) { this->nama_produk = nama_produk; }
    void setHarga(double harga) { this->harga = harga; }
    void setStok(int stok) { this->stok = stok; }
};
