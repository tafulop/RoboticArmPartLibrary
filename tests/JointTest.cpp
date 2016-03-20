/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   JointTest.cpp
 * Author: fulop
 *
 * Created on Mar 6, 2016, 10:21:13 AM
 */

#include "JointTest.h"


CPPUNIT_TEST_SUITE_REGISTRATION(JointTest);

JointTest::JointTest() {
}

JointTest::~JointTest() {
}

void JointTest::setUp() {
}

void JointTest::tearDown() {
}

/* normal construction test */
void JointTest::normalConstruction() {

    int id = 1;
    std::string name = "test";
    float mass = 2;
    float length = 3;

    using namespace RoboticArm;

    Joint createdPart = Joint(id, name, mass, length);

    if (createdPart.getId() == id && createdPart.getName() == name &&
            createdPart.getLength() == length && createdPart.getMass() == mass) {
        CPPUNIT_ASSERT(true);
    } else {
        CPPUNIT_ASSERT(false);
    }

}

/* wrong arguments test */
void JointTest::wrongId() {

    bool success = false;

    int id = -1;
    std::string name = "test";
    float mass = 1;
    float length = 2;

    using namespace RoboticArm;

    try {
        Joint createdPart = Joint(id, name, mass, length);
    } catch (const std::invalid_argument& ia) {
        success = true;
    }

    CPPUNIT_ASSERT(success);

}

/* invalid name */
void JointTest::wrongName() {


    bool success = false;

    int id = -1;
    std::string name = "";
    float mass = 1;
    float length = 2;

    using namespace RoboticArm;

    try {
        Joint createdPart = Joint(id, name, mass, length);
    } catch (const std::invalid_argument& ia) {
        success = true;
    }

    CPPUNIT_ASSERT(success);

}

/* invalid mass */
void JointTest::wrongMass() {


    bool success = false;

    int id = -1;
    std::string name = "test";
    float mass = -1;
    float length = 2;

    using namespace RoboticArm;

    try {
        Joint createdPart = Joint(id, name, mass, length);
    } catch (const std::invalid_argument& ia) {
        success = true;
    }

    CPPUNIT_ASSERT(success);

}

/* invalid length */
void JointTest::wrongLength() {

    bool success = false;

    int id = -1;
    std::string name = "test";
    float mass = 2;
    float length = -1;

    using namespace RoboticArm;

    try {
        Joint createdPart = Joint(id, name, mass, length);
    } catch (const std::invalid_argument& ia) {
        success = true;
    }

    CPPUNIT_ASSERT(success);

}


void JointTest::validParReadBack(){
    
    bool success = true;

    int id = 111;
    std::string name = "test";
    float mass = 123.54566;
    float length = 14676.54;

    using namespace RoboticArm;

    try {
        Joint createdPart = Joint(id, name, mass, length);

        if (id != createdPart.getId()) {
            std::cout << "ID is wrong." << std::endl;
            success = false;
        }

        if (name != createdPart.getName()) {
            std::cout << "Name is wrong." << std::endl;
            success = false;
        }

        if (mass != createdPart.getMass()) {
            std::cout << "Mass is wrong." << std::endl;
            success = false;
        }

        if (length != createdPart.getLength()) {
            std::cout << "Length is wrong." << std::endl;
            success = false;
        }


    } catch (const std::invalid_argument& ia) {
        success = false;
    }

    CPPUNIT_ASSERT(success);

}