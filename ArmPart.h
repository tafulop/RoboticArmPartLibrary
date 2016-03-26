#pragma once
#include "Part.h"

namespace RoboticArm {

    class ArmPart : public Part {
    
    
    private:


    public:

        /**
         * Copy constructor.
         * @param obj
         */
        ArmPart(const ArmPart& obj);
        
        /**
         * The only invokable constructor for the class.
         * 
         * @param name
         * @param mass
         * @param length
         */
        ArmPart(std::string name, float mass, float length) 
        :
        Part(name, mass, length) 
        {}

        /* Destructor */
        ~ArmPart();

    };

}