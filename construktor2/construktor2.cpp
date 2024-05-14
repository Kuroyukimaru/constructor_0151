#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
private:
    int nim;
    string nama;

public:
    Mahasiswa() {
        nim = 151;
        nama = "";
    }

    Mahasiswa(int a) {
        nim = a;
    }
    Mahasiswa(string iNama);
    Mahasiswa(int iNim, string iNama);
    void cetak();
};