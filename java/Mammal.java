// Class Mammal yang mewarisi sifat dari class Animal (Hierarchical Inheritance)
public class Mammal extends Animal {
    // Atribut khusus milik Mammal
    private String furColor;

    // Konstruktor default
    public Mammal() {
        super();
    }

    // Konstruktor dengan parameter (memanggil konstruktor superclass)
    public Mammal(String animalId, String name, int age, String furColor) {
        super(animalId, name, age);
        this.furColor = furColor;
    }

    // Getter dan Setter untuk atribut furColor
    public String getFurColor() {
        return furColor;
    }

    public void setFurColor(String furColor) {
        this.furColor = furColor;
    }

    // Overriding method displayInfo() dari superclass Animal
    @Override
    public void displayInfo() {
        System.out.println("[MAMALIA] ID: " + animalId 
            + " | Nama: " + name 
            + " | Umur: " + age + " Thn"
            + " | Warna Bulu: " + furColor);
    }
}