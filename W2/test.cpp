#include <iostream>

class Animal {
    private:
        int food;
        int weight;

    public:
        void set_animal(int _food, int _weight) {
            food = _food;
            weight = _weight;
        }

        void print_animal() {
            std::cout << "food: "<< food << " weight: " << weight;
        }
};

int main() {
    Animal animal;
    
    animal.set_animal(300, 500);
    animal.print_animal();

    return 0;
}