//ilamn arifin A.R 2410631170143 1E informatika

#include <iostream>
using namespace std;


double tambah(double a, double b) {
    return a + b;
}


double kurang(double a, double b) {
    return a - b;
}


double kali(double a, double b) {
    return a * b;
}


double bagi(double a, double b) {
    if (b == 0) {
        throw invalid_argument("Pembagian dengan nol tidak diperbolehkan.");
    }
    return a / b;
}

int main() {
    int pilihan;
    double operand1, operand2;

    cout << "Pilih operasi matematika:\n";
    cout << "1. Penjumlahan\n";
    cout << "2. Pengurangan\n";
    cout << "3. Perkalian\n";
    cout << "4. Pembagian\n";
    cout << "Masukkan pilihan (1-4): ";
    cin >> pilihan;

    cout << "Masukkan dua angka (operand): ";
    cin >> operand1 >> operand2;

    try {
        switch (pilihan) {
            case 1:
                cout << "Hasil dari Penjumlahan untuk " << operand1 << " dan " << operand2
                     << " adalah " << tambah(operand1, operand2) << endl;
                break;
            case 2:
                cout << "Hasil dari Pengurangan untuk " << operand1 << " dan " << operand2
                     << " adalah " << kurang(operand1, operand2) << endl;
                break;
            case 3:
                cout << "Hasil dari Perkalian untuk " << operand1 << " dan " << operand2
                     << " adalah " << kali(operand1, operand2) << endl;
                break;
            case 4:
                cout << "Hasil dari Pembagian untuk " << operand1 << " dan " << operand2
                     << " adalah " << bagi(operand1, operand2) << endl;
                break;
            default:
                cout << "Pilihan tidak valid!" << endl;
                break;
        }
    } catch (const invalid_argument& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
