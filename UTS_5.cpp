//ilamn arifin A.R 2410631170143 1E informatika

#include <iostream>

using namespace std;

int main() {
    float beratBadan, tinggiBadan, imt;


    cout << "Masukkan berat badan (kg): ";
    cin >> beratBadan;

    cout << "Masukkan tinggi badan (m): ";
    cin >> tinggiBadan;


    imt = beratBadan / (tinggiBadan * tinggiBadan);


    if (imt <= 18.4) {
        cout << "Berat badan kurang." << endl;
    } else if (imt >= 18.5 && imt <= 24.9) {
        cout << "Berat badan ideal." << endl;
    } else if (imt >= 25 && imt <= 29.9) {
        cout << "Berat badan lebih." << endl;
    } else if (imt >= 30 && imt <= 39.9) {
        cout << "Gemuk." << endl;
    } else {
        cout << "Sangat gemuk." << endl;
    }

    return 0;
}
