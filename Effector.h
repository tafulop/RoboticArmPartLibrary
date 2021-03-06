#pragma once
#include "Part.h"
namespace RoboticArm {

	class Effector :  public Part
	{	

	private:
            /* default constructor */    
            Effector();
                
	public:
            
            /**
             * Copy constructor.
             * @param obj
             */
            Effector(const Effector& obj);
            
            /**
             * Parameterized constructor for the class.
             * 
             * @param id
             * @param name
             * @param mass
             * @param length
             */
            Effector(std::string name, float mass, float length) 
                    :
            Part(name, mass, length){};
	
            /* destructor */
            ~Effector();
	};

}