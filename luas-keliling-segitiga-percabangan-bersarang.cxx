#include <iostream>
using namespace std;

int main() {
    float alas, tinggi, sisiA, sisiB, sisiC, luas, keliling;
    int pilih;

    cout << "Program menghitung luas dan keliling segitiga" << endl;
    cout << "1. Hitung luas segitiga" << endl;
    cout << "2. Hitung keliling segitiga" << endl;
    cout << "Pilih: ";
    cin >> pilih;

    if (pilih == 1) {
        cout << "Masukkan alas: ";
        cin >> alas;
        cout << "Masukkan tinggi: ";
        cin >> tinggi;
        if (alas > 0 && tinggi > 0) {
            luas = 0.5 * alas * tinggi;
            cout << "Luas segitiga adalah: " << luas << endl;
        } else {
            cout << "Masukkan bilangan positif untuk alas dan tinggi" << endl;
        }
    } else if (pilih == 2) {
        cout << "Masukkan sisi A: ";
        cin >> sisiA;
        cout << "Masukkan sisi B: ";
        cin >> sisiB;
        cout << "Masukkan sisi C: ";
        cin >> sisiC;
        if (sisiA > 0 && sisiB > 0 && sisiC > 0) {
            if (sisiA + sisiB > sisiC && sisiB + sisiC > sisiA && sisiC + sisiA > sisiB) {
                keliling = sisiA + sisiB + sisiC;
                cout << "Keliling segitiga adalah: " << keliling << endl;
            } else {
                cout << "Sisi-sisi segitiga tidak memenuhi syarat" << endl;
            }
        } else {
            cout << "Masukkan bilangan positif untuk setiap sisi" << endl;
        }
    } else {
        cout << "Pilihan tidak valid" << endl;
        if (pilih < 1) {
            cout << "Pilihan harus lebih besar dari 0" << endl;
        } else {
            cout << "Pilihan harus lebih kecil dari 3" << endl;
        }
    }

    return 0;
}
