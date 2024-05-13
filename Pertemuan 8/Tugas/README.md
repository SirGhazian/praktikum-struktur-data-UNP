![header](https://github.com/SirGhazian/praktikum-struktur-data-UNP/assets/142916107/3b5d881e-4efa-49da-a988-638a0e6c5c1e)
<img src="https://media.tenor.com/zhIZszouG8QAAAAi/line-divider.gif" width="100%" height="2px"/>

## <img height="45" src="https://github.com/SirGhazian/praktikum-struktur-data-UNP/assets/142916107/602aaab2-4894-4d0c-be3e-3e49909256fc">

Bubble sort adalah salah satu algoritma pengurutan sederhana yang bekerja dengan membandingkan dan menukar secara berulang posisi dari elemen-elemen yang berdekatan dalam suatu daftar atau array, hingga seluruh daftar terurut. Algoritma ini berulang kali melintasi daftar, membandingkan pasangan elemen berturut-turut, dan menukar mereka jika urutannya salah. Proses ini berlanjut hingga tidak ada lagi pertukaran yang diperlukan, menunjukkan bahwa daftar sudah terurut.
</br></br>

<img height="205" src="https://github.com/SirGhazian/praktikum-struktur-data-UNP/assets/142916107/d6a72a1f-245b-4809-ad7e-2247b89d9787">

</br></br>
Salah satu contoh penggunaan aplikasi yang menggunakan algoritma bubble sort, seperti dalam pencarian rute tercepat Google Maps, terletak pada proses pengurutan data. Algoritma bubble sort membandingkan dua elemen data secara berurutan dan menukar posisi mereka jika diperlukan, sehingga elemen-elemen dengan nilai yang lebih besar bergerak ke bagian akhir. Dalam konteks pencarian rute, aplikasi seperti Google Maps memanfaatkan algoritma kurang lebih algoritma bubble sort untuk mengurutkan pilihan rute berdasarkan berbagai faktor seperti jarak, waktu tempuh, dan kondisi lalu lintas, yang pada akhirnya memberikan pengguna pilihan rute tercepat atau terdekat.

Berikut adalah penjelasan bagaimana bubble sort bekerja pada pencarian rute Google Maps:
1. **Inisialisasi**: Pertama, setiap rute dalam map direpresentasikan sebagai simpul (node) dalam graf. Setiap simpul memiliki keterhubungan dengan simpul-simpul lain yang mewakili jalur-jalur yang bisa diambil dari satu titik ke titik lain.
2. **Perulangan**: Algoritma bubble sort mengulangi langkah-langkah berikut sampai tidak ada lagi pertukaran yang dilakukan:
   - Iterasi melalui setiap pasangan simpul berurutan.
   - Membandingkan bobot atau jarak dari dua simpul yang berdekatan.
   - Jika bobot simpul pertama lebih besar dari simpul kedua (dalam konteks pencarian rute, ini berarti rute yang sedang dipertimbangkan lebih panjang dari rute berikutnya), maka kedua simpul tersebut ditukar.
3. **Pengecekan**: Setelah satu iterasi selesai, algoritma memeriksa apakah ada pertukaran yang dilakukan. Jika tidak ada pertukaran yang dilakukan dalam satu iterasi, ini berarti data sudah terurut, dan algoritma dihentikan.
4. **Penerapan pada Pencarian Rute Map**: Dalam konteks pencarian rute map, bobot atau jarak antara simpul-simpul mungkin adalah jarak fisik antara lokasi yang dihubungkan oleh rute tersebut. Bubble sort dapat digunakan untuk mengurutkan rute-rute berdasarkan jaraknya. Misalnya, jika kita ingin mencari rute terpendek dari titik A ke titik B, algoritma bubble sort dapat membantu kita mengurutkan daftar rute yang mungkin dari yang terpendek hingga yang terpanjang.
<br>

##
## <img height="45" src="https://github.com/SirGhazian/praktikum-struktur-data-UNP/assets/142916107/c14b371c-9880-4232-8380-876d01ee4c57">

Insertion search, atau pencarian sisipan, adalah algoritma pencarian sederhana yang bekerja dengan mengurutkan data dan mencari posisi yang tepat untuk menyisipkan elemen yang ingin dicari. Ini sering digunakan pada data yang sudah diurutkan, karena bekerja secara efisien dalam kasus tersebut. Algoritma ini membandingkan elemen yang dicari dengan elemen-elemen dalam urutan tertentu untuk menentukan posisi sisipannya, kemudian memasukkan elemen tersebut ke dalam urutan tersebut.
</br></br>

<img height="205" src="https://github.com/SirGhazian/praktikum-struktur-data-UNP/assets/142916107/23d8a88e-e744-422b-9ce2-13ae9f613893">

</br></br>
Salah satu contoh penerapan algoritma insertion search dalam konteks aplikasi Bank BCA Mobile, adalah pada fitur pencarian transaksi. Ketika pengguna ingin mencari transaksi tertentu dalam riwayat transaksi mereka, algoritma insertion search dapat digunakan untuk mencari dan menemukan transaksi tersebut secara efisien dalam daftar transaksi yang sudah diurutkan berdasarkan tanggal atau jenis transaksi. Dengan demikian, pengguna dapat dengan cepat menemukan informasi yang mereka butuhkan tanpa harus secara manual melalui seluruh riwayat transaksi mereka.

Berikut adalah penjelasan bagaimana insertion sort bekerja pada aplikasi BCA Mobile:

1. **Pengumpulan Data**: Aplikasi manajemen bank akan mengumpulkan data transaksi dari berbagai sumber, seperti mesin ATM, transfer online, atau transaksi yang dilakukan di cabang bank.
2. **Pemrosesan Data**: Data transaksi yang dikumpulkan akan disimpan dalam sebuah struktur data, seperti array atau linked list, yang memungkinkan untuk menyimpan informasi tanggal transaksi.
3. **Pemilihan Algoritma**: Setelah data transaksi dikumpulkan, aplikasi akan memilih algoritma pengurutan yang sesuai. Dalam hal ini, insertion sort dipilih karena sederhana dan efisien untuk jumlah data yang relatif kecil atau jika data hampir terurut.
4. **Implementasi Insertion Sort**: Langkah-langkah implementasi insertion sort sebagai berikut:
   - Pertama, transaksi pertama dianggap sebagai bagian dari sublist terurut.
   - Kemudian, aplikasi akan memeriksa transaksi kedua dan membandingkannya dengan transaksi pertama. Jika transaksi kedua memiliki tanggal yang lebih awal, maka akan ditukar posisinya sehingga transaksi kedua berada di posisi yang tepat dalam sublist terurut.
   - Proses ini akan berlanjut untuk setiap transaksi dalam daftar, dimana setiap transaksi akan dimasukkan ke dalam sublist terurut yang semakin bertambah panjang.
   - Pada setiap langkah, insertion sort memastikan bahwa sublist terurut tetap terurut saat transaksi baru dimasukkan.
   - Akhirnya, semua transaksi akan terurut berdasarkan tanggal.
5. Penyimpanan Data Terurut: Setelah proses pengurutan selesai, data transaksi yang sudah terurut berdasarkan tanggal akan disimpan kembali dalam struktur data yang sesuai, seperti array atau linked list.
6. **Akses Data Terurut**: Setelah penyimpanan, data transaksi yang terurut dapat diakses dengan mudah untuk keperluan pelaporan, analisis, atau keperluan lainnya dalam manajemen bank.
