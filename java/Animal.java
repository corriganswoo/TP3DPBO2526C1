// Abstract Class Animal (Superclass)
public abstract class Animal {
    // Protected attributes agar dapat diakses oleh subclass (Mammal & Bird)
    protected String animalId;
    protected String name;
    protected int age;

    // Konstruktor default
    public Animal() {
        this.age = 0;
    }

    // Konstruktor dengan parameter
    public Animal(String animalId, String name, int age) {
        this.animalId = animalId;
        this.name = name;
        this.age = age;
    }

    // Getter dan Setter untuk atribut animalId
    public String getAnimalId() {
        return animalId;
    }

    public void setAnimalId(String animalId) {
        this.animalId = animalId;
    }

    // Getter dan Setter untuk atribut name
    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    // Getter dan Setter untuk atribut age
    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }

    // Abstract Method -> Menjadikan kelas Animal sebagai Abstract Class (Polimorfisme)
    public abstract void displayInfo();
}