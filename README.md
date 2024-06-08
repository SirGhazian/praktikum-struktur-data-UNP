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


</a>
<hr/> 

## <img height="50" src="https://github.com/SirGhazian/praktikum-struktur-data-UNP/assets/142916107/f36455e4-c903-42b8-b9ff-429f1e3d314a">
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

## <img height="50" src="https://github.com/SirGhazian/praktikum-struktur-data-UNP/assets/142916107/154bdf8c-6c20-4401-ab8b-2daec584eb1c">  
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

## <img height="50" src="https://github.com/SirGhazian/praktikum-struktur-data-UNP/assets/142916107/8b280a80-fb87-483e-b053-2625eb6a7b8b">
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

## <img height="50" src="https://github.com/SirGhazian/praktikum-struktur-data-UNP/assets/142916107/47fc03ce-4c33-4f8a-bffd-0c3bb65bfcc3">
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

## <img height="50" src="https://github.com/SirGhazian/praktikum-struktur-data-UNP/assets/142916107/4253d696-acba-49ec-8579-a95d35666747">
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

## <img height="50" src="https://github.com/SirGhazian/praktikum-struktur-data-UNP/assets/142916107/88657d6f-1873-4306-9265-cb8fb76e7466">
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

## <img height="50" src="https://github.com/SirGhazian/praktikum-struktur-data-UNP/assets/142916107/e679486d-7624-4caf-b7d3-06dee1e2b994">
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


## <img height="50" src="https://github.com/SirGhazian/praktikum-struktur-data-UNP/assets/142916107/6960d85a-c1fa-463a-955c-24fc0e1a748b">
## <img height="50" src="https://github.com/SirGhazian/praktikum-struktur-data-UNP/assets/142916107/77f59d7a-d0bf-442a-80e8-0fb7595513c7">
## <img height="50" src="https://github.com/SirGhazian/praktikum-struktur-data-UNP/assets/142916107/f257220c-951b-4926-97b7-35d4eb960045">
## <img height="50" src="https://github.com/SirGhazian/praktikum-struktur-data-UNP/assets/142916107/ace3e92e-606b-49cf-89ff-f9121e64c33e">
## <img height="50" src="https://github.com/SirGhazian/praktikum-struktur-data-UNP/assets/142916107/336e7ade-ebbc-4df9-9abb-9332f57e10aa">
## <img height="50" src="https://github.com/SirGhazian/praktikum-struktur-data-UNP/assets/142916107/a053617b-cbc1-484d-88fe-2d9de0b817c0">


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

## About
Untuk bantuan dan pertanyaan, silahkan hubungi [Instagram](https://www.instagram.com/ghazian_tza/) saya.
