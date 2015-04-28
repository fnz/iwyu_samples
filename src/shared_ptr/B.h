#pragma once

#include <memory>
class A;

class B {
public:
	B();
	void f(std::shared_ptr<A> aPtr);
};