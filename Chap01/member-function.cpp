#include <cstdio>
using namespace std;

// Member functions and const member functions
class A {
    int _value = 0;
public:
    void setv ( const int a ) { _value = a; };
    int getv () { return _value; };
	int getv() const {return _value; };
};

int main() {
    A a;
    a.setv(42);
    printf("a is %d\n", a.getv());
	
	const A b = a;
	printf("a is %d\n", b.getv());
    return 0;
}
