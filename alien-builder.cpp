#include "alien-builder.h"

AlienBuilder::AlienBuilder()
{
    this->creature = new Creature();
}

AlienBuilder::AlienBuilder(AlienBuilder &alienBuilder)
{
}

AlienBuilder::~AlienBuilder()
{
}

void AlienBuilder::addEye(QString eye){
    this->creature->eye = eye;
}

void AlienBuilder::addMouth(QString mouth){
    this->creature->mouth = mouth;
}

void AlienBuilder::addEar(QString ear){
    this->creature->ear = ear;
}

void AlienBuilder::addNose(QString nose){
    this->creature->nose = nose;
}

QString AlienBuilder::getResult(){
    if(this->creature->exist()){
        return "alien.png";
    }

    return "";
}
