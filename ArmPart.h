#pragma once
#include "Part.h"

namespace RoboticArm {

    class ArmPart : public Part {
    private:

        /* default constructor is hidden */
        ArmPart();

    public:

        /**
         * The only invokable constructor for the class.
         * 
         * @param id
         * @param name
         * @param mass
         * @param length
         */
        ArmPart(int id, std::string name, float mass, float length) 
        :
        Part(id, name, mass, length) 
        {}

        /* Destructor */
        ~ArmPart();

    };

}