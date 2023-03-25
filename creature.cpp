#include "creature.h"

Creature::Creature()
{

}

Creature::Creature(Creature &creature)
{

}

Creature::~Creature()
{

}

bool Creature::exist(){
    return this->eye != "" && this->ear != "" && this->mouth != "" && this->nose != "";
}
