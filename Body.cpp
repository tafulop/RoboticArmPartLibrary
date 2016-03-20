#include "Body.h"


namespace RoboticArm {

    /* default constructor */
    RoboticArm::Body::Body(){}

    /* destructor */
    RoboticArm::Body::~Body(){}

    /* copy constructor */
    RoboticArm::Body::Body(const Body& obj){
        this->id = obj.id;
        this->length = obj.length;
        this->mass = obj.mass;
        this->name = obj.name;
    }

}