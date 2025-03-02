from Baju import Baju

# menampilkan pesan selamat datang
print("===== Daftar Produk PetShop =====")

# array untuk menyimpan 5 data awal
daftar_baju = [
    Baju(101, "Baju Anjing", 150000, 10, "Baju", "Katun", "Merah", "Anjing", "L", "DogWear"),
    Baju(102, "Baju Kucing", 130000, 8, "Baju", "Satin", "Biru", "Kucing", "M", "CatStyle"),
    Baju(103, "Kalung Anjing", 50000, 15, "Kalung", "Kulit", "Hitam", "Anjing", "-", "PawPal"),
    Baju(104, "Topi Kucing", 70000, 12, "Topi", "Wool", "Kuning", "Kucing", "S", "KittyFashion"),
    Baju(105, "Sepatu Anjing", 90000, 7, "Sepatu", "Kanvas", "Coklat", "Anjing", "XL", "DogTrend"),
]

# user dapat menambahkan produk baru
pilihan = input("\nApakah Anda ingin menambahkan produk baru? (y/n): ").strip().lower()

if pilihan == 'y':
    if len(daftar_baju) < 10:
        # input dari user
        id = int(input("Masukkan ID Produk: "))
        nama_produk = input("Masukkan Nama Produk: ")
        harga = float(input("Masukkan Harga Produk: "))
        stok = int(input("Masukkan Stok Produk: "))
        jenis = input("Masukkan Jenis Aksesoris: ")
        bahan = input("Masukkan Bahan: ")
        warna = input("Masukkan Warna: ")
        untuk = input("Masukkan Untuk Hewan: ")
        size = input("Masukkan Size: ")
        merk = input("Masukkan Merk: ")

        daftar_baju.append(Baju(id, nama_produk, harga, stok, jenis, bahan, warna, untuk, size, merk))
        print("Produk berhasil ditambahkan!")
    else:
        print("Data penuh!")

# menampilkan daftar produk dalam tabel
print("\n===== Tabel Produk =====")
print(f"{'ID':<5} {'Nama Produk':<15} {'Harga':<10} {'Stok':<5} {'Jenis':<10} {'Bahan':<10} {'Warna':<10} {'Untuk':<10} {'Size':<5} {'Merk':<10}")
print("-" * 90)
for baju in daftar_baju:
    baju.tampilkan()