#include <iostream>
#include <stdlib.h>
#include "Animal.h"

using namespace std;

class AnimalsInZoo {
	private:
		int numAnimals;
		Animal animal;
	public:
		AnimalsInZoo(Animal newanimal){
			animal = newanimal;
			numAnimals = 1;
		}
		AnimalsInZoo() : numAnimals(0) {};
		
		void display();

};
