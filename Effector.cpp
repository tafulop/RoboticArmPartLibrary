#include "Effector.h"

using namespace RoboticArm;

/* default constructor */
Effector::Effector(){}

/* destructor */
Effector::~Effector(){}

/* copy constructor */
Effector::Effector(const Effector& obj){
    this->length = obj.length;
    this->mass = obj.mass;
    this->name = obj.name;
}