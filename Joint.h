#pragma once

#include "Part.h"
#include "ArmPart.h"
#include <mutex>

namespace RoboticArm {

	class Joint : public Part
	{

	private:
		
            /* additional physical parameters */
            float maxRadialForce;
            float maxAxialForce;
            float angle;
            
            /* Multithreading */
            std::mutex angle_lock;

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
            
            /**
             * Sets the current angle for the joint.
             * @param angle the angle that must be set.
             */
            void setAngle(float angle);
            
            /**
             * Returns the current angle of the joint.
             * @return 
             */
            float getAngle();
            
            
            /* destructor */
            ~Joint();
	
	};

}
