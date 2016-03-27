#include "Joint.h"

using namespace RoboticArm;

/* destructor */
Joint::~Joint(){}

/* constructor */
Joint::Joint(){}

/* Copy constructor */
Joint::Joint(const Joint& obj){
    this->length = obj.length;
    this->mass = obj.mass;
    this->name = obj.name;
    this->angle = obj.angle;
    this->maxAxialForce = obj.maxAxialForce;
    this->maxRadialForce = obj.maxRadialForce;
}

/* sets the angle */
void Joint::setAngle(float angle){
    
    this->angle_lock.lock();
    
    this->angle = angle;
    
    this->angle_lock.unlock();
  
}

/* reads the current angle and returns it */
float Joint::getAngle(){ 
    
    float temp;
    
    this->angle_lock.lock();
    
    temp = this->angle;
    
    this->angle_lock.unlock();
    
    return temp;
}