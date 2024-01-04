#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    while (true) {
        int bayar, jumlah[50], harga[50], sub_tot[50];
        string nama_barang[50];
        float tot = 0;

        int i = 0; 

        while (true) {
            cout << endl;
            cout << "Masukan Barang Ke-" << i + 1 << " atau ketik 'n' untuk mengakhiri" << endl;
            cout << endl;

            cout << "Nama Barang : ";
            cin >> nama_barang[i];

            if (nama_barang[i] == "n") {
                break; 
            }

            cout << "Jumlah      : ";
            cin >> jumlah[i];

            cout << "Harga       : ";
            cin >> harga[i];

            sub_tot[i] = jumlah[i] * harga[i];
            tot += sub_tot[i];

            i++; 
        }

        cout << endl;
        cout << "STRUK BELANJA" << endl;
        cout << "+-----------------------------------------------+" << endl;
        cout << "|No |  Barang  |  Jumlah  |  Harga  |  Sub Total|" << endl;
        cout << "+---+----------+----------+---------+-----------+" << endl;

        for (int j = 0; j < i; j++) {
            cout << j + 1 << setw(8)
                << nama_barang[j] << setw(10)
                << jumlah[j] << setw(12)
                << harga[j] << setw(12)
                << sub_tot[j] << endl;
        }

        cout << "+-----------------------------------------------+" << endl;

        cout << "Jumlah Bayar : Rp." << tot << endl;
        cout << "Total Bayar  : Rp." << tot << endl;
        cout << "Bayar        : Rp.";
        cin >> bayar;
        cout << "Kembali      : Rp." << (bayar - tot) << endl;

        cout << endl;
        cout << "Apakah Anda ingin beli lagi? (y/n): ";
        char choice;
        cin >> choice;

        if (choice != 'y') {
            break;
        }
    }

    cout << endl;
    cout << "Terima kasih atas pembelian Anda!" << endl;

    return 0;
}
