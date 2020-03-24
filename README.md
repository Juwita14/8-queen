# 8-queen
![1](https://user-images.githubusercontent.com/56763570/77385184-a3b56800-6d44-11ea-9d27-6b94de73275c.PNG)

Yang berarti baris = index dan arr[i] = kolom

![queen](https://user-images.githubusercontent.com/56763570/77385331-0eff3a00-6d45-11ea-9684-dc947ad669ec.PNG)

fungsi di atas adalah fungsi queen
variabel i sebagai banyaknya queen yang telah diletakkan. Yang berarti queen pertama berada di kolom pertama, queen kedua berada pada kolom kedua, dan seterusnya.
a[i]++ berarti pada kolom pertama bernilai 1

![place](https://user-images.githubusercontent.com/56763570/77385761-4e7a5600-6d46-11ea-8441-6eee0e0794c1.PNG)

Diperiksa apakah queen tidak bertabrakan dengan queen lainnya dengan dipanggilnya fungsi place

![place1](https://user-images.githubusercontent.com/56763570/77385818-808bb800-6d46-11ea-9a62-8e06145a9507.PNG)

jika terdapat queen lain di kolom yang sama maka akan me-return nilai 1 jika tidak ada queen dikolom yang sama maka akan me-return nilai 1
Kemudian jika telah meletakkan queen di kolom maka k++
Jika queen selanjutnya diletakkan di are queen pertama maka queen selanjutnya akan bergeser ke kanan samapi qeen selanjutnya tidak terkena are milik queen pertama.
Dan jika queen selanjutnya melebihi are kolom maka queen pertama akan dipindah posisinya ke kanan, dan seterusnya.

![cetak](https://user-images.githubusercontent.com/56763570/77386138-5b4b7980-6d47-11ea-94ad-9b7293c320e0.PNG)

Fungsi diatas digunakan untuk menge-print queen yang sudah selesai diatur.

