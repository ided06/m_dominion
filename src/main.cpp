#include <stdio.h>
#include "dominion/BasicTreasureEffect.h"
#include "dominion/CardFactory.h"

using namespace dominion;

void test(void) {
    BasicTreasureEffect capper("capper", 1);
    CardFactory::createInstance();
    CardFactory *factory = CardFactory::getInstance();
    factory->addCardEffect(&capper);
    Card *card = factory->createCard("capper");
    std::string str = card->getCardEffect()->toString();
    printf("%s", str.c_str());
}


int main(void) {
    test();
    return 0;
}

