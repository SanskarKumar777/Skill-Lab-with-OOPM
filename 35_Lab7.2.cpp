CODE 7.2

#include <iostream>
class A {
private:
	int a;

public:
	A() { a = 18; }
	friend class B; 
};

class B {
private:
	int b;

public:
	void showA (A &x)
	{
		std::cout << "A::a=" << x.a;
	}
};

int main()
{
	A a;
	B b;
	b.showA(a);
	return 0;
}
