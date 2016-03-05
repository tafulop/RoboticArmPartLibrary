#include "Part.h"

namespace RoboticArm {

    Part::Part() {
    }

    Part::~Part() {
    }

    int RoboticArm::Part::getId() {
        return this->id;
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