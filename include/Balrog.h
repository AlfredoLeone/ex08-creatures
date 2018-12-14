//
// Created by alfredo on 12/3/18.
//

#ifndef EX08_CREATURES_BALROG_H
#define EX08_CREATURES_BALROG_H
#include<Demon.h>
#include"iostream"
#include <creature.h>
namespace edu {
    namespace vcccd {
        namespace vc {
            namespace csv13 {
                const static std::string BALROG_SPECIES = "Balrog";
                class Balrog :  public Demon {
                public:
                    Balrog (int strength, int hit): Demon(strength, hit) {}
                    int getDamage( ) const {
                        int damage = Creature::getDamage();

                        if((rand()% 100) < 5){
                            damage = damage + 50;
                            std::cout << "Demonic attack inflicts 50 " << "additional damage points!" << std::endl;
                        }
                        damage += Demon::getDamage();
                        std:: cout << "Balrog speed attack inflicts " << damage << "additional damage points!" <<std:: endl;

                        return damage;
                    }
                    virtual const std::string &getSpecies() const {
                        return BALROG_SPECIES;

            }
        };
    }
}}}

#endif //EX08_CREATURES_BALROG_H
