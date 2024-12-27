#include <iostream>
using namespace std;

int main() {
    float jamKerja, tarifPerJam, gaji, gajiLembur;
    
    cout << "Masukkan jumlah jam kerja: ";
    cin >> jamKerja;
    
    cout << "Masukkan tarif per jam: ";
    cin >> tarifPerJam;
    
    if (jamKerja > 40) {
        gajiLembur = (jamKerja - 40) * tarifPerJam * 1.5;
        gaji = 40 * tarifPerJam + gajiLembur;
    } else {

        gaji = jamKerja * tarifPerJam;
    }

    cout << "Gaji karyawan: Rp " << gaji << endl;
    return 0;
}
