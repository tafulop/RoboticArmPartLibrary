/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   EffectorTest.cpp
 * Author: fulop
 *
 * Created on Mar 6, 2016, 10:11:17 AM
 */

#include "EffectorTest.h"


CPPUNIT_TEST_SUITE_REGISTRATION(EffectorTest);

EffectorTest::EffectorTest() {
}

EffectorTest::~EffectorTest() {
}

void EffectorTest::setUp() {
}

void EffectorTest::tearDown() {
}

/* normal construction test */
void EffectorTest::normalConstruction() {

    int id = 1;
    std::string name = "test";
    float mass = 2;
    float length = 3;

    using namespace RoboticArm;

    Effector createdPart = Effector(id, name, mass, length);

    if (createdPart.getId() == id && createdPart.getName() == name &&
            createdPart.getLength() == length && createdPart.getMass() == mass) {
        CPPUNIT_ASSERT(true);
    } else {
        CPPUNIT_ASSERT(false);
    }

}

/* wrong arguments test */
void EffectorTest::wrongId() {

    bool success = false;

    int id = -1;
    std::string name = "test";
    float mass = 1;
    float length = 2;

    using namespace RoboticArm;

    try {
        Effector createdPart = Effector(id, name, mass, length);
    } catch (const std::invalid_argument& ia) {
        success = true;
    }

    CPPUNIT_ASSERT(success);

}

/* invalid name */
void EffectorTest::wrongName() {


    bool success = false;

    int id = -1;
    std::string name = "";
    float mass = 1;
    float length = 2;

    using namespace RoboticArm;

    try {
        Effector createdPart = Effector(id, name, mass, length);
    } catch (const std::invalid_argument& ia) {
        success = true;
    }

    CPPUNIT_ASSERT(success);

}

/* invalid mass */
void EffectorTest::wrongMass() {


    bool success = false;

    int id = -1;
    std::string name = "test";
    float mass = -1;
    float length = 2;

    using namespace RoboticArm;

    try {
        Effector createdPart = Effector(id, name, mass, length);
    } catch (const std::invalid_argument& ia) {
        success = true;
    }

    CPPUNIT_ASSERT(success);

}

/* invalid length */
void EffectorTest::wrongLength() {

    bool success = false;

    int id = -1;
    std::string name = "test";
    float mass = 2;
    float length = -1;

    using namespace RoboticArm;

    try {
        Effector createdPart = Effector(id, name, mass, length);
    } catch (const std::invalid_argument& ia) {
        success = true;
    }

    CPPUNIT_ASSERT(success);

}

