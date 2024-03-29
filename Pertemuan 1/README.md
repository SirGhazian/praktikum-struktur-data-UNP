# Konsep Dasar Pemrograman C
Dalam bahasa pemrograman C, terdapat beberapa konsep dasar yang penting untuk dipahami. Di bawah ini akan dijelaskan beberapa konsep seperti:
1. Pointer, Struct, dan Array
2. Link List
3. Double Link List
4. Circular Link List
<hr><hr>

## POINTER

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

# STRUCT

Struct dalam bahasa pemrograman C adalah kumpulan dari beberapa tipe data yang berbeda yang dibungkus dalam satu unit. Ini memungkinkan Anda untuk membuat struktur data yang kompleks yang terdiri dari beberapa tipe data yang berbeda.

##  Mengapa Struct Penting?
- **Struktur Data yang Lebih Terorganisir**: Struct memungkinkan pengelompokkan data terkait menjadi satu unit.
- **Kode yang Lebih Mudah Dipahami**: Dengan menggunakan struct, kode menjadi lebih mudah dipahami karena kita dapat memberikan nama yang bermakna pada setiap anggota struct.
- **Mempermudah Pengiriman Data**: Struct memudahkan dalam pengiriman data kompleks antara fungsi-fungsi dalam program.
<hr><hr>

# ARRAY
Array adalah struktur data yang digunakan untuk menyimpan sekumpulan elemen dengan tipe data yang sama dalam satu variabel. Setiap elemen dalam array diakses menggunakan indeks yang dimulai dari 0 hingga (jumlah elemen - 1).

## Mendefinisikan Array
Array dalam bahasa pemrograman C dideklarasikan dengan menentukan tipe data elemen dan jumlah elemennya dalam kurung siku (`[]`).

## Catatan
- Indeks array dimulai dari `[0]`.
- Array dalam bahasa C tidak memiliki mekanisme otomatis untuk mengatur ukuran dinamis.
- Array dalam C dapat digunakan untuk menyimpan tipe data apa pun, termasuk tipe data dasar maupun tipe data kompleks seperti struktur.


