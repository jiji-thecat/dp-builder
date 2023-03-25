#include "cat-builder.h"

CatBuilder::CatBuilder()
{
    this->creature = new Creature();
}

CatBuilder::CatBuilder(CatBuilder &catBuilder)
{
}

CatBuilder::~CatBuilder()
{
}

void CatBuilder::addEye(QString eye){
    this->creature->eye = eye;
}

void CatBuilder::addMouth(QString mouth){
    this->creature->mouth = mouth;
}

void CatBuilder::addEar(QString ear){
    this->creature->ear = ear;
}

void CatBuilder::addNose(QString nose){
    this->creature->nose = nose;
}

QString CatBuilder::getResult(){
    if(this->creature->exist()){
        return "cat.png";
    }

    return "";
}
