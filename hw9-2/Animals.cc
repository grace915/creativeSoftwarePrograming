#include "Animals.h"

Animal::Animal(string name, int age) {
	this->name = name;
	this->age = age;
}
Zebra::Zebra(string name, int age, int numStripes) :Animal(name, age) {
	
	this->numStripes = numStripes;
}
Cat::Cat(string name, int age, string favoriteToy):Animal(name, age){
	this->favoriteToy = favoriteToy;


}

void Zebra::printInfo() {
	cout << "Zebra, Name: " << name << ", Age: " << age << ", Number of stripes: " << numStripes << endl;

}

void Cat::printInfo() {
	cout << "Cat, Name: " << name << ", Age: " << age << ", Favorite toy: " << favoriteToy << endl;

}

