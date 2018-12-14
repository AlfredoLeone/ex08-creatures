//
// Created by alfredo on 12/3/18.
//

#ifndef EX08_CREATURES_HUMAN_H
#define EX08_CREATURES_HUMAN_H
#include<Human.h>

namespace edu {
    namespace vcccd {
        namespace vc {
            namespace csv13 {
                const static std::string HUMAN_SPECIES = "Human";
                class Human : public Creature {
                public:
                    Human(int strength, int hit): Creature(strength, hit) {}

                    virtual const std::string &getSpecies() const {
                        return HUMAN_SPECIES;
                    }

                    };



            }
        }
    }
}
#endif //EX08_CREATURES_HUMAN_H
