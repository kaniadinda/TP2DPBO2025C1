from Aksesoris import Aksesoris

# kelas turunan dari Aksesoris: Baju
class Baju(Aksesoris):
    def __init__(self, id, nama_produk, harga, stok, jenis, bahan, warna, untuk, size, merk):
        super().__init__(id, nama_produk, harga, stok, jenis, bahan, warna)
        self.untuk = untuk
        self.size = size
        self.merk = merk

    # getter
    def get_untuk(self):
        return self.untuk

    def get_size(self):
        return self.size

    def get_merk(self):
        return self.merk

    # menampilkan data dalam format tabel
    def tampilkan(self):
        print(f"{self.id:<5} {self.nama_produk:<15} {self.harga:<10} {self.stok:<5} {self.jenis:<10} {self.bahan:<10} {self.warna:<10} {self.untuk:<10} {self.size:<5} {self.merk:<10}")