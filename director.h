#ifndef DIRECTOR_H
#define DIRECTOR_H

#include "builder.h"

class Director
{
public:
    Director(Builder &builder);
    Director(Director &director);
    ~Director();
    void assemble();

private:
    Builder *builder;
};

#endif // DIRECTOR_H
