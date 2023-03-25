#include "director.h"

Director::Director(Builder &builder)
{
    this->builder = &builder;
}

Director::Director(Director &director)
{

}

Director::~Director()
{

}

void Director::assemble(){
    builder->addEar("ear");
    builder->addEye("eye");
    builder->addMouth("mouth");
    builder->addNose("nose");
}
