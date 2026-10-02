from abc import ABC, abstractmethod

# Abstract Class Animal (Superclass)
class Animal(ABC):
    def __init__(self, animal_id: str, name: str, age: int):
        # Protected attributes 
        self._animal_id = animal_id
        self._name = name
        self._age = age

    # Getter dan Setter untuk animal_id
    def get_animal_id(self) -> str:
        return self._animal_id

    def set_animal_id(self, animal_id: str):
        self._animal_id = animal_id

    # Getter dan Setter untuk name
    def get_name(self) -> str:
        return self._name

    def set_name(self, name: str):
        self._name = name

    # Getter dan Setter untuk age
    def get_age(self) -> int:
        return self._age

    def set_age(self, age: int):
        self._age = age

    # Abstract Method -> Menjadikan kelas Animal sebagai Abstract Class (Polimorfisme)
    @abstractmethod
    def display_info(self):
        pass