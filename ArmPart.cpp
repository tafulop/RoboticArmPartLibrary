#include "ArmPart.h"

using namespace RoboticArm;

ArmPart::~ArmPart() {
}

/* copy constructor */
ArmPart::ArmPart(const ArmPart& obj){
    this->length = obj.length;
    this->mass = obj.mass;
    this->name = obj.name;
    
}
