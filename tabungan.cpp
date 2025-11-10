#include <iostream>
using namespace std;

void tampilkanMenu() {
    cout << "================================" << endl;
    cout << "     PROGRAM TABUNGAN HARIAN    " << endl;
    cout << "================================" << endl;
    cout << "1. Setor Uang" << endl;
    cout << "2. Daftar list tabungan" << endl;
    cout << "3. Total & Rata-rata Saldo" << endl;
    cout << "4. Tabungan Terbesar & Terkecil" << endl;
    cout << "0. Keluar" << endl;
    cout << "================================" << endl;

}

void setorUang(int saldo[], int hari){

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

int main() {
    int saldo[7];
    int jumlahHari = 0;
    int pilihan;

    do {

cout << endl; cout << endl; cout << endl;

        tampilkanMenu();
        cout << "Pilih menu : ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:                                                                                               setorUang(saldo, jumlahHari);
                jumlahHari++;
                break;

            case 0:
                cout << "Makasih bro udah make" << endl;
                break;
            default:
                cout << "Belum ada hehe";
}
    } while (pilihan != 0);

    return 0;
}
