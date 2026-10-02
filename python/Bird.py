from Animal import Animal

# Class Bird yang mewarisi sifat dari class Animal (Hierarchical Inheritance)
class Bird(Animal):
    def __init__(self, animal_id: str, name: str, age: int, wingspan: float):
        # Memanggil konstruktor superclass Animal
        super().__init__(animal_id, name, age)
        # Private/Protected attribute khusus Bird
        self._wingspan = wingspan

    # Getter dan Setter untuk wingspan
    def get_wingspan(self) -> float:
        return self._wingspan

    def set_wingspan(self, wingspan: float):
        self._wingspan = wingspan

    # Overriding method display_info() dari superclass Animal
    def display_info(self):
        print(f"[BURUNG ] ID: {self._animal_id} | Nama: {self._name} | Umur: {self._age} Thn | Rentang Sayap: {self._wingspan} m")