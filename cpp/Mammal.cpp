#pragma once
#include <iostream>
#include <string>
#include "Animal.cpp"

using namespace std;

// Class Mammal yang mewarisi sifat dari class Animal (Hierarchical Inheritance)
class Mammal : public Animal {
private:
    // Atribut khusus milik Mammal
    string furColor;

public:
    // Konstruktor default
    Mammal() {}

    // Konstruktor dengan parameter (memanggil konstruktor induk)
    Mammal(string id, string nm, int ag, string fur) {
        this->animalId = id;
        this->name = nm;
        this->age = ag;
        this->furColor = fur;
    }

    // Destruktor
    ~Mammal() override {}

    // Getter dan Setter untuk atribut furColor
    string getFurColor() const { return furColor; }
    void setFurColor(string fur) { furColor = fur; }

    // Overriding method displayInfo() dari superclass Animal
    void displayInfo() const override {
        cout << "[MAMALIA] ID: " << animalId 
             << " | Nama: " << name 
             << " | Umur: " << age << " Thn"
             << " | Warna Bulu: " << furColor << endl;
    }
};