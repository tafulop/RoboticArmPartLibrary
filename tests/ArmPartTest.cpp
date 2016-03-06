/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   newtestclass1.cpp
 * Author: fulop
 *
 * Created on Mar 5, 2016, 10:25:14 AM
 */

#include "ArmPartTest.h"


CPPUNIT_TEST_SUITE_REGISTRATION(ArmPartTest);

ArmPartTest::ArmPartTest() {
}

ArmPartTest::~ArmPartTest() {
}

void ArmPartTest::setUp() {
}

void ArmPartTest::tearDown() {
}

/**
 * Constructor test normal
 */
void ArmPartTest::normalConstruct() {

    int id = 1;
    std::string name = "test";
    float mass = 2;
    float length = 3;

    using namespace RoboticArm;

    ArmPart createdPart = ArmPart(id, name, mass, length);

    if (createdPart.getId() == id && createdPart.getName() == name &&
            createdPart.getLength() == length && createdPart.getMass() == mass) {
        CPPUNIT_ASSERT(true);
    } else {
        CPPUNIT_ASSERT(false);
    }

}

/**
 * Wrong Id as argument.
 */
void ArmPartTest::wrongIdAsArgument() {

    bool success = false;

    int id = -1;
    std::string name = "test";
    float mass = 1;
    float length = 2;

    using namespace RoboticArm;

    try {
        ArmPart createdPart = ArmPart(id, name, mass, length);
    } catch (const std::invalid_argument& ia) {
        success = true;
    }

    CPPUNIT_ASSERT(success);

}

void ArmPartTest::wrongMassAsArgument() {

    bool success = false;

    int id = 1;
    std::string name = "test";
    float mass = -1;
    float length = 2;

    using namespace RoboticArm;

    try {
        ArmPart createdPart = ArmPart(id, name, mass, length);
    } catch (const std::invalid_argument& ia) {
        success = true;
    }

    CPPUNIT_ASSERT(success);

}

void ArmPartTest::wrongNameAsArgument() {

    bool success = false;

    int id = 1;
    std::string name = "";
    float mass = 1;
    float length = 2;

    using namespace RoboticArm;

    try {
        ArmPart createdPart = ArmPart(id, name, mass, length);
    } catch (const std::invalid_argument& ia) {
        success = true;
    }

    CPPUNIT_ASSERT(success);

}

void ArmPartTest::wrongLengthAsArgument() {

    bool success = false;

    int id = 1;
    std::string name = "test";
    float mass = 1;
    float length = -1;

    using namespace RoboticArm;

    try {
        ArmPart createdPart = ArmPart(id, name, mass, length);
    } catch (const std::invalid_argument& ia) {
        success = true;
    }

    CPPUNIT_ASSERT(success);

}