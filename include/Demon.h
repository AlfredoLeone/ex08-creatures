//
// Created by alfredo on 12/4/18.
//

#ifndef EX08_CREATURES_DEMON_H
#define EX08_CREATURES_DEMON_H
#include<creature.h>



namespace edu {
    namespace vcccd {
        namespace vc {
            namespace csv13 {
                class Demon : public Creature {
                public:
                    Demon(int strength, int hit): Creature(strength, hit) {}
                int getDamage( ) const {
                    int damage = Creature::getDamage();
                    return damage;
                }




            };
        }
    }
}
}
#include<Cyberdemon.h>
#include<Balrog.h>

#endif //EX08_CREATURES_DEMON_H
