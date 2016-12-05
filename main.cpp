#include <iostream>
#include "Museum.h"

int main() {
    Museum museum("Name", "Exposure", 98.0);
    std::cout << museum << std::endl;

    Museum *museum1 = new Museum;
    museum1->setName("Name1");
    museum1->setExposure("Exposure1");
    museum1->setCost(83.873);

    std::cout << *museum1 << std::endl;
    return 0;
}