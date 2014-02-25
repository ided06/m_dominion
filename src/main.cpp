#include <stdio.h>
#include "dominion/BasicTreasureEffect.h"

using namespace dominion;

void test(void) {
    BasicTreasureEffect bte("capper", 1);
    std::string str = bte.toString();
    printf("%s\n", str.c_str());
}


int main(void) {
    test();
    return 0;
}

