#ifndef CATBUILDER_H
#define CATBUILDER_H

#include "builder.h"
#include "creature.h"

class CatBuilder : public Builder
{
public:
    CatBuilder();
    CatBuilder(CatBuilder &catBuilder);
    ~CatBuilder();
    void addEye(QString eye);
    void addMouth(QString mouth);
    void addNose(QString nose);
    void addEar(QString ear);
    QString getResult();

private:
    Creature *creature;
};

#endif // CATBUILDER_H
