#ifndef ALIENBUILDER_H
#define ALIENBUILDER_H

#include "builder.h"
#include "creature.h"

class AlienBuilder : public Builder
{
public:
    AlienBuilder();
    AlienBuilder(AlienBuilder &alienBuilder);
    ~AlienBuilder();
    void addEye(QString eye);
    void addMouth(QString mouth);
    void addNose(QString nose);
    void addEar(QString ear);
    QString getResult();

private:
    Creature *creature;
};

#endif // ALIENBUILDER_H
