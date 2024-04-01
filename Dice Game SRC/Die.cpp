#include "Die.h"
#include <stdlib.h>
#include <time.h>

Die::Die() {
	srand(time(NULL));
	roll();
}

Die::~Die() {

}

int Die::getFaceValue() {
	return faceValue;
}

void Die::roll() {
	faceValue = rand() % 6 + 1;
}