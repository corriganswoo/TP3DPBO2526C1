#include <iostream>
#include <string>
#include <vector>

// Direct include file kelas C++
#include "Mammal.cpp"
#include "Bird.cpp"
#include "Enclosure.cpp"

using namespace std;

int main() {
    // 1. Instansiasi objek Kandang (Enclosure)
    Enclosure enc1("E001", "Area Mammalia Safari");
    Enclosure enc2("E002", "Area Aviary Burung");

    // 2. Instansiasi objek Hewan
    Animal* a1 = new Mammal("M001", "Singa", 5, "Cokelat Keemasan");
    Animal* a2 = new Bird("B001", "Elang Jawa", 3, 2.1);
    Animal* a3 = new Mammal("M002", "Harimau Sumatra", 4, "Oranye Bergaris");
    Animal* a4 = new Bird("B002", "Kakatua", 2, 0.8);

    // 3. Memasukkan hewan ke dalam kandang masing-masing (Composition)
    enc1.addAnimal(a1);
    enc2.addAnimal(a2);
    enc1.addAnimal(a3);
    enc2.addAnimal(a4);

    // 4. Memasukkan objek ke dalam vector kumpulan sistem (Array of Objects)
    vector<Animal*> animals = {a1, a2, a3, a4};
    vector<Enclosure*> enclosures = {&enc1, &enc2};

    // Header tampilan output
    cout << "==========================================================" << endl;
    cout << "                    INFORMASI SISTEM                      " << endl;
    cout << "==========================================================" << endl << endl;

    // Menampilkan daftar seluruh hewan terdaftar
    cout << "[+] DAFTAR SELURUH HEWAN" << endl;
    cout << "----------------------------------------------------------" << endl;
    if (animals.empty()) {
        cout << "  (Tidak ada data hewan)" << endl;
    } else {
        for (auto a : animals) {
            a->displayInfo(); // Polymorphic call
        }
    }
    cout << endl;

    // Menampilkan daftar kandang beserta penghuninya
    cout << "[+] DAFTAR KANDANG & PENGHUNI" << endl;
    cout << "----------------------------------------------------------" << endl;
    if (enclosures.empty()) {
        cout << "  (Tidak ada data kandang)" << endl;
    } else {
        for (const auto enc : enclosures) {
            cout << "  - Kandang ID : " << enc->getEnclosureId() << endl;
            cout << "    Nama Area  : " << enc->getName() << endl;
            cout << "    Penghuni   :" << endl;
            if (enc->getAnimals().empty()) {
                cout << "    * (Kandang masih kosong)" << endl;
            } else {
                for (const auto a : enc->getAnimals()) {
                    cout << "    * ";
                    a->displayInfo(); // Polymorphic call
                }
            }
            cout << endl;
        }
    }

    return 0;
}