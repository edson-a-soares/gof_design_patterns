#include <iostream>
#include "Iterator/CinemotionPlatform.h"

using GoF::Iterator::IMoviesIterator;
using GoF::Iterator::CinemotionPlatform;

int main(int argc, char * argv[]) {

    CinemotionPlatform * streamingPlatform = new CinemotionPlatform();
    streamingPlatform->loadCatalog();

    IMoviesIterator * iterator = nullptr;
    for ( iterator = streamingPlatform->createIterator(); !iterator->isDone(); iterator->next() ) {

        std::cout << std::endl;
        std::cout << "Title   : " << iterator->currentItem().getTitle() << std::endl;
        std::cout << "Director: " << iterator->currentItem().getDirector() << std::endl;
        std::cout << "Year    : " << iterator->currentItem().getYear() << std::endl;

    }

    return 0;

}
