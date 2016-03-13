#pragma once
#include "Part.h"


namespace RoboticArm{

    class Body : public Part
    {


    private:
        Body();


    public:
        ~Body();

    /**
     * The parameterized constructor for the class.
     * 
     * @param 
     * @param 
     * @param 
     * @param 
     * @return 
     */
    Body(int id, std::string name, float mass, float length)
    :
    Part(id, name, mass, length) 
    {}
    };

}