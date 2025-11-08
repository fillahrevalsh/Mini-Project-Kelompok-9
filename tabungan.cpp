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

int main() {
    int tabungan[100];
    int jumlahHari = 0;
    int pilihan;
    
    do {
        tampilkanMenu();
        cout << "Pilih menu (1-5): ";
        cin >> pilihan;
        
        switch(pilihan) {
            case 1:
                // Add implementation for Setor Uang
                break;
            case 2:
                // Add implementation for Tarik Uang
                break;
            case 3:
                // Add implementation for Total & Rata-rata
                break;
            case 4:
                // Add implementation for Max & Min
                break;
            case 5:
                cout << "Terima kasih telah menggunakan program ini!" << endl;
                break;
            default:
                cout << "Pilihan tidak valid!" << endl;
        }
    } while (pilihan != 5);

    return 0;
}