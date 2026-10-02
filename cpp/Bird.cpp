#pragma once
#include <iostream>
#include <string>
#include "Animal.cpp"

using namespace std;

// Class Bird yang mewarisi sifat dari class Animal (Hierarchical Inheritance)
class Bird : public Animal {
private:
    // Atribut khusus milik Bird
    double wingspan;

public:
    // Konstruktor default
    Bird(){
        this->wingspan = 0.0;
    }

    // Konstruktor dengan parameter (memanggil konstruktor induk)
    Bird(string id, string nm, int ag, double ws) {
        this->animalId = id;
        this->name = nm;
        this->age = ag;
        this->wingspan = ws;
    }

    // Destruktor
    ~Bird() override {

    }

    // Getter dan Setter untuk atribut wingspan
    double getWingspan() const { 
        return wingspan; 
    }
    void setWingspan(double ws) { 
        wingspan = ws; 
    }

    // Overriding method displayInfo() dari superclass Animal
    void displayInfo() const override {
        cout << "[BURUNG ] ID: " << animalId 
             << " | Nama: " << name 
             << " | Umur: " << age << " Thn"
             << " | Rentang Sayap: " << wingspan << " m" << endl;
    }
};