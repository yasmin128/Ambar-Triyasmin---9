#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<string> nama, npm, tanggalLahir;
    string n, np, tl;
    int pil, h;
    char t;
    bool tes;
    do {
        cout << "====Menu Data Mahasiswa====\n";
        cout << "1. Input Data Mahasiswa\n";
        cout << "2. Lihat Data Mahasiswa\n";
        cout << "3. Hapus Data Mahasiswa\n";
        cout << "4. Exit\n";
        cout << "Masukan Nomor Pilihan (1-4) : "; cin >> pil;
        system ("cls");
        switch (pil){
        case 1:
            cin.ignore();
            cout << "Masukan Nama Mahasiswa : "; getline(cin, n);
            nama.push_back(n);
            cout << "Masukan NPM Mahasiswa : "; cin >> np;
            cin.ignore();
            npm.push_back(np);
            cout << "Masukan Tanggal Lahir : "; getline(cin, tl);
            tanggalLahir.push_back(tl);
            cout << "\nData Telah ditambahkan\n";
            cout << "Kemblai ke menu utama? (y/n) : "; cin >> t;
            cin.ignore();
            if (t == 'y' || t == 'Y'){
                tes = true;
            }else if (t == 'n' || t == 'N'){
                tes = false;
            }
            system ("cls");
            break;
        case 2:
            for (int i = 0; i < nama.size(); i++){
                    cout << "Data Mahasiswa ke- " << i+1 << endl;
                cout << "Nama : " << nama[i] << endl;
                cout << "NPM : " << npm[i] << endl;
                cout << "Tanggal Lahir : " << tanggalLahir[i] << endl;
                cout << endl;

            }
                cout << "Kemblai ke menu utama? (y/n) : "; cin >> t;
                if (t == 'y' || t == 'Y'){
                    tes = true;
                }else if (t == 'n' || t == 'N'){
                    tes = false;
                }
                system ("cls");
                break;
        case 3:
            for (int i = 0; i < nama.size(); i++){
                cout << "Data Mahasiswa ke- " << i+1 << endl;
                cout << "Nama : " << nama[i] << endl;
                cout << "NPM : " << npm[i] << endl;
                cout << "Tanggal Lahir : " << tanggalLahir[i] << endl;
                cout << endl;
            }
            cout << "\nData Mahasiswa ke berapa yang ingin dihapus? (Masukan Angka) : "; cin >> h;

            nama.erase(nama.begin()+h-1);
            npm.erase(npm.begin()+h-1);
            tanggalLahir.erase(tanggalLahir.begin()+h-1);

            cout << "\nData Mahasiswa ke- " << h << "Telah dihapus" << endl;
            cout << "\nKembali ke menu utama? (y/n) : "; cin >> t;
            if (t == 'y' || t == 'Y'){
                    tes = true;
                }else if (t == 'n' || t == 'N'){
                    tes = false;
                }
                system ("cls");
                break;
        case 4:
            tes = false;
            break;
        default:
            cout << "\nPilihan yang anda pilih tidak tersedia, Kembali ke menu utama? (y/n) : "; cin >> t;
            if (t == 'y' || t == 'Y'){
                    tes = true;
            }else if (t == 'n' || t == 'N'){
                    tes = false;
            }
            system ("cls");
            break;
            }
        }while (tes == true);
        cout << "Program selesai";
}
