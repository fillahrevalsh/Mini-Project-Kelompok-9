#include <iostream>
using namespace std;

void tampilkanMenu() {
    cout << "================================" << endl;
    cout << "     PROGRAM TABUNGAN HARIAN    " << endl;
    cout << "================================" << endl;
    cout << "1. Setor Uang" << endl;
    cout << "2. Tarik Uang" << endl;
    cout << "3. Total & Rata-rata Saldo" << endl;
    cout << "4. Tabungan Terbesar & Terkecil" << endl;
    cout << "5. Keluar" << endl;
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
