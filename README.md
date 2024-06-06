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

Contoh:
```
int arr[5];          // Deklarasi array integer dengan 5 elemen
int arr2[5] = {1, 2, 3, 4, 5};  // Deklarasi dan inisialisasi array
```

### ⭒ Pointer
Pointer adalah variabel yang menyimpan alamat memori dari variabel lain. Dengan menggunakan pointer, kita bisa mengakses dan memanipulasi data yang disimpan di lokasi memori tertentu.

Contoh:
```
int a = 10;
int *p = &a; // Pointer p menyimpan alamat memori dari variabel a
```

### ⭒ Struct
Structure adalah kumpulan dari variabel yang dapat memiliki tipe data yang berbeda-beda, dikelompokkan di bawah satu nama. Structure memungkinkan kita untuk mengelompokkan beberapa data yang berbeda dalam satu unit logis.

Contoh:
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

Contoh:
```
new_node->data = new_data;
new_node->next = (*head_ref);
(*head_ref) = new_node;
```






## <img height="50" src="https://github.com/SirGhazian/praktikum-struktur-data-UNP/assets/142916107/47fc03ce-4c33-4f8a-bffd-0c3bb65bfcc3">
## <img height="50" src="https://github.com/SirGhazian/praktikum-struktur-data-UNP/assets/142916107/4253d696-acba-49ec-8579-a95d35666747">
## <img height="50" src="https://github.com/SirGhazian/praktikum-struktur-data-UNP/assets/142916107/88657d6f-1873-4306-9265-cb8fb76e7466">
## <img height="50" src="https://github.com/SirGhazian/praktikum-struktur-data-UNP/assets/142916107/e679486d-7624-4caf-b7d3-06dee1e2b994">
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
