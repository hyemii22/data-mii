#include "ply"

int main() {
	Polynomial a, b, c;

	a.read();
	b.read();
	c.add(a, b);

	a.display("A = ");
	b.display("B = ");
	c.display("C = A + B");

	return 0;
}