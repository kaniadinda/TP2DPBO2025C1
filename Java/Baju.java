// kelas turunan dari Aksesoris: Baju
public class Baju extends Aksesoris {
    private String untuk;
    private String size;
    private String merk;

    // konstruktor
    public Baju() {}

    public Baju(int id, String namaProduk, double harga, int stok, String jenis, String bahan, String warna, String untuk, String size, String merk) {
        super(id, namaProduk, harga, stok, jenis, bahan, warna);
        this.untuk = untuk;
        this.size = size;
        this.merk = merk;
    }

    // getter
    public String getUntuk() { return untuk; }
    public String getSize() { return size; }
    public String getMerk() { return merk; }

    // menampilkan data dalam bentuk tabel
    public void tampilkan() {
        System.out.printf("%-5d %-15s %-10.2f %-5d %-10s %-10s %-10s %-10s %-5s %-10s\n",
                          id, namaProduk, harga, stok, jenis, bahan, warna, untuk, size, merk);
    }
}
