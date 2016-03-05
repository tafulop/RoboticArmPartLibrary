#include "Effector.h"

using namespace RoboticArm;

Effector::Effector(int id, std::string name, float mass)
{
	this->name = name;
	this->mass = mass;
	this->id = id;

}

Effector::~Effector()
{
}
