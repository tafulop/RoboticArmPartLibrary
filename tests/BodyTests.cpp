/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   BodyTests.cpp
 * Author: fulop
 *
 * Created on Mar 6, 2016, 9:47:33 AM
 */

#include "BodyTests.h"


CPPUNIT_TEST_SUITE_REGISTRATION(BodyTests);

BodyTests::BodyTests() {
}

BodyTests::~BodyTests() {
}

void BodyTests::setUp() {
}

void BodyTests::tearDown() {
}

/* normal construction test */
void BodyTests::normalConstruction() {

    int id = 1;
    std::string name = "test";
    float mass = 2;
    float length = 3;

    using namespace RoboticArm;

    Body createdPart = Body(id, name, mass, length);

    if (createdPart.getId() == id && createdPart.getName() == name &&
            createdPart.getLength() == length && createdPart.getMass() == mass) {
        CPPUNIT_ASSERT(true);
    } else {
        CPPUNIT_ASSERT(false);
    }

}

/* wrong arguments test */
void BodyTests::wrongId() {

    bool success = false;

    int id = -1;
    std::string name = "test";
    float mass = 1;
    float length = 2;

    using namespace RoboticArm;

    try {
        Body createdPart = Body(id, name, mass, length);
    } catch (const std::invalid_argument& ia) {
        success = true;
    }

    CPPUNIT_ASSERT(success);

}

/* invalid name */
void BodyTests::wrongName() {


    bool success = false;

    int id = -1;
    std::string name = "";
    float mass = 1;
    float length = 2;

    using namespace RoboticArm;

    try {
        Body createdPart = Body(id, name, mass, length);
    } catch (const std::invalid_argument& ia) {
        success = true;
    }

    CPPUNIT_ASSERT(success);

}

/* invalid mass */
void BodyTests::wrongMass() {


    bool success = false;

    int id = -1;
    std::string name = "test";
    float mass = -1;
    float length = 2;

    using namespace RoboticArm;

    try {
        Body createdPart = Body(id, name, mass, length);
    } catch (const std::invalid_argument& ia) {
        success = true;
    }

    CPPUNIT_ASSERT(success);

}

/* invalid length */
void BodyTests::wrongLength() {

    bool success = false;

    int id = -1;
    std::string name = "test";
    float mass = 2;
    float length = -1;

    using namespace RoboticArm;

    try {
        Body createdPart = Body(id, name, mass, length);
    } catch (const std::invalid_argument& ia) {
        success = true;
    }

    CPPUNIT_ASSERT(success);

}

void BodyTests::validParReadBack() {

    bool success = true;

    int id = 111;
    std::string name = "test";
    float mass = 123.54566;
    float length = 14676.54;

    using namespace RoboticArm;

    try {
        Body createdPart = Body(id, name, mass, length);

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