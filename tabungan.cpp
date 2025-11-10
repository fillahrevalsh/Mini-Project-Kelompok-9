#include <iostream>
using namespace std;

const int MAX_HARI = 30;

void tampilkanMenu() {
    cout << "================================" << endl;
    cout << "     PROGRAM TABUNGAN HARIAN    " << endl;
    cout << "================================" << endl;
    cout << "1. Setor Uang" << endl;
    cout << "2. Tarik Uang" << endl;
    cout << "3. Total & Rata-rata Saldo" << endl;
    cout << "4. Tabungan Terbesar & Terkecil" << endl;
    cout << "5. Daftar List Tabungan" << endl;
    cout << "6. Keluar" << endl;
    cout << "================================" << endl;

}
void setorUang(int saldo[], int hari){
    if (hari >= MAX_HARI) {
        cout << "Sudah mencapai batas maksimal hari penyimpanan." << endl;
        return;
    }
    int jumlah;
    cout << "Masukkan jumlah setor uang hari ke-" << hari + 1 << ": ";
    cin >> jumlah;
    if (jumlah < 0) {
        cout << "Jumlah uang tidak boleh negatif." << endl;
        return;
    }
    saldo[hari] = jumlah;
    cout << "Uang berhasil disetor." << endl;
}
void daftarListTabungan(int saldo[], int jumlahHari) {
    cout << "\n================================" << endl;
    cout << "       DAFTAR LIST TABUNGAN     " << endl;
    cout << "================================" << endl;

    if (jumlahHari == 0) {
        cout << "Belum ada data tabungan." << endl;
        return;
    }

    for (int i = 0; i < jumlahHari; i++) {
        cout << "Hari ke-" << i + 1 << " : Rp " << saldo[i] << endl;
    }

    cout << "================================" << endl;
}

