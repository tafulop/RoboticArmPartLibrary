#pragma once
#include "Part.h"

namespace RoboticArm {

    class ArmPart : public Part {
    
    
    private:

        
        
        

    public:
        
        /* default constructor is hidden */
        ArmPart();

        /**
         * Copy constructor.
         * @param obj
         */
        ArmPart(const ArmPart& obj);
        
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