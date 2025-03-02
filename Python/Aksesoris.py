from PetShop import PetShop

# kelas turunan dari PetShop: Aksesoris
class Aksesoris(PetShop):
    def __init__(self, id, nama_produk, harga, stok, jenis, bahan, warna):
        super().__init__(id, nama_produk, harga, stok)
        self.jenis = jenis
        self.bahan = bahan
        self.warna = warna

    # getter
    def get_jenis(self):
        return self.jenis

    def get_bahan(self):
        return self.bahan

    def get_warna(self):
        return self.warna