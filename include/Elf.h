//
// Created by alfredo on 12/3/18.
//

#ifndef EX08_CREATURES_ELF_H
#define EX08_CREATURES_ELF_H


#include <iostream>

namespace edu {
    namespace vcccd {
        namespace vc {
            namespace csv13 {
                const static std::string ELF_SPECIES = "Elf";

                class Elf : public Creature {
                public:
                    Elf(int strength, int hit) : Creature(strength, hit) {}
                    int getDamage() {
                        int damage = Creature::getDamage();

                        if ((rand() % 10) == 0) {
                            std::cout << "Magical attack inflicts " << damage << "additional damage points!"
                                      << std::endl;
                            damage = damage * 2;
                        }
                        return damage;

                    }

                    virtual const std::string &getSpecies() const {
                        return ELF_SPECIES;
                    }
                };

            }
        }
    }
}
#endif //EX08_CREATURES_ELF_H
