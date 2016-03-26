#pragma once

#include <iostream>
#include <exception>
#include <stdexcept>      // std::invalid_argument

namespace RoboticArm {
    class Part
    {     
        private:
   
	protected:

            /* Physical parameters */
            float length;
            float mass;

            /* Additional data */
            std::string name;

            /**
             * Set all parameters in the class.
             * 
             * @param name
             * @param mass
             * @param length
             * @return 
             */
            Part(std::string name, float mass, float length);

            
            /* default constructor */
            Part();

	public:
		
            /**
             * Shows the name of the part.
             * @return 
             */
            std::string getName();

            /**
             * Gives the length of the part.
             * @return 
             */
            float getLength();

            /**
             * Gets the mass of the part.
             * @return 
             */
            float getMass();            
            
            /* destructor */
            ~Part();
    };

}