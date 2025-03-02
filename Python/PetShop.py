# kelas dasar: PetShop
class PetShop:
    def __init__(self, id, nama_produk, harga, stok):
        self.id = id
        self.nama_produk = nama_produk
        self.harga = harga
        self.stok = stok

    # Getter
    def get_id(self):
        return self.id

    def get_nama_produk(self):
        return self.nama_produk

    def get_harga(self):
        return self.harga

    def get_stok(self):
        return self.stok