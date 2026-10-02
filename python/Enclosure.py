from Animal import Animal

# Class Enclosure (Kandang)
class Enclosure:
    def __init__(self, enclosure_id: str, name: str):
        self._enclosure_id = enclosure_id
        self._name = name
        # Implementasi Composition & List of Objects
        self._animals = []

    # Getter dan Setter untuk enclosure_id
    def get_enclosure_id(self) -> str:
        return self._enclosure_id

    def set_enclosure_id(self, enclosure_id: str):
        self._enclosure_id = enclosure_id

    # Getter dan Setter untuk name
    def get_name(self) -> str:
        return self._name

    def set_name(self, name: str):
        self._name = name

    # Method untuk menambahkan objek Animal ke dalam Kandang
    def add_animal(self, animal: Animal):
        self._animals.append(animal)

    # Getter untuk mendapatkan daftar hewan di dalam Kandang
    def get_animals(self) -> list:
        return self._animals