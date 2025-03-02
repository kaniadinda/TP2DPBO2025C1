<?php
require_once "Aksesoris.php";

// kelas turunan dari Aksesoris: Baju
class Baju extends Aksesoris {
    private $untuk;
    private $size;
    private $merk;

    // konstruktor
    public function __construct($id, $nama_produk, $harga, $stok, $foto_produk, $jenis, $bahan, $warna, $untuk, $size, $merk) {
        parent::__construct($id, $nama_produk, $harga, $stok, $foto_produk, $jenis, $bahan, $warna);
        $this->untuk = $untuk;
        $this->size = $size;
        $this->merk = $merk;
    }

    // getter
    public function getUntuk() { return $this->untuk; }
    public function getSize() { return $this->size; }
    public function getMerk() { return $this->merk; }

    // menampilkan data dalam format tabel HTML
    public function tampilkan() {
        echo "<tr>
                <td>{$this->id}</td>
                <td>{$this->nama_produk}</td>
                <td>Rp" . number_format($this->harga, 0, ',', '.') . "</td>
                <td>{$this->stok}</td>
                <td><img src='{$this->foto_produk}' width='50' height='50'></td>
                <td>{$this->jenis}</td>
                <td>{$this->bahan}</td>
                <td>{$this->warna}</td>
                <td>{$this->untuk}</td>
                <td>{$this->size}</td>
                <td>{$this->merk}</td>
              </tr>";
    }
}
?>