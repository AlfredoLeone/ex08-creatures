
#ifndef CREATURE_CREATURE_H
#define CREATURE_CREATURE_H
#include <cstdint>
#include <string>

namespace edu {
    namespace vcccd {
        namespace vc {
            namespace csv13 {

                class Creature
                {
                protected:
                    static constexpr uint32_t DEFAULT_HIT_POINTS = 10;
                    static constexpr uint32_t DEFAULT_STRENGTH = 10;

                private:
                    int strength;
                    int hitpoints;

                protected:
                    int getStrength() const { return strength; }
                    int getHitPoints() const { return hitpoints; }

                    void setStrength(int strength) { this->strength = strength; }
                    void setHitPoints(int points) { hitpoints = points; }

                public:

                    Creature( ): strength(DEFAULT_STRENGTH), hitpoints(DEFAULT_HIT_POINTS) {}


                    Creature(int newStrength, int newHit): strength(newStrength), hitpoints(newHit) {}


                    virtual int getDamage() const;


                    virtual const std::string &getSpecies() const = 0;
                };


            }
        }
    }
}

#include<Demon.h>

#include<Elf.h>
#include<Human.h>

#endif