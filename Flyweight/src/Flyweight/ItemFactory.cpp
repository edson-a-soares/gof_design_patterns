#include "Flyweight/Lego.h"
#include "Flyweight/Enemy.h"
#include "Flyweight/Player.h"
#include "Flyweight/LandMine.h"
#include "Flyweight/ItemFactory.h"

namespace GoF {

    namespace Flyweight {

        ItemFactory::~ItemFactory()
        {
            flyweights.erase(flyweights.begin(), flyweights.end());
            flyweights.clear();
        }

        IItemFlyweight * ItemFactory::getFlyweight(ItemType type)
        {
            if ( flyweights.find(type) == flyweights.end() ) {
                flyweights[type] = createFlyweight(type);
            }
            return flyweights.find(type)->second;
        }

        IItemFlyweight * ItemFactory::createFlyweight(ItemType type)
        {

            IItemFlyweight * flyweight = nullptr;
            switch (type) {

                case ItemType::LAND_MINE:
                    flyweight = new LandMine();
                    break;

                case ItemType::MONSTER:
                    flyweight = new Enemy('%');
                    break;

                case ItemType::BUBBLE:
                    flyweight = new Enemy('_');
                    break;

                case ItemType::MAD_DOG:
                    flyweight = new Enemy('$');
                    break;

                case ItemType::PLAYER:
                    flyweight = new Player();
                    break;

                case ItemType::LEGO:
                    flyweight = new Lego();
                    break;

            }

            return flyweight;

        }

    }

}
