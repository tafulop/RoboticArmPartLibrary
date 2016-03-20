#include "ArmPart.h"

using namespace RoboticArm;

ArmPart::~ArmPart() {
}

/* copy constructor */
ArmPart::ArmPart(const ArmPart& obj){
    this->id = obj.id;
    this->length = obj.length;
    this->mass = obj.mass;
    this->name = obj.name;
    
}
