import java.util.ArrayList;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        // 1. Instansiasi objek Kandang (Enclosure)
        Enclosure enc1 = new Enclosure("E001", "Area Mammalia Safari");
        Enclosure enc2 = new Enclosure("E002", "Area Aviary Burung");

        // 2. Instansiasi objek Hewan (Hardcode Data)
        Animal a1 = new Mammal("M001", "Singa", 5, "Cokelat Keemasan");
        Animal a2 = new Bird("B001", "Elang Jawa", 3, 2.1);
        Animal a3 = new Mammal("M002", "Harimau Sumatra", 4, "Oranye Bergaris");
        Animal a4 = new Bird("B002", "Kakatua", 2, 0.8);

        // 3. Memasukkan hewan ke dalam kandang masing-masing (Composition)
        enc1.addAnimal(a1);
        enc2.addAnimal(a2);
        enc1.addAnimal(a3);
        enc2.addAnimal(a4);

        // 4. Memasukkan objek ke dalam List kumpulan sistem (Array of Objects)
        List<Animal> animals = new ArrayList<>();
        animals.add(a1);
        animals.add(a2);
        animals.add(a3);
        animals.add(a4);

        List<Enclosure> enclosures = new ArrayList<>();
        enclosures.add(enc1);
        enclosures.add(enc2);

        // Header tampilan output
        System.out.println("==========================================================");
        System.out.println("                    INFORMASI SISTEM                      ");
        System.out.println("==========================================================\n");

        // Menampilkan daftar seluruh hewan terdaftar
        System.out.println("[+] DAFTAR SELURUH HEWAN");
        System.out.println("----------------------------------------------------------");
        if (animals.isEmpty()) {
            System.out.println("  (Tidak ada data hewan)");
        } else {
            for (Animal a : animals) {
                System.out.print("  • ");
                a.displayInfo(); // Polymorphic call
            }
        }
        System.out.println();

        // Menampilkan daftar kandang beserta penghuninya
        System.out.println("[+] DAFTAR KANDANG & PENGHUNI");
        System.out.println("----------------------------------------------------------");
        if (enclosures.isEmpty()) {
            System.out.println("  (Tidak ada data kandang)");
        } else {
            for (Enclosure enc : enclosures) {
                System.out.println("  - Kandang ID : " + enc.getEnclosureId());
                System.out.println("    Nama Area  : " + enc.getName());
                System.out.println("    Penghuni   :");
                if (enc.getAnimals().isEmpty()) {
                    System.out.println("    * (Kandang masih kosong)");
                } else {
                    for (Animal a : enc.getAnimals()) {
                        System.out.print("    * ");
                        a.displayInfo(); // Polymorphic call
                    }
                }
                System.out.println();
            }
        }
    }
}