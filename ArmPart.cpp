#include "ArmPart.h"

using namespace RoboticArm;

ArmPart::~ArmPart() {
}

/**
 * The only invokable for the class. 
 * 
 * @param id
 * @param name
 * @param mass
 * @param length
 */
ArmPart::ArmPart(int id, std::string name, float mass, float length) {
    
    /* Check arguments */
    if(id <= 0) throw std::invalid_argument("ID must be greater than 0.");
    if(name == "") throw std::invalid_argument("Name argument is empty");
    if(mass <= 0) throw std::invalid_argument("Mass must be greater than 0.");
    if(length <= 0) throw std::invalid_argument("Length must be greater than 0.");
    
    this->length = length;
    this->id = id;
    this->name = name;
    this->mass = mass;
}
