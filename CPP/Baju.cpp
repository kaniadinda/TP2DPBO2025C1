#include "Aksesoris.cpp"

// kelas turunan dari Aksesoris: Baju
class Baju : public Aksesoris {
private:
    string untuk;
    string size;
    string merk;

public:
    // konstruktor
    Baju() {}
    Baju(int id, string nama_produk, double harga, int stok, string jenis, string bahan, string warna, string untuk, string size, string merk)
        : Aksesoris(id, nama_produk, harga, stok, jenis, bahan, warna) {
        this->untuk = untuk;
        this->size = size;
        this->merk = merk;
    }

    // getter
    string getUntuk() { return untuk; }
    string getSize() { return size; }
    string getMerk() { return merk; }

    // setter
    void setUntuk(string untuk) { this->untuk = untuk; }
    void setSize(string size) { this->size = size; }
    void setMerk(string merk) { this->merk = merk; }

    // menampilkan data dalam bentuk tabel
    void tampilkan() {
        cout << id << "\t" << nama_produk << "\t" << harga << "\t" << stok << "\t"
             << jenis << "\t" << bahan << "\t" << warna << "\t"
             << untuk << "\t" << size << "\t" << merk << endl;
    }
};
