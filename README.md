<p align="center">
<img height="100" src="https://github.com/SirGhazian/praktikum-struktur-data-UNP/assets/142916107/b0cc2806-e5ad-47a0-9fb9-17aae3b2ebaf">
</p>
<img src="https://media.tenor.com/zhIZszouG8QAAAAi/line-divider.gif" width="100%" height="2px"/>

Repository ini berisi tugas-tugas dari modul mata kuliah Praktikum Struktur Data Universitas Negeri Padang yang dibimbing oleh pak dosen Randi Proska Sandra, S.Pd, M.Sc.

## Tentang Repository
<img align="right" alt="Coding" width="60" src="https://github.com/SirGhazian/praktikum-struktur-data-UNP/assets/142916107/0d1d6e1a-91a2-4a33-8bc8-3a80fbcb54d4">

Repository ini bertujuan untuk menyediakan berbagai contoh program yang diimplementasikan menggunakan bahasa pemrograman C. Program-program ini dibuat berdasarkan latihan-latihan yang bersumber dari modul, sehingga dapat membantu dalam memahami konsep dan penerapan bahasa C.

## Daftar Isi
- [Kontribusi](#kontribusi)
- [Informasi Dosen](#informasi-dosen)
- [About & Help](#about)

## Daftar Jobsheet
- [Jobsheet 1](#jobsheet-01)
- [Jobsheet 2](#jobsheet-02)
- [Jobsheet 3](#jobsheet-03)
- [Jobsheet 4](#jobsheet-04)
- [Jobsheet 5](#jobsheet-05)
- [Jobsheet 6](#jobsheet-06)
- [Jobsheet 7](#jobsheet-07)
- [Jobsheet 8](#jobsheet-08)
- [Jobsheet 9](#jobsheet-09)
- [Jobsheet 10](#jobsheet-10)
- [Jobsheet 11](#jobsheet-11)
- [Jobsheet 12](#jobsheet-12)
- [Jobsheet 13](#jobsheet-13)

</a>
<hr/> 

## <img height="50" src="https://github.com/SirGhazian/praktikum-struktur-data-UNP/assets/142916107/f36455e4-c903-42b8-b9ff-429f1e3d314a" id="jobsheet-01">
`✦ Pengenalan Struktur Data ✦`

Pada Jobsheet 1, materi yang dibahas adalah berbagai konsep dasar dan penting dalam pemrograman C yang akan membantu kita memahami dan mengimplementasikan struktur data dengan lebih efektif. Materi yang dibahas meliputi:

1. **Pointer, Struct, dan Array**: Kita akan mempelajari konsep pointer yang memungkinkan kita untuk mengakses dan memanipulasi data dalam memori secara langsung. Selain itu, kita juga akan belajar bagaimana mendefinisikan dan menggunakan struct untuk mengelompokkan berbagai tipe data dalam satu kesatuan, serta mengelola array untuk menyimpan kumpulan data yang berjenis sama.

2. **Link List**: Kita akan memahami cara membuat dan mengelola linked list, yaitu struktur data dinamis yang terdiri dari serangkaian node di mana setiap node berisi data dan pointer ke node berikutnya. Ini memungkinkan penyimpanan dan pengelolaan data yang lebih fleksibel dibandingkan array.

3. **Double Link List**: Materi ini memperdalam pemahaman tentang linked list dengan memperkenalkan double linked list, yang memungkinkan navigasi dua arah. Setiap node dalam double linked list memiliki pointer ke node berikutnya dan node sebelumnya, sehingga memudahkan traversal di kedua arah.

4. **Circular Link List**: Kita juga akan mempelajari circular linked list, yaitu variasi linked list di mana node terakhir terhubung kembali ke node pertama, membentuk lingkaran. Ini sangat berguna dalam aplikasi yang memerlukan siklus atau rotasi data.

Dengan menyelesaikan Jobsheet 1 ini, kita akan memperoleh pemahaman yang mendalam tentang struktur data dasar dan bagaimana mengimplementasikannya dalam bahasa pemrograman C. Ini akan menjadi dasar yang kuat untuk mempelajari konsep-konsep lebih lanjut dalam pemrograman dan pengembangan perangkat lunak.
</br></br>
</a>
<hr/>

## <img height="50" src="https://github.com/SirGhazian/praktikum-struktur-data-UNP/assets/142916107/154bdf8c-6c20-4401-ab8b-2daec584eb1c" id="jobsheet-02">  
`✦ Array, Pointer, Structure ✦`  

### ⭒ Array
Array adalah kumpulan elemen yang memiliki tipe data yang sama dan disimpan dalam memori yang berdekatan. Setiap elemen dalam array dapat diakses menggunakan indeks, di mana indeks pertama dimulai dari 0.

**Contoh:**
```
int arr[5];          // Deklarasi array integer dengan 5 elemen
int arr2[5] = {1, 2, 3, 4, 5};  // Deklarasi dan inisialisasi array
```

### ⭒ Pointer
Pointer adalah variabel yang menyimpan alamat memori dari variabel lain. Dengan menggunakan pointer, kita bisa mengakses dan memanipulasi data yang disimpan di lokasi memori tertentu.

**Contoh:**
```
int a = 10;
int *p = &a; // Pointer p menyimpan alamat memori dari variabel a
```

### ⭒ Struct
Structure adalah kumpulan dari variabel yang dapat memiliki tipe data yang berbeda-beda, dikelompokkan di bawah satu nama. Structure memungkinkan kita untuk mengelompokkan beberapa data yang berbeda dalam satu unit logis.

**Contoh:**
```
struct Person {
    char name[50];
    int age;
    float height;
};
```
</br>
</a>
<hr/>

## <img height="50" src="https://github.com/SirGhazian/praktikum-struktur-data-UNP/assets/142916107/8b280a80-fb87-483e-b053-2625eb6a7b8b" id="jobsheet-03">
`✦ Single Linked List ✦`  

### ⭒ Single Linked List
Single Linked List adalah salah satu jenis struktur data yang terdiri dari rangkaian elemen yang disebut node. Setiap node dalam single linked list memiliki dua komponen utama: data dan pointer yang menunjuk ke node berikutnya dalam urutan. Struktur ini memungkinkan penyimpanan data secara dinamis dan sekuensial.

**Komponen Utama Single Linked List:**
- Node: Elemen dasar dari linked list yang terdiri dari dua bagian:
  - Data: Menyimpan nilai atau informasi.
  - Pointer: Menunjuk ke node berikutnya dalam list.
- Head: Pointer yang menunjuk ke node pertama dalam linked list. Jika linked list kosong, head akan menunjuk ke NULL.

**Contoh:**
```
new_node->data = new_data;
new_node->next = (*head_ref);
(*head_ref) = new_node;
```
</br>
</a>
<hr/>

## <img height="50" src="https://github.com/SirGhazian/praktikum-struktur-data-UNP/assets/142916107/47fc03ce-4c33-4f8a-bffd-0c3bb65bfcc3" id="jobsheet-04">
`✦ Doubly Linked List ✦`  

### ⭒ Doubly Linked List
Doubly Linked List adalah salah satu jenis struktur data linked list yang memiliki dua penunjuk (pointer) pada setiap node, yaitu penunjuk ke node sebelumnya (prev) dan penunjuk ke node berikutnya (next). Hal ini memungkinkan traversal (penelusuran) dua arah, baik maju maupun mundur, yang membedakannya dari singly linked list yang hanya memiliki satu penunjuk ke node berikutnya.

**Komponen Utama Doubly Linked List:**
- Node: Elemen dasar dari linked list yang terdiri dari dua bagian:
  - Data: Menyimpan nilai atau informasi.
  - Pointer: Menunjuk ke node berikutnya dalam list.
- Head: Pointer yang menunjuk ke node pertama dalam linked list.
- Tail: Pointer yang menunjuk ke node terakhir dalam Doubly Linked List.

**Contoh:**
```
struct Node {
    int data;           // Data yang disimpan pada node
    struct Node* prev;  // Pointer ke node sebelumnya
    struct Node* next;  // Pointer ke node berikutnya
};
```

**Kelebihan:**
- Double Linked List dapat bergerak dalam dua arah, baik maju maupun mundur.
- Proses penyisipan atau insert() simpul dapat dilakukan dengan lebih efisien.

**Kelemahan:**
- Setiap simpul dalam Double Linked List membutuhkan ruang memori tambahan untuk dua pointer.
- Setiap operasi yang dilakukan harus menyertakan pointer ke simpul sebelumnya.

</br>
</a>
<hr/>

## <img height="50" src="https://github.com/SirGhazian/praktikum-struktur-data-UNP/assets/142916107/4253d696-acba-49ec-8579-a95d35666747" id="jobsheet-05">
`✦ Circular Doubly Linked List ✦`  

### ⭒ Circular Doubly Linked
Circular Doubly Linked List adalah struktur data yang mengkombinasikan fitur dari doubly linked list dan circular linked list. Setiap node dalam list ini memiliki dua penunjuk (pointer), yaitu satu penunjuk ke node sebelumnya (prev) dan satu penunjuk ke node berikutnya (next). Selain itu, list ini bersifat melingkar di mana node terakhir menunjuk kembali ke node pertama dan node pertama menunjuk ke node terakhir.


**Beberapa penjelasan fungsi umum:**
- Struktur Node: Setiap node memiliki tiga bagian: data untuk menyimpan nilai, prev untuk menunjuk ke node sebelumnya, dan next untuk menunjuk ke node berikutnya.
- createNode: Fungsi ini digunakan untuk membuat node baru dengan data yang diberikan.
- insertAtEnd: Fungsi ini menambahkan node baru di akhir list. Jika list kosong, node baru menjadi head dan menunjuk ke dirinya sendiri (membentuk lingkaran). Jika tidak, node baru ditambahkan di akhir dan dihubungkan kembali ke head.
- displayList: Fungsi ini menampilkan semua elemen dalam list dari awal hingga kembali ke head, dengan traversal dari head hingga kembali ke head.

</br>
</a>
<hr/>

## <img height="50" src="https://github.com/SirGhazian/praktikum-struktur-data-UNP/assets/142916107/88657d6f-1873-4306-9265-cb8fb76e7466" id="jobsheet-06">
`✦ Stack ✦`  

### ⭒ Stack
Stack atau dalam bahasa Indonesia disebut tumpukan, adalah struktur data linier yang mengikuti prinsip Last In First Out (LIFO). Artinya, elemen yang terakhir dimasukkan akan menjadi elemen pertama yang dikeluarkan. Stack dapat diimplementasikan menggunakan array atau linked list

**Fungsi Utama:**
- `push()`: Menambahkan elemen baru ke puncak stack.
- `pop()`: Menghapus dan mengembalikan elemen teratas dari stack.
- `peek()`: Mengembalikan elemen teratas tanpa menghapusnya dari stack.
- `isEmpty()`: Memeriksa apakah stack kosong.
- `isFull()`: Memeriksa apakah stack penuh (jika menggunakan array dengan kapasitas tetap).

**Penjelasan:**
- `initStack`: Fungsi ini menginisialisasi stack dengan mengatur top ke -1.
- `isEmpty`: Fungsi ini memeriksa apakah stack kosong.
- `isFull`: Fungsi ini memeriksa apakah stack penuh.
- `push`: Fungsi ini menambahkan elemen baru ke dalam stack. Jika stack penuh, akan menampilkan pesan "Stack overflow".
- `pop`: Fungsi ini mengeluarkan elemen teratas dari stack. Jika stack kosong, akan menampilkan pesan "Stack underflow".
- `peek`: Fungsi ini mengembalikan elemen teratas tanpa mengeluarkannya dari stack.

</br>
</a>
<hr/>

## <img height="50" src="https://github.com/SirGhazian/praktikum-struktur-data-UNP/assets/142916107/e679486d-7624-4caf-b7d3-06dee1e2b994" id="jobsheet-07">
`✦ Queue ✦`  

### ⭒ Queue
Queue adalah salah satu struktur data yang bekerja berdasarkan prinsip FIFO (First In, First Out), yang berarti elemen yang pertama kali dimasukkan akan menjadi elemen pertama yang dikeluarkan. Queue sering digunakan dalam berbagai aplikasi seperti penjadwalan tugas, manajemen antrean di sistem operasi, dan lain-lain.

**Contoh Enqueue (Menambahkan Elemen ke Queue):**
```
void enqueue(Queue *q, int value) {
    if (isFull(q)) {
        printf("Queue is full\n");
        return;
    }
    if (q->front == -1) {
        q->front = 0;
    }
    q->rear++;
    q->items[q->rear] = value;
    printf("Inserted %d\n", value);
}
```

**Contoh Dequeue (Menghapus Elemen dari Queue):**
```
int dequeue(Queue *q) {
    int item;
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return -1;
    }
    item = q->items[q->front];
    q->front++;
    if (q->front > q->rear) {
        q->front = q->rear = -1; // Reset Queue jika sudah kosong
    }
    return item;
}
```

Dengan menggunakan queue, kita dapat mengelola data dengan cara yang efisien, terutama dalam situasi di mana urutan pengambilan data harus sesuai dengan urutan pertama kali data tersebut dimasukkan, seperti dalam sistem antrian tiket atau pemrosesan tugas dalam sistem operasi.

</br>
</a>
<hr/>

## <img height="50" src="https://github.com/SirGhazian/praktikum-struktur-data-UNP/assets/142916107/6960d85a-c1fa-463a-955c-24fc0e1a748b" id="jobsheet-08">
`✦ Bubble and Insertion Sort ✦` 

### ⭒ Bubble Sort

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

### ⭒ Insertion Sort

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

</br>
</a>
<hr/>

## <img height="50" src="https://github.com/SirGhazian/praktikum-struktur-data-UNP/assets/142916107/77f59d7a-d0bf-442a-80e8-0fb7595513c7" id="jobsheet-09">
`✦ Selection and Merge Sort ✦` 

### ⭒ Selection Sort

Algoritma Selection Sort adalah salah satu algoritma pengurutan yang sederhana namun cukup efisien untuk daftar dengan jumlah elemen yang kecil. Algoritma ini bekerja dengan cara mencari elemen terkecil (atau terbesar, tergantung pada jenis pengurutan yang diinginkan) dari daftar dan menempatkannya di posisi yang benar. Proses ini diulangi untuk elemen-elemen yang tersisa hingga seluruh daftar terurut.
</br></br>

<img height="205" src="https://github.com/SirGhazian/praktikum-struktur-data-UNP/assets/142916107/cedf7e28-a412-435f-883c-1bb4c20d88fe">

</br></br>
Agoda adalah salah satu aplikasi pemesanan hotel terkemuka di dunia yang menawarkan berbagai macam akomodasi, mulai dari hotel mewah hingga penginapan budget-friendly di destinasi wisata di seluruh dunia. Dalam konteks aplikasi ini, algoritma selection sort dapat digunakan untuk membantu pengguna dalam menemukan akomodasi yang paling sesuai dengan preferensi dan kebutuhan mereka.

Berikut adalah penjelasan bagaimana selection sort bekerja pada pengurutan hotel berdasarkan harga:
1. **Inisialisasi Daftar Hotel**: Misalkan kita memiliki daftar hotel dengan harga per malam yang perlu diurutkan.
2. **Langkah Pertama**: Pilih harga hotel pertama sebagai harga termurah sementara.
3. **Pencarian Harga Terkecil**: Bandingkan harga hotel pertama ini dengan semua harga hotel lainnya. Jika ditemukan harga yang lebih murah, catat indeks hotel dengan harga termurah tersebut.
4. **Tukar Posisi**: Setelah membandingkan semua harga, tukar posisi hotel pertama dengan hotel yang memiliki harga termurah.
5. **Ulangi untuk Elemen Berikutnya**: Pindah ke hotel kedua dalam daftar dan ulangi proses hingga semua hotel terurutkan berdasarkan harga.

### ⭒ Merge Sort

Merge sort adalah algoritma pengurutan yang bekerja dengan membagi array yang akan diurutkan menjadi dua bagian, mengurutkan masing-masing bagian secara rekursif, dan kemudian menggabungkan kedua bagian tersebut menjadi satu array terurut. Ini adalah contoh algoritma divide and conquer.
</br></br>

<img height="205" src="https://github.com/SirGhazian/praktikum-struktur-data-UNP/assets/142916107/df706b4e-5307-405b-8dfb-8d074b1455be">

</br></br>
Dalam konteks aplikasi Photoshop atau perangkat lunak pengolah gambar lainnya, Merge Sort mungkin tidak digunakan secara langsung oleh pengguna saat berinteraksi dengan antarmuka pengguna. Namun, Merge Sort dapat menjadi bagian dari algoritma yang digunakan oleh Photoshop di belakang layar saat melakukan operasi tertentu.

Salah satu contoh penggunaan Merge Sort di dalam Photoshop adalah ketika pengguna melakukan operasi pengurutan layer. Saat pengguna memiliki banyak layer dalam proyek gambar, mereka mungkin perlu mengurutkan layer berdasarkan berbagai kriteria, seperti nama, ukuran, opasitas, atau mode campuran.

Berikut adalah penjelasan bagaimana merge sort bekerja pada aplikasi Photoshop:
1. **Persiapan Data**: Photoshop akan mengumpulkan informasi tentang setiap layer dalam proyek, seperti nama, ukuran, opasitas, dll., dan menyimpannya dalam struktur data yang sesuai.
2. **Pemilihan Kriteria**: Pengguna memilih kriteria berdasarkan yang mereka ingin mengurutkan layer, misalnya, pengguna memilih untuk mengurutkan layer berdasarkan nama.
3. **Penggunaan Merge Sort**: Setelah kriteria pengurutan ditentukan, Photoshop menggunakan algoritma Merge Sort untuk mengurutkan daftar layer sesuai dengan kriteria yang dipilih.
4. **Pembaruan Tampilan**: Setelah pengurutan selesai, Photoshop akan memperbarui tampilan antarmuka pengguna untuk mencerminkan urutan baru dari layer-layer tersebut.
5. **Sinkronisasi Data**: Photoshop juga harus memastikan bahwa perubahan urutan layer di antarmuka pengguna disinkronkan dengan perubahan yang sesuai dalam struktur data proyek.

</br>
</a>
<hr/>

## <img height="50" src="https://github.com/SirGhazian/praktikum-struktur-data-UNP/assets/142916107/f257220c-951b-4926-97b7-35d4eb960045" id="jobsheet-10">
`✦ Shell Sort and Quick Sort ✦` 

### ⭒ Shell Sort

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

### ⭒ Quick Sort

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

</br>
</a>
<hr/>

## <img height="50" src="https://github.com/SirGhazian/praktikum-struktur-data-UNP/assets/142916107/ace3e92e-606b-49cf-89ff-f9121e64c33e" id="jobsheet-11">
`✦ Linear Search and Binary Search ✦`

### ⭒ Linear Search

Linear search, atau pencarian beruntun, adalah metode pencarian yang paling sederhana. Algoritma ini bekerja dengan membandingkan setiap elemen dalam array satu per satu secara berurutan hingga elemen yang dicari ditemukan atau hingga mencapai akhir array. Metode ini sangat efektif untuk dataset kecil, tetapi menjadi tidak efisien untuk dataset yang besar karena waktu pencariannya linear terhadap jumlah elemen.

### ⭒ Binary Search

Binary search, atau pencarian biner, adalah metode pencarian yang lebih efisien dibandingkan linear search, tetapi memerlukan array yang sudah diurutkan. Algoritma ini bekerja dengan membagi array menjadi dua bagian dan membandingkan elemen tengah dengan elemen yang dicari. Jika elemen yang dicari lebih kecil dari elemen tengah, pencarian dilanjutkan pada setengah bagian kiri, dan sebaliknya. Proses ini diulang hingga elemen ditemukan atau ruang pencarian tidak dapat dibagi lagi.

</br>
</a>
<hr/>

## <img height="50" src="https://github.com/SirGhazian/praktikum-struktur-data-UNP/assets/142916107/336e7ade-ebbc-4df9-9abb-9332f57e10aa" id="jobsheet-12">
`✦ Tree ✦`

### ⭒ Tree

Pohon/tree adalah struktur data hierarkis yang terdiri dari simpul (nodes/vertex), dengan satu simpul utama disebut akar (root), dan simpul-simpul lainnya merupakan anak (child) yang terhubung melalui cabang (edges). Setiap simpul dapat memiliki nol atau lebih anak, dan tree tidak boleh mengandung siklus (cycles).

**Berikut adalah contoh struktur data simpul tree:**
```
struct TreeNode {
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
};
```

Di sini, data adalah nilai yang disimpan dalam simpul, left adalah pointer ke child kiri, dan right adalah pointer ke child kanan.

</br>
</a>
<hr/>

## <img height="50" src="https://github.com/SirGhazian/praktikum-struktur-data-UNP/assets/142916107/a053617b-cbc1-484d-88fe-2d9de0b817c0" id="jobsheet-13">
`✦ Graphs ✦`

### ⭒ Graphs

Graphs adalah struktur data yang terdiri dari simpul-simpul yang terhubung melalui tepian atau edge. Setiap simpul dapat memiliki nilai atau atribut yang terkait dengannya. Graphs bisa direpresentasikan menggunakan matriks ketetanggaan atau daftar ketetanggaan. Operasi umum pada Graphs meliputi penambahan simpul, penambahan tepi, pencarian jalur, dan traversal untuk melakukan operasi pada setiap simpul atau tepi.
</br>
</a>
<hr/>
<hr/>

## Kontribusi
Saya menyambut kontribusi dari siapa pun. Jika Anda ingin berkontribusi, silakan fork repository ini, buat branch baru untuk perubahan Anda, dan ajukan pull request. Pastikan untuk memberikan deskripsi yang jelas tentang apa yang Anda ubah dan mengapa.
1. Fork repository ini.
2. Buat branch fitur baru: `git checkout -b fitur-anda`.
3. Commit perubahan Anda: `git commit -am 'Menambahkan fitur baru'`.
4. Push ke branch: `git push origin fitur-anda`.
5. Buat pull request baru.

## Informasi Dosen
<img align="left" width="160" src="https://github.com/SirGhazian/praktikum-struktur-data-UNP/assets/142916107/58bffcd0-9983-4a84-9fc6-857c625cb609">

**Randi Proska Sandra, S.Pd, M.Sc** </br>
`Lecturer in Informatics` </br></br>
Randi completed his graduate degree at the Graduate Institute of Network Learning Technology, National Central University, Taiwan. He is a lecturer in the Informatics Bachelor Program at Universitas Negeri Padang, with interests in learning analytics, UI/UX design, software engineering project management, AI-supported educational technologies, and educational data mining. He has training from Microsoft, INTEL, AWS, and the Python Institute, and is a Google Certified Educator and Adobe Creative Educator.

## <a id="about"></a>About & Help
Untuk bantuan dan pertanyaan, silahkan hubungi [Instagram](https://www.instagram.com/ghazian_tza/) saya.
