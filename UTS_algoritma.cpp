//ilamn arifin A.R 2410631170143 1E informatika

#include <iostream>
#include <string>

using namespace std;

void hitungNilaiAkhir(string nama, string npm, float nilaiAbsen, float nilaiTugas, float nilaiUts, float nilaiUas) {

    float nilaiAkhir = (nilaiAbsen * 0.1) + (nilaiTugas * 0.2) + (nilaiUts * 0.3) + (nilaiUas * 0.4);


    char hurufMutu;
    if (nilaiAkhir >= 85 && nilaiAkhir < 100) {
        hurufMutu = 'A';
    } else if (nilaiAkhir >= 80) {
        hurufMutu = 'B';
    } else if (nilaiAkhir >= 75) {
        hurufMutu = 'C';
    } else if (nilaiAkhir >= 70) {
        hurufMutu = 'D';
    } else {
        hurufMutu = 'E';
    }


    cout << "Nama: " << nama << endl;
    cout << "NPM: " << npm << endl;
    cout << "Nilai Absen: " << nilaiAbsen << endl;
    cout << "Nilai Tugas: " << nilaiTugas << endl;
    cout << "Nilai UTS: " << nilaiUts << endl;
    cout << "Nilai UAS: " << nilaiUas << endl;
    cout << "Nilai Akhir: " << nilaiAkhir << endl;
    cout << "Huruf Mutu: " << hurufMutu << endl;
}

int main() {

    string nama, npm;
    float nilaiAbsen, nilaiTugas, nilaiUts, nilaiUas;

    cout << "Masukkan nama: ";
    getline(cin, nama);
    cout << "Masukkan NPM: ";
    getline(cin, npm);
    cout << "Masukkan nilai absen: ";
    cin >> nilaiAbsen;
    cout << "Masukkan nilai tugas: ";
    cin >> nilaiTugas;
    cout << "Masukkan nilai UTS: ";
    cin >> nilaiUts;
    cout << "Masukkan nilai UAS: ";
    cin >> nilaiUas;


    hitungNilaiAkhir(nama, npm, nilaiAbsen, nilaiTugas, nilaiUts, nilaiUas);

    return 0;
}
