#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "Animal.cpp"

using namespace std;

// Class Enclosure (Kandang)
class Enclosure {
private:
    string enclosureId;
    string name;
    
    // Implementasi Composition & Array of Objects (vector penampung pointer Animal)
    vector<Animal*> animals;

public:
    // Konstruktor default
    Enclosure() {

    }

    // Konstruktor dengan parameter
    Enclosure(string id, string nm) {
        this->enclosureId = id;
        this->name = nm;
    }

    // Destruktor -> Membersihkan memori dinamis untuk menjaga prinsip Composition
    ~Enclosure() {
        for (auto a : animals) {
            delete a; // Menghapus memori objek Animal yang ditampung
        }
        animals.clear(); // Mengosongkan isi vector
    }

    // Getter dan Setter untuk enclosureId
    string getEnclosureId() const { 
        return enclosureId; 
    }
    void setEnclosureId(string id) { 
        enclosureId = id; 
    }

    // Getter dan Setter untuk name
    string getName() const { 
        return name; 
    }
    void setName(string nm) { 
        name = nm; 
    }

    // Method untuk menambahkan objek Animal ke dalam Kandang
    void addAnimal(Animal* a) { 
        animals.push_back(a); 
    }

    // Getter untuk mendapatkan daftar hewan di dalam Kandang
    vector<Animal*> getAnimals() const { 
        return animals; 
    }
};