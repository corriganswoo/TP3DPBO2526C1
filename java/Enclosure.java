import java.util.ArrayList;
import java.util.List;

// Class Enclosure (Kandang)
public class Enclosure {
    private String enclosureId;
    private String name;

    // Implementasi Composition & Array of Objects (ArrayList penampung objek Animal)
    private List<Animal> animals;

    // Konstruktor default
    public Enclosure() {
        this.animals = new ArrayList<>();
    }

    // Konstruktor dengan parameter
    public Enclosure(String enclosureId, String name) {
        this.enclosureId = enclosureId;
        this.name = name;
        this.animals = new ArrayList<>();
    }

    // Getter dan Setter untuk enclosureId
    public String getEnclosureId() {
        return enclosureId;
    }

    public void setEnclosureId(String enclosureId) {
        this.enclosureId = enclosureId;
    }

    // Getter dan Setter untuk name
    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    // Method untuk menambahkan objek Animal ke dalam Kandang
    public void addAnimal(Animal animal) {
        this.animals.add(animal);
    }

    // Getter untuk mendapatkan daftar hewan di dalam Kandang
    public List<Animal> getAnimals() {
        return animals;
    }
}