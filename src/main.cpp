#include <stdio.h>
#include "dominion/BasicTreasureMaster.h"
#include "dominion/CardFactory.h"

using namespace dominion;

void test(void) {
    BasicTreasureMaster capper("capper", 1);
    CardFactory::createInstance();
    CardFactory *factory = CardFactory::getInstance();
    factory->addCardMaster(&capper);
    Card *card = factory->createCard("capper");
    std::string str = card->getCardMaster()->toString();
    printf("%s", str.c_str());
}


int main(void) {
    test();
    return 0;
}

