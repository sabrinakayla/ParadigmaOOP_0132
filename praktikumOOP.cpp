#include <iostream>
using namespace std;

class barang{
    public:
    string nama;
    int jumlah;
    string kategori;
    string tanggalProduksi;

    void tampilSpek(){
        cout << "nama barang : " << nama << endl;
        cout << "jumlah barang : " << jumlah << endl;
        cout << "kategori barang : " << kategori << endl;
        cout << "tanggalProduksi barang : " << tanggalProduksi << endl;
    }
};

int main(){

    barang elektronik;
    barang nonElektronik;

    elektronik.nama = "supersemar";
    elektronik.jumlah = 1;
    elektronik.kategori = "elektronik";
    elektronik.tanggalProduksi = "1945-08-17";
    elektronik.tampilSpek();

    cout << endl;

    nonElektronik.nama = "supersemar";
    nonElektronik.jumlah = 1;
    nonElektronik.kategori = "nonElektronik";
    nonElektronik.tanggalProduksi = "1970-03-11";
    nonElektronik.tampilSpek();
}