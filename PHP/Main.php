<?php
require_once "Baju.php";

// daftar produk hardcoded
$daftarProduk = [
    new Baju(101, "Baju Anjing", 150000, 10, "images/baju_anjing.jpg", "Baju", "Katun", "Merah", "Anjing", "L", "DogWear"),
    new Baju(102, "Baju Kucing", 130000, 8, "images/baju_kucing.jpg", "Baju", "Satin", "Biru", "Kucing", "M", "CatStyle"),
    new Baju(103, "Kalung Anjing", 50000, 15, "images/kalung_anjing.jpg", "Kalung", "Kulit", "Hitam", "Anjing", "-", "PawPal"),
    new Baju(104, "Topi Kucing", 70000, 12, "images/topi_kucing.jpg", "Topi", "Wool", "Kuning", "Kucing", "S", "KittyFashion"),
    new Baju(105, "Sepatu Anjing", 90000, 7, "images/sepatu_anjing.jpg", "Sepatu", "Kanvas", "Coklat", "Anjing", "XL", "DogTrend"),
];

// menampilkan daftar produk dalam tabel HTML
echo "<h2>Daftar Produk PetShop</h2>";
echo "<table border='1' cellpadding='5' cellspacing='0'>
        <tr>
            <th>ID</th>
            <th>Nama Produk</th>
            <th>Harga</th>
            <th>Stok</th>
            <th>Foto</th>
            <th>Jenis</th>
            <th>Bahan</th>
            <th>Warna</th>
            <th>Untuk</th>
            <th>Size</th>
            <th>Merk</th>
        </tr>";

foreach ($daftarProduk as $produk) {
    $produk->tampilkan();
}

echo "</table>";
?>
