#include <iostream>
using namespace std;

int main(){
    int harga_produk,jumlah_beli;
    cout << "Selamat Datang Di Aplikasi Kasir PT BERKAH " << endl;
    cout << "========================================== " << endl;
    cout << "Masukkan Harga Produk      : ";
    cin  >> harga_produk;           
    cout << "Masukkan Jumlah Produk     :  ";
    cin >> jumlah_beli;
    
    long total = harga_produk * jumlah_beli;
    int pembayaran,kembalian;

    cout << "=============================================" << endl;
    cout << "Total                                  : " << total << endl;
    cout << "Masukkan Jumlah Pembayaran             : " ;
    cin >> pembayaran;
    cout << "=============================================" << endl;
    kembalian = pembayaran - total;

    cout << "Kemablian                              :  "<<kembalian << endl;


}