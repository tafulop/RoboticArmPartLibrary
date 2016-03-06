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
             * Parameterized constructor for the class.
             * 
             * @param id
             * @param name
             * @param mass
             * @param length
             */
            Effector(int id, std::string name, float mass, float length) 
                    :
            Part(id, name, mass, length){};
	
            /* destructor */
            ~Effector();
	};

}