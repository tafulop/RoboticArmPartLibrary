#include "Body.h"


namespace RoboticArm {

	RoboticArm::Body::Body(int id, std::string name, float mass)
	{
		this->id = id;
		this->name = name;
		this->mass = mass;
		
	}

	RoboticArm::Body::~Body()
	{
	}



}