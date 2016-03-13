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
            int id;

            /**
             * Set all parameters in the class.
             * 
             * @param id
             * @param name
             * @param mass
             * @param length
             * @return 
             */
            Part(int id, std::string name, float mass, float length);

            
            /* default constructor */
            Part();

	public:
		
            /**
             * Shows the name of the part.
             * @return 
             */
            std::string getName();

            /**
             * Shows the ID of the part.
             * @return 
             */
            int getId();

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