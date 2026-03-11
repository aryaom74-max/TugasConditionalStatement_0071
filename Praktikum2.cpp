#include <iostream>
#include <string>
using namespace std;


void inputData(float &berat, float &tinggi) {
    cout << "Masukkan berat badan (kg): ";
    cin >> berat;
    cout << "Masukkan tinggi badan (m): ";
    cin >> tinggi;
}


float hitungBMI(float berat, float tinggi) {
    return berat / (tinggi * tinggi);
}


string kondisiBerat(float bmi) {
    if (bmi < 18.5) {
        return "Berat Badan Kurang";
    } else if (bmi < 25) {
        return "Berat Badan Normal";
    } else if (bmi < 30) {
        return "Berat Badan Kelebi";
    } else {
        return "Obesitas";
    }
}

int main() {
    float berat, tinggi, bmi;
    string kondisi;

    cout << "=== Program Kalkulator BMI ===" << endl;
    cout << endl;

    
    inputData(berat, tinggi);

    
    bmi = hitungBMI(berat, tinggi);

    
    kondisi = kondisiBerat(bmi);

    cout << endl;
    cout << "=== Hasil ===" << endl;
    cout << "BMI Anda: " << bmi << endl;
    cout << "Kondisi: " << kondisi << endl;

    return 0;
}
