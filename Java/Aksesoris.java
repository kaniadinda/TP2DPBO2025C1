// kelas turunan dari PetShop: Aksesoris
public class Aksesoris extends PetShop {
    protected String jenis;
    protected String bahan;
    protected String warna;

    // konstruktor
    public Aksesoris() {}

    public Aksesoris(int id, String namaProduk, double harga, int stok, String jenis, String bahan, String warna) {
        super(id, namaProduk, harga, stok);
        this.jenis = jenis;
        this.bahan = bahan;
        this.warna = warna;
    }

    // getter
    public String getJenis() { return jenis; }
    public String getBahan() { return bahan; }
    public String getWarna() { return warna; }
}
