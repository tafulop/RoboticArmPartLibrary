#include "Part.h"

namespace RoboticArm {
    
    /* Default constructor */
    Part::Part() {}

    /* destructor */
    Part::~Part() {}

    /* Parameterized constructor */
    Part::Part(std::string name, float mass, float length) {

        /* Check arguments */
        if (name == "") throw std::invalid_argument("Name argument is empty");
        if (mass <= 0) throw std::invalid_argument("Mass must be greater than 0.");
        if (length <= 0) throw std::invalid_argument("Length must be greater than 0.");

        this->name = name;
        this->mass = mass;
        this->length = length;

    }

    float RoboticArm::Part::getMass() {
        return this->mass;
    }

    float RoboticArm::Part::getLength() {
        return this->length;
    }

    std::string RoboticArm::Part::getName() {
        return this->name;
    }

}