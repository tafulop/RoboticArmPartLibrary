#include "Joint.h"

using namespace RoboticArm;

Joint::~Joint()
{
}

Joint::Joint(int id, std::string name, float mass, float maxRadialForce, float maxAxialForce)
{

	this->id = id;
	this->name = name;
	this->mass = mass;
	this->maxAxialForce = maxAxialForce;
	this->maxRadialForce = maxRadialForce;

}








