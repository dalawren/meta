#include "meta.h"

int main() {
    out(ARGC(x, y, z));
    out(ARGC(x));
    out(ARGC());
    MAP(out, 1, 5, 11, 13);

    int x = 0, y = 4, z = 6;
    OUT(x, y, z);

    return 0;
}

