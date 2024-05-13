![header](https://github.com/SirGhazian/praktikum-struktur-data-UNP/assets/142916107/3b5d881e-4efa-49da-a988-638a0e6c5c1e)
<img src="https://media.tenor.com/zhIZszouG8QAAAAi/line-divider.gif" width="100%" height="2px"/>

## <img height="45" src="https://github.com/SirGhazian/praktikum-struktur-data-UNP/assets/142916107/602aaab2-4894-4d0c-be3e-3e49909256fc">

Bubble sort adalah salah satu algoritma pengurutan sederhana yang bekerja dengan membandingkan dan menukar secara berulang posisi dari elemen-elemen yang berdekatan dalam suatu daftar atau array, hingga seluruh daftar terurut. Algoritma ini berulang kali melintasi daftar, membandingkan pasangan elemen berturut-turut, dan menukar mereka jika urutannya salah. Proses ini berlanjut hingga tidak ada lagi pertukaran yang diperlukan, menunjukkan bahwa daftar sudah terurut.

Salah satu contoh penggunaan aplikasi yang menggunakan algoritma bubble sort, seperti dalam pencarian rute tercepat Google Maps, terletak pada proses pengurutan data. Algoritma bubble sort membandingkan dua elemen data secara berurutan dan menukar posisi mereka jika diperlukan, sehingga elemen-elemen dengan nilai yang lebih besar bergerak ke bagian akhir. Dalam konteks pencarian rute, aplikasi seperti Google Maps memanfaatkan algoritma kurang lebih algoritma bubble sort untuk mengurutkan pilihan rute berdasarkan berbagai faktor seperti jarak, waktu tempuh, dan kondisi lalu lintas, yang pada akhirnya memberikan pengguna pilihan rute tercepat atau terdekat.

Berikut adalah penjelasan bagaimana bubble sort bekerja pada pencarian rute Google Maps:
1. **Inisialisasi**: Pertama, setiap rute dalam map direpresentasikan sebagai simpul (node) dalam graf. Setiap simpul memiliki keterhubungan dengan simpul-simpul lain yang mewakili jalur-jalur yang bisa diambil dari satu titik ke titik lain.
2. **Perulangan**: Algoritma bubble sort mengulangi langkah-langkah berikut sampai tidak ada lagi pertukaran yang dilakukan:
- Iterasi melalui setiap pasangan simpul berurutan.
- Membandingkan bobot atau jarak dari dua simpul yang berdekatan.
- Jika bobot simpul pertama lebih besar dari simpul kedua (dalam konteks pencarian rute, ini berarti rute yang sedang dipertimbangkan lebih panjang dari rute berikutnya), maka kedua simpul tersebut ditukar.
3. **Pengecekan**: Setelah satu iterasi selesai, algoritma memeriksa apakah ada pertukaran yang dilakukan. Jika tidak ada pertukaran yang dilakukan dalam satu iterasi, ini berarti data sudah terurut, dan algoritma dihentikan.
4. **Penerapan pada Pencarian Rute Map**: Dalam konteks pencarian rute map, bobot atau jarak antara simpul-simpul mungkin adalah jarak fisik antara lokasi yang dihubungkan oleh rute tersebut. Bubble sort dapat digunakan untuk mengurutkan rute-rute berdasarkan jaraknya. Misalnya, jika kita ingin mencari rute terpendek dari titik A ke titik B, algoritma bubble sort dapat membantu kita mengurutkan daftar rute yang mungkin dari yang terpendek hingga yang terpanjang.





