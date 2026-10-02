#pragma once // Mencegah multiple inclusion file header
#include <string>
#include <iostream>

using namespace std;

// Abstract Class Animal (Superclass)
class Animal {
protected:
    // Atribut yang dapat diakses oleh kelas turunan (subclass)
    string animalId;
    string name;
    int age;

public:
    // Konstruktor default
    Animal() : age(0) {

    }

    // Konstruktor dengan parameter
    Animal(string id, string nm, int ag) {
        this->animalId = id;
        this->name = nm;
        this->age = ag;
    }

    // Destruktor virtual untuk manajemen memori objek turunan
    virtual ~Animal() {

    }

    // Getter dan Setter untuk atribut animalId
    string getAnimalId() const { 
        return animalId; 
    }
    void setAnimalId(string id) { 
        animalId = id; 
    }

    // Getter dan Setter untuk atribut name
    string getName() const { 
        return name; 
    }
    void setName(string nm) { 
        name = nm; 
    }

    // Getter dan Setter untuk atribut age
    int getAge() const { 
        return age; 
    }
    void setAge(int ag) { 
        age = ag; 
    }

    // Pure Virtual Function -> Menjadikan kelas Animal sebagai Abstract Class (Polimorfisme)
    virtual void displayInfo() const = 0;
};