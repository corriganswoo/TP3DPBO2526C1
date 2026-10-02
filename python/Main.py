from Mammal import Mammal
from Bird import Bird
from Enclosure import Enclosure

def main():
    # 1. Instansiasi objek Kandang (Enclosure)
    enc1 = Enclosure("E001", "Area Mammalia Safari")
    enc2 = Enclosure("E002", "Area Aviary Burung")

    # 2. Instansiasi objek Hewan secara dinamis (Hardcode Data)
    a1 = Mammal("M001", "Singa", 5, "Cokelat Keemasan")
    a2 = Bird("B001", "Elang Jawa", 3, 2.1)
    a3 = Mammal("M002", "Harimau Sumatra", 4, "Oranye Bergaris")
    a4 = Bird("B002", "Kakatua", 2, 0.8)

    # 3. Memasukkan hewan ke dalam kandang masing-masing (Composition)
    enc1.add_animal(a1)
    enc2.add_animal(a2)
    enc1.add_animal(a3)
    enc2.add_animal(a4)

    # 4. Memasukkan objek ke dalam list kumpulan sistem (List of Objects)
    animals = [a1, a2, a3, a4]
    enclosures = [enc1, enc2]

    # Header tampilan output
    print("==========================================================")
    print("                    INFORMASI SISTEM                      ")
    print("==========================================================")
    print()

    # Menampilkan daftar seluruh hewan terdaftar
    print("[+] DAFTAR SELURUH HEWAN")
    print("----------------------------------------------------------")
    if not animals:
        print("  (Tidak ada data hewan)")
    else:
        for a in animals:
            print("  • ", end="")
            a.display_info()  # Polymorphic call
    print()

    # Menampilkan daftar kandang beserta penghuninya
    print("[+] DAFTAR KANDANG & PENGHUNI")
    print("----------------------------------------------------------")
    if not enclosures:
        print("  (Tidak ada data kandang)")
    else:
        for enc in enclosures:
            print(f"  - Kandang ID : {enc.get_enclosure_id()}")
            print(f"    Nama Area  : {enc.get_name()}")
            print("    Penghuni   :")
            if not enc.get_animals():
                print("    * (Kandang masih kosong)")
            else:
                for a in enc.get_animals():
                    print("    * ", end="")
                    a.display_info()  # Polymorphic call
            print()

if __name__ == "__main__":
    main()