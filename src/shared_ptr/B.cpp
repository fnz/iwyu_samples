#include "A.h"
#include "B.h"
#include <iostream>

B::B() {
	std::cout << "B" << std::endl;
}

void B::f(std::shared_ptr<A> aPtr) {
	std::cout << aPtr->x;
}