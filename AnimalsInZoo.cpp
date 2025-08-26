#include <iostream>
#include <stdlib.h>
#include "AnimalsInZoo.h"

using namespace std;

void AnimalsInZoo :: display() {
	cout << "Number of Animals: " << numAnimals << endl;
	animal.display();
}
