#include <iostream>
using namespace std;

int main() {
    const int ns = 9; //ns= Nomor Surat
    string surat[ns+1] = {"001", "005", "007", "010", "013", "002", "004", "006", "008"}; 
    string target;
    int i = 0; 
    int flag = 0;

    cout << "Pencarian Nomor Surat\n";
    cout << "=====================\n";
    cout << "Masukkan nomor surat yang ingin dicari: ";
    cin >> target;

    surat[ns] = target;

    while (surat[i] != target) {
        i++;
    }
    if (i < ns) {
        flag = 1;
    }

    if (flag == 1) {
        cout << "Nomor surat " << target << " ditemukan pada indeks ke-" << i << endl;
    } else {
        cout << "Nomor surat " << target << " tidak ditemukan." << endl;
    }

    return 0;
}