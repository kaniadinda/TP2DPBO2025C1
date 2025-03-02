import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // welcome!
        System.out.println("===== Daftar Produk PetShop =====");

        // array untuk menyimpan 5 data awal
        Baju[] daftarBaju = new Baju[10];
        int jumlahBaju = 5; // 5 data awal sudah ada

        // data awal (hardcoded)
        daftarBaju[0] = new Baju(101, "Baju Anjing", 150000, 10, "Baju", "Katun", "Merah", "Anjing", "L", "DogWear");
        daftarBaju[1] = new Baju(102, "Baju Kucing", 130000, 8, "Baju", "Satin", "Biru", "Kucing", "M", "CatStyle");
        daftarBaju[2] = new Baju(103, "Kalung Anjing", 50000, 15, "Kalung", "Kulit", "Hitam", "Anjing", "-", "PawPal");
        daftarBaju[3] = new Baju(104, "Topi Kucing", 70000, 12, "Topi", "Wool", "Kuning", "Kucing", "S", "KittyFashion");
        daftarBaju[4] = new Baju(105, "Sepatu Anjing", 90000, 7, "Sepatu", "Kanvas", "Coklat", "Anjing", "XL", "DogTrend");

        // user dapat menambahkan produk baru
        System.out.print("\nApakah Anda ingin menambahkan produk baru? (y/n): ");
        char pilihan = scanner.next().charAt(0);
        scanner.nextLine();

        if (pilihan == 'y' || pilihan == 'Y') {
            if (jumlahBaju < 10) {
                int id, stok;
                String namaProduk, jenis, bahan, warna, untuk, size, merk;
                double harga;

                System.out.print("Masukkan ID Produk: ");
                id = scanner.nextInt();
                scanner.nextLine();
                System.out.print("Masukkan Nama Produk: ");
                namaProduk = scanner.nextLine();
                System.out.print("Masukkan Harga Produk: ");
                harga = scanner.nextDouble();
                System.out.print("Masukkan Stok Produk: ");
                stok = scanner.nextInt();
                scanner.nextLine();
                System.out.print("Masukkan Jenis Aksesoris: ");
                jenis = scanner.nextLine();
                System.out.print("Masukkan Bahan: ");
                bahan = scanner.nextLine();
                System.out.print("Masukkan Warna: ");
                warna = scanner.nextLine();
                System.out.print("Masukkan Untuk Hewan: ");
                untuk = scanner.nextLine();
                System.out.print("Masukkan Size: ");
                size = scanner.nextLine();
                System.out.print("Masukkan Merk: ");
                merk = scanner.nextLine();

                daftarBaju[jumlahBaju] = new Baju(id, namaProduk, harga, stok, jenis, bahan, warna, untuk, size, merk);
                jumlahBaju++;
                System.out.println("Produk berhasil ditambahkan!");
            } else {
                System.out.println("Data penuh!");
            }
        }

        // menampilkan daftar produk dalam tabel
        System.out.println("\n===== Tabel Produk =====");
        System.out.printf("%-5s %-15s %-10s %-5s %-10s %-10s %-10s %-10s %-5s %-10s\n",
                          "ID", "Nama Produk", "Harga", "Stok", "Jenis", "Bahan", "Warna", "Untuk", "Size", "Merk");
        System.out.println("-------------------------------------------------------------------------------");
        for (int i = 0; i < jumlahBaju; i++) {
            daftarBaju[i].tampilkan();
        }

        scanner.close();
    }
}
