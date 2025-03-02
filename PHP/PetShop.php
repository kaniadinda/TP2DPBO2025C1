<?php
// kelas dasar: PetShop
class PetShop {
    protected $id;
    protected $nama_produk;
    protected $harga;
    protected $stok;
    protected $foto_produk; // KHUSUS PHP

    // konstruktor
    public function __construct($id, $nama_produk, $harga, $stok, $foto_produk) {
        $this->id = $id;
        $this->nama_produk = $nama_produk;
        $this->harga = $harga;
        $this->stok = $stok;
        $this->foto_produk = $foto_produk;
    }

    // getter
    public function getId() { return $this->id; }
    public function getNamaProduk() { return $this->nama_produk; }
    public function getHarga() { return $this->harga; }
    public function getStok() { return $this->stok; }
    public function getFotoProduk() { return $this->foto_produk; }
}
?>
