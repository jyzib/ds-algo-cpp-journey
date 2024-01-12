// #include <iostream>
// using namespace std;

// class Animal
// {
// public:
//     int age;
//     void speak()
//     {
//         cout << "speaking";
//     }
// };
// class Dog : public Animal
// {
// };

// class Germen :public Dog{

// };
// int main()
// {
//     Germen h1;
//     h1.speak();
// }
    

 #include <iostream>

// Base class
class Animal {
public:
    // Virtual function
     void makeSound() {
        std::cout << "Some generic sound" << std::endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    // Override the virtual function
    void makeSound() override {
        std::cout << "Woof!" << std::endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    // Override the virtual function
    void makeSound() override {
        std::cout << "Meow!" << std::endl;
    }
};

int main() {
    // Create objects of different derived classes
    Animal *animal1 = new Dog();
    Animal *animal2 = new Cat();

    // Call the virtual function
    animal1->makeSound(); // Output: Woof!
    animal2->makeSound(); // Output: Meow!

    delete animal1;
    delete animal2;

    return 0;
}
   