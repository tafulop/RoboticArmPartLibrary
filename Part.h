#pragma once

#include <iostream>
#include <exception>
#include <stdexcept>      // std::invalid_argument

namespace RoboticArm {
	class Part
	{

	protected:

		/* Physical parameters */
                float length;
                float mass;
                
                /* Additional data */
                std::string name;
                int id;
                
		Part();
	        ~Part();

	public:
	
                /* Construction error codes */
                static const int INVALID_ARGUMENT = 12;
		
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
		

	};

}