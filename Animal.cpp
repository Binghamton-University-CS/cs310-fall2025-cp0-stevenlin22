#include <iostream>
#include <stdlib.h>
#include "Animal.h"

using namespace std;

void Animal :: display() {
	cout << species << " [" << year_discovered << "]" << endl;
}
