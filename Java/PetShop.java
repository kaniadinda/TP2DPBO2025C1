// kelas dasar: PetShop
public class PetShop {
    protected int id;
    protected String namaProduk;
    protected double harga;
    protected int stok;

    // konstruktor
    public PetShop() {}

    public PetShop(int id, String namaProduk, double harga, int stok) {
        this.id = id;
        this.namaProduk = namaProduk;
        this.harga = harga;
        this.stok = stok;
    }

    // getter
    public int getId() { return id; }
    public String getNamaProduk() { return namaProduk; }
    public double getHarga() { return harga; }
    public int getStok() { return stok; }
}
