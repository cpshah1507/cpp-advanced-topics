#include <cstdio>
using namespace std;

// a very simple class
class cl {
    int i = 0;
public:
    void setvalue( const int &);
    int getvalue() const;
};

void cl::setvalue(const int& value) { i = value; }
int cl::getvalue() const { return i; }

int main() {
    const int i = 47;
    cl o1;
    o1.setvalue(i);
    printf("value is %d\n", o1.getvalue());
    return 0;
}
