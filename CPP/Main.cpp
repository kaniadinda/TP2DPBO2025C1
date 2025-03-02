#include <iostream>
#include "Baju.cpp"

using namespace std;

int main() {
    // welcome!
    cout << "===== Daftar Produk PetShop =====\n";
    cout << "=================================\n";

    // array untuk menyimpan 5 data awal
    Baju daftarBaju[10];
    int jumlahBaju = 5; // 5 data awal sudah ada

    // data awal (hardcoded)
    daftarBaju[0] = Baju(101, "Baju Anjing", 150000, 10, "Baju", "Katun", "Merah", "Anjing", "L", "DogWear");
    daftarBaju[1] = Baju(102, "Baju Kucing", 130000, 8, "Baju", "Satin", "Biru", "Kucing", "M", "CatStyle");
    daftarBaju[2] = Baju(103, "Kalung Anjing", 50000, 15, "Kalung", "Kulit", "Hitam", "Anjing", "-", "PawPal");
    daftarBaju[3] = Baju(104, "Topi Kucing", 70000, 12, "Topi", "Wool", "Kuning", "Kucing", "S", "KittyFashion");
    daftarBaju[4] = Baju(105, "Sepatu Anjing", 90000, 7, "Sepatu", "Kanvas", "Coklat", "Anjing", "XL", "DogTrend");

    // user dapat menambahkan produk baru
    char pilihan;
    cout << "\nApakah Anda ingin menambahkan produk baru? (y/n): ";
    cin >> pilihan;

    if (pilihan == 'y' || pilihan == 'Y') {
        if (jumlahBaju < 10) {
            int id, stok;
            string nama_produk, jenis, bahan, warna, untuk, size, merk;
            double harga;

            cout << "Masukkan ID Produk: ";
            cin >> id;
            cin.ignore();
            cout << "Masukkan Nama Produk: ";
            getline(cin, nama_produk);
            cout << "Masukkan Harga Produk: ";
            cin >> harga;
            cout << "Masukkan Stok Produk: ";
            cin >> stok;
            cin.ignore();
            cout << "Masukkan Jenis Aksesoris: ";
            getline(cin, jenis);
            cout << "Masukkan Bahan: ";
            getline(cin, bahan);
            cout << "Masukkan Warna: ";
            getline(cin, warna);
            cout << "Masukkan Untuk Hewan: ";
            getline(cin, untuk);
            cout << "Masukkan Size: ";
            getline(cin, size);
            cout << "Masukkan Merk: ";
            getline(cin, merk);

            daftarBaju[jumlahBaju] = Baju(id, nama_produk, harga, stok, jenis, bahan, warna, untuk, size, merk);
            jumlahBaju++;
            cout << "Produk berhasil ditambahkan!\n";
        } else {
            cout << "Data penuh!\n";
        }
    }

    // menampilkan daftar produk dalam tabel
    cout << "\n===== Tabel Produk =====\n";
    cout << "ID\tNama Produk\tHarga\tStok\tJenis\tBahan\tWarna\tUntuk\tSize\tMerk\n";
    cout << "----------------------------------------------------n-----------------------------------\n";
    for (int i = 0; i < jumlahBaju; i++) {
        daftarBaju[i].tampilkan();
    }

    return 0;
}