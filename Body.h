#pragma once
#include "Part.h"


namespace RoboticArm{

    class Body : public Part
    {


    private:
        Body();


    public:
        ~Body();
        
        Body(const Body& obj);

    /**
     * The parameterized constructor for the class.
     * 
     * @param 
     * @param 
     * @param 
     * @param 
     * @return 
     */
    Body(std::string name, float mass, float length)
    :
    Part(name, mass, length) 
    {}
    };

}