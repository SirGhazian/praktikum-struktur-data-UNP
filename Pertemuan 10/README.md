![header](https://github.com/SirGhazian/praktikum-struktur-data-UNP/assets/142916107/3b5d881e-4efa-49da-a988-638a0e6c5c1e)
<img src="https://media.tenor.com/zhIZszouG8QAAAAi/line-divider.gif" width="100%" height="2px"/>

## <img height="45" src="https://github.com/SirGhazian/praktikum-struktur-data-UNP/assets/142916107/0ed1175e-d409-4a46-973e-7a81dc6f4f46">

Shell sort adalah algoritma pengurutan yang merupakan perbaikan dari insertion sort. Algoritma ini bekerja dengan cara membandingkan dan menukar elemen-elemen yang dipisahkan oleh gap atau jarak tertentu. Gap ini secara bertahap dikurangi hingga akhirnya menjadi 1, di mana pada tahap ini algoritma menjadi setara dengan insertion sort. Proses ini membantu mengurangi jumlah pergeseran elemen yang diperlukan, sehingga meningkatkan efisiensi pengurutan terutama untuk dataset yang lebih besar. Shell sort dinamai dari penemunya, Donald Shell, yang memperkenalkannya pada tahun 1959.
</br></br>

<img height="205" src="https://github.com/SirGhazian/praktikum-struktur-data-UNP/assets/142916107/ed448c66-1746-4e5e-9be9-126189170e31">

</br></br>
Microsoft Excel adalah program spreadsheet yang dikembangkan oleh perusahaan teknologi Microsoft. Ini merupakan bagian dari paket perangkat lunak Microsoft Office. Excel memungkinkan pengguna untuk membuat, mengatur, dan menganalisis data dalam bentuk tabel atau lembar kerja elektronik. Pengguna dapat melakukan berbagai tugas seperti penghitungan, visualisasi data, pembuatan grafik, dan analisis data dengan menggunakan fungsi dan formula yang disediakan.

Berikut adalah penjelasan bagaimana shell sort bekerja pada Microsoft Excel:
1. **Memilih Jarak Incremental**: Pertama-tama, algoritma ini memilih serangkaian jarak incremental yang akan digunakan untuk memisahkan elemen-elemen dalam array. Ini dilakukan untuk mempercepat proses pengurutan dengan memungkinkan elemen-elemen yang jauh berdekatan untuk dibandingkan dan ditukar.
2. **Pengurutan dengan Insertion Sort**: Setelah jarak-jarak incremental ditentukan, algoritma mulai melakukan pengurutan menggunakan metode Insertion Sort untuk setiap subset data yang terpisah oleh jarak-jarak tersebut. Insertion Sort bekerja dengan cara membandingkan elemen-elemen yang berdekatan dan menukar mereka jika diperlukan untuk memastikan urutan yang benar.
3. **Pengurutan Berulang**: Proses pengurutan dengan Insertion Sort dilakukan berulang kali dengan jarak-jarak incremental yang semakin kecil setiap kali iterasi. Ini memungkinkan elemen-elemen untuk bergerak menuju posisi mereka yang tepat secara bertahap.
4. **Penggabungan**: Setelah beberapa iterasi dengan jarak-jarak incremental yang berkurang, algoritma akhirnya melakukan pengurutan akhir dengan jarak incremental yang sama dengan 1. Pada titik ini, pengurutan sudah hampir selesai dan hanya memerlukan sedikit langkah tambahan untuk menyelesaikannya.
5. **Pengurutan Akhir**: Dalam langkah terakhir, algoritma melakukan pengurutan akhir dengan menggunakan metode Insertion Sort pada seluruh array. Karena array sudah dalam keadaan hampir terurut, langkah ini memerlukan sedikit operasi dan memastikan bahwa array diurutkan secara keseluruhan.
<br>

##
## <img height="45" src="https://github.com/SirGhazian/praktikum-struktur-data-UNP/assets/142916107/6712d4f2-7a48-47fb-a66b-f1992d3fc651">

Quick sort adalah algoritma pengurutan yang efisien dan sering digunakan dalam pemrosesan data. Ini bekerja dengan membagi larik data menjadi dua bagian, kemudian mengurutkan setiap bagian secara terpisah. Proses pemisahan dilakukan dengan memilih elemen yang disebut sebagai "pivot", dan kemudian memindahkan elemen-elemen lainnya ke kiri atau ke kanan pivot berdasarkan nilai mereka dibandingkan dengan pivot tersebut. Proses ini terus diulang pada setiap bagian data yang lebih kecil hingga seluruh larik terurut.
</br></br>

<img height="205" src="https://github.com/SirGhazian/praktikum-struktur-data-UNP/assets/142916107/1f892388-2dd5-4ead-836e-ec78f8fddbdc">

</br></br>
Spotify adalah layanan streaming musik digital yang memungkinkan pengguna untuk mendengarkan jutaan lagu dari berbagai genre, artis, dan album secara online. Pengguna dapat mengakses musik melalui aplikasi desktop, web, atau perangkat seluler dengan langganan bulanan. Layanan ini menawarkan fitur seperti membuat daftar putar pribadi, menemukan musik baru melalui rekomendasi berbasis algoritma.

Berikut adalah penjelasan bagaimana quick sort bekerja pada aplikasi Spotify:
1. **Pemilihan Elemen Pembanding (Pivot)**: Algoritma Quick Sort memilih salah satu elemen dari array sebagai "pivot". Pilihan pivot ini bisa dilakukan dengan berbagai cara, salah satunya adalah dengan memilih elemen tengah dari array. Pemilihan pivot ini penting karena efisiensi algoritma Quick Sort sangat dipengaruhi oleh kualitas pilihan pivot.
2. **Pengurutan Subarray**: Setelah pivot dipilih, elemen-elemen lain dalam array akan dibagi menjadi dua bagian, yaitu bagian yang lebih kecil dari pivot (kiri) dan bagian yang lebih besar dari pivot (kanan). Ini dilakukan dengan membandingkan setiap elemen dengan pivot, dan memindahkan elemen-elemen tersebut ke bagian yang sesuai.
3. **Rekursi**: Setelah pembagian ini dilakukan, algoritma Quick Sort akan memanggil dirinya sendiri secara rekursif untuk mengurutkan dua subarray tersebut. Proses ini akan terus berlanjut sampai subarray memiliki ukuran yang cukup kecil untuk dianggap sudah terurut (misalnya, subarray hanya memiliki satu elemen).
4. **Penggabungan**: Setelah seluruh subarray terurut, mereka digabungkan kembali menjadi satu array yang terurut. Ini relatif mudah dilakukan karena subarray-subarray ini sebelumnya sudah diurutkan.
