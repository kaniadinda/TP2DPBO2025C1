#include "PetShop.cpp"

// kelas turunan dari PetShop: Aksesoris
class Aksesoris : public PetShop {
protected:
    string jenis;
    string bahan;
    string warna;

public:
    // konstruktor
    Aksesoris() {}
    Aksesoris(int id, string nama_produk, double harga, int stok, string jenis, string bahan, string warna)
        : PetShop(id, nama_produk, harga, stok) {
        this->jenis = jenis;
        this->bahan = bahan;
        this->warna = warna;
    }

    // getter
    string getJenis() { return jenis; }
    string getBahan() { return bahan; }
    string getWarna() { return warna; }

    // setter
    void setJenis(string jenis) { this->jenis = jenis; }
    void setBahan(string bahan) { this->bahan = bahan; }
    void setWarna(string warna) { this->warna = warna; }
};
