#ifndef CREATURE_H
#define CREATURE_H

#include <QString>

class Creature
{
public:
    Creature();
    Creature(Creature &creature);
    ~Creature();
    bool exist();
    QString eye;
    QString mouth;
    QString nose;
    QString ear;
};

#endif // CREATURE_H
