#include "Flyweight/Point.h"
#include "Flyweight/ItemType.h"
#include "Flyweight/ItemFactory.h"

using GoF::Flyweight::Point;
using GoF::Flyweight::ItemType;
using GoF::Flyweight::ItemFactory;
using GoF::Flyweight::IItemFlyweight;

int main(int argc, char * argv[]) {

    ItemFactory factory = ItemFactory();

    factory.getFlyweight(ItemType::PLAYER)->display(Point(5, 5));

    factory.getFlyweight(ItemType::MONSTER)->display(Point(10, 5));
    factory.getFlyweight(ItemType::MONSTER)->display(Point(15, 5));
    factory.getFlyweight(ItemType::MONSTER)->display(Point(20, 5));

    factory.getFlyweight(ItemType::BUBBLE)->display(Point(15, 10));
    factory.getFlyweight(ItemType::BUBBLE)->display(Point(100, 25));

    factory.getFlyweight(ItemType::MAD_DOG)->display(Point(25, 25));
    factory.getFlyweight(ItemType::MAD_DOG)->display(Point(50, 25));

    factory.getFlyweight(ItemType::LAND_MINE)->display(Point(100, 10));

    factory.getFlyweight(ItemType::LEGO)->display(Point(8, 35));

    return 0;

}
