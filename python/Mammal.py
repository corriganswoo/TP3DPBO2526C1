from Animal import Animal

# Class Mammal yang mewarisi sifat dari class Animal (Hierarchical Inheritance)
class Mammal(Animal):
    def __init__(self, animal_id: str, name: str, age: int, fur_color: str):
        # Memanggil konstruktor superclass Animal
        super().__init__(animal_id, name, age)
        # Private/Protected attribute khusus Mammal
        self._fur_color = fur_color

    # Getter dan Setter untuk fur_color
    def get_fur_color(self) -> str:
        return self._fur_color

    def set_fur_color(self, fur_color: str):
        self._fur_color = fur_color

    # Overriding method display_info() dari superclass Animal
    def display_info(self):
        print(f"[MAMALIA] ID: {self._animal_id} | Nama: {self._name} | Umur: {self._age} Thn | Warna Bulu: {self._fur_color}")