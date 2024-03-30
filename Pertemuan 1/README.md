![header](https://github.com/SirGhazian/praktikum-struktur-data-UNP/assets/142916107/696a667e-adcb-4b88-8779-fa2a7e425279)

Dalam bahasa pemrograman C, terdapat beberapa konsep dasar yang penting untuk dipahami. Di bawah ini akan dijelaskan beberapa konsep seperti:
1. Pointer, Struct, dan Array
2. Link List
3. Double Link List
4. Circular Link List
<hr><hr>

## <img height="70" src="https://github.com/SirGhazian/praktikum-struktur-data-UNP/assets/142916107/d078a4d6-7869-4753-b602-bb50850dc975">
Pointer adalah variabel yang berisi alamat memori dari variabel lainnya. Dengan kata lain, pointer adalah alat yang memungkinkan kita untuk mengakses dan memanipulasi data menggunakan alamat memori tempat data tersebut disimpan.

## Mengapa Pointer Penting?
1. **Efisiensi Memori**: Menggunakan pointer memungkinkan kita untuk mengakses dan memanipulasi data secara langsung di dalam memori, yang dapat meningkatkan efisiensi program.
2. **Manipulasi Data**: Pointer memungkinkan kita untuk memanipulasi data secara langsung, seperti mengubah nilai variabel melalui alamatnya.
3. **Dynamic Memory Allocation**: Pointer memainkan peran penting dalam alokasi memori dinamis, yang memungkinkan kita untuk mengalokasikan memori saat program berjalan.

## Cara Menggunakan Pointer
Untuk menggunakan pointer dalam bahasa C, kita perlu:
1. **Deklarasi Pointer**: Mendeklarasikan pointer dengan menyertakan tipe data yang ingin kita tunjuk.
2. **Inisialisasi Pointer**: Menginisialisasi pointer dengan alamat memori dari variabel tertentu.
3. **Dereferensi Pointer**: Mengakses nilai yang disimpan di alamat yang ditunjuk oleh pointer menggunakan operator dereferensi (`*`).
<hr><hr>

## <img height="70" src="https://github.com/SirGhazian/praktikum-struktur-data-UNP/assets/142916107/1dbd1ae9-f386-40ca-bf0a-7fcc4215fbaf">
Struct dalam bahasa pemrograman C adalah kumpulan dari beberapa tipe data yang berbeda yang dibungkus dalam satu unit. Ini memungkinkan Anda untuk membuat struktur data yang kompleks yang terdiri dari beberapa tipe data yang berbeda.

##  Mengapa Struct Penting?
- **Struktur Data yang Lebih Terorganisir**: Struct memungkinkan pengelompokkan data terkait menjadi satu unit.
- **Kode yang Lebih Mudah Dipahami**: Dengan menggunakan struct, kode menjadi lebih mudah dipahami karena kita dapat memberikan nama yang bermakna pada setiap anggota struct.
- **Mempermudah Pengiriman Data**: Struct memudahkan dalam pengiriman data kompleks antara fungsi-fungsi dalam program.
<hr><hr>

## <img height="70" src="https://github.com/SirGhazian/praktikum-struktur-data-UNP/assets/142916107/0d0037d3-0e12-47d1-b5f4-fc799a7ea344">
Array adalah struktur data yang digunakan untuk menyimpan sekumpulan elemen dengan tipe data yang sama dalam satu variabel. Setiap elemen dalam array diakses menggunakan indeks yang dimulai dari 0 hingga (jumlah elemen - 1).

## Mendefinisikan Array
Array dalam bahasa pemrograman C dideklarasikan dengan menentukan tipe data elemen dan jumlah elemennya dalam kurung siku (`[]`).

## Catatan
- Indeks array dimulai dari `[0]`.
- Array dalam bahasa C tidak memiliki mekanisme otomatis untuk mengatur ukuran dinamis.
- Array dalam C dapat digunakan untuk menyimpan tipe data apa pun, termasuk tipe data dasar maupun tipe data kompleks seperti struktur.
<hr><hr>

## <img height="70" src="https://github.com/SirGhazian/praktikum-struktur-data-UNP/assets/142916107/5cfdedc7-f6c4-494c-9e29-a26075c557fb">

## 1. Single Linked List
Linked list adalah struktur data linier yang terdiri dari simpul-simpul data yang disusun secara berurutan. Setiap simpul memiliki dua bagian, yaitu data itu sendiri dan referensi/pointer ke simpul berikutnya dalam urutan.

<img height="90" src="https://github.com/SirGhazian/praktikum-struktur-data-UNP/assets/142916107/0ed40934-d066-41a4-83d8-0abd04e3bfce">

### Cara Kerja:
- Penambahan dan penghapusan elemen dari awal, tengah, atau akhir linked list.
- Iterasi atau traversal dari awal ke akhir.

## 2. Double Linked List
Double linked list adalah jenis linked list di mana setiap simpul memiliki dua pointer, yaitu satu pointer yang menunjuk ke simpul sebelumnya dan satu pointer yang menunjuk ke simpul berikutnya dalam urutan.

<img height="40" src="https://github.com/SirGhazian/praktikum-struktur-data-UNP/assets/142916107/2bdf4f3a-dfb0-474b-8c19-a380d3a67deb">

### Cara Kerja:
- Penambahan dan penghapusan elemen dari awal, tengah, atau akhir double linked list.
- Iterasi atau traversal maju dan mundur.

## 3. Circular Linked List

Circular linked list adalah linked list di mana pointer dari simpul terakhir menunjuk kembali ke simpul pertama, membuatnya menjadi siklik.

<img height="53" src="https://github.com/SirGhazian/praktikum-struktur-data-UNP/assets/142916107/afb207e2-6722-4be1-8acb-066bba53ca97">

### Cara Kerja:
- Penambahan dan penghapusan elemen dari awal, tengah, atau akhir circular linked list.
- Iterasi atau traversal dari awal ke akhir, melintasi simpul yang bersifat siklik.

