#pragma once

#include "Part.h"
#include "ArmPart.h"

namespace RoboticArm {

	class Joint : public Part
	{

	private:
		
            /* additional physical parameters */
            float maxRadialForce;
            float maxAxialForce;
            float angle;

            /* default constructor */
            Joint();
            
	public:
            
            /**
             * Parameterized constructor for the class.
             * 
             * @param id
             * @param name
             * @param mass
             * @param maxRadialForce
             * @param maxAxialForce
             */
            Joint(int id, std::string name, float mass, float length)
            :
            Part(id, name, mass, length){};
            
            /* destructor */
            ~Joint();
	
	};

}
