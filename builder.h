#ifndef BUILDER_H
#define BUILDER_H

#include "QString"

class Builder
{
public:
    Builder();
    Builder(Builder &builder);
    ~Builder();
    virtual void addEye(QString eye) = 0;
    virtual void addMouth(QString mouth) = 0;
    virtual void addNose(QString nose) = 0;
    virtual void addEar(QString ear) = 0;
    virtual QString getResult() = 0;
};

#endif // BUILDER_H
