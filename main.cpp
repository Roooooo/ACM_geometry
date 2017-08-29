#include "common.h"
#include "type.h"
#include "basic.h"

int main () {
    Point p(1,1);
    Point q(2,2);
    Point c = p + q;
    c.print();
    return 0;
}