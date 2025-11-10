#include <iostream>
using namespace std;

const int MAX_HARI = 30;

void tampilkanMenu() {
    cout << "================================" << endl;
    cout << "     PROGRAM TABUNGAN HARIAN    " << endl;
    cout << "================================" << endl;
    cout << "1. Setor Uang" << endl;
    cout << "2. Daftar list tabungan" << endl;
    cout << "3. Total & Rata-rata Saldo" << endl;
    cout << "4. Tabungan Terbesar & Terkecil" << endl;                                                                                                        cout << "0. Keluar" << endl;
    cout << "================================" << endl;

}

void setorUang(int saldo[], int hari){

    int jumlah;

    if (hari >= MAX_HARI) {
        cout << "Sudah mencapai batas maksimal hari penyimpanan." << endl;
        return;
    }

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

void tampilkanTotalDanRataRata (int saldo[], int jumlahHari) {
     if (jumlahHari == 0) {
        cout << "Belum ada data tabungan." << endl;
        return;
    }

    int total = 0;
    for (int i = 0; i < jumlahHari; i++) {
        total += saldo[i];
    }

    double rata = static_cast<double>(total) / jumlahHari;

    cout << "\n================================" << endl;
    cout << "     TOTAL & RATA-RATA SALDO    " << endl;
    cout << "================================" << endl;
    cout << "Total Tabungan : Rp " << total << endl;
    cout << "Rata-rata per Hari : Rp " << rata << endl;
    cout << "================================" << endl;
}

void besarDanKecil(int saldo[], int jumlahHari) {

int terbesar = saldo[0];
    for (int i = 1; i < jumlahHari; i++) {
        if (saldo[i] > terbesar) {
            terbesar = saldo[i];
        }
    }


int terkecil = saldo[0];
    for (int i = 1; i < jumlahHari; i++) {
        if (saldo[i] > terkecil) {
            terkecil = saldo[i];
        }
    }

    cout << "Saldo terbesar kamu adalah: " << terbesar << endl;
    cout << "Saldo terkecil kamu adalah: " << terkecil << endl;
}


int main() {
    int saldo[MAX_HARI];
    int jumlahHari = 0;
    int pilihan;

    do {
cout << endl; cout << endl; cout << endl;
        tampilkanMenu();
        cout << "Pilih menu : ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                setorUang(saldo, jumlahHari);
                jumlahHari++;
                break;
            case 2:
                daftarListTabungan(saldo, jumlahHari);
                break;
            case 3:
                tampilkanTotalDanRataRata(saldo, jumlahHari);
                break;
            case 4:
                besarDanKecil(saldo, jumlahHari);
                break;
            case 0:
                cout << "Terima kasih telah menggunakan program tabungan ini!" << endl;
                break;
            default:
                cout << "Tidak ada di menu kak" << endl;
        }
    } while (pilihan != 0);

    return 0;
}
