// Class Bird yang mewarisi sifat dari class Animal (Hierarchical Inheritance)
public class Bird extends Animal {
    // Atribut khusus milik Bird
    private double wingspan;

    // Konstruktor default
    public Bird() {
        super();
        this.wingspan = 0.0;
    }

    // Konstruktor dengan parameter (memanggil konstruktor superclass)
    public Bird(String animalId, String name, int age, double wingspan) {
        super(animalId, name, age);
        this.wingspan = wingspan;
    }

    // Getter dan Setter untuk atribut wingspan
    public double getWingspan() {
        return wingspan;
    }

    public void setWingspan(double wingspan) {
        this.wingspan = wingspan;
    }

    // Overriding method displayInfo() dari superclass Animal
    @Override
    public void displayInfo() {
        System.out.println("[BURUNG ] ID: " + animalId 
            + " | Nama: " + name 
            + " | Umur: " + age + " Thn"
            + " | Rentang Sayap: " + wingspan + " m");
    }
}