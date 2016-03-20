/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   MapTest.cpp
 * Author: fulop
 *
 * Created on Mar 20, 2016, 9:23:32 PM
 */

#include "MapTest.h"


CPPUNIT_TEST_SUITE_REGISTRATION(MapTest);

MapTest::MapTest() {
}

MapTest::~MapTest() {
}

void MapTest::setUp() {
}

void MapTest::tearDown() {
}

void MapTest::emplaceTest(){
    
    using namespace std;
    using namespace RoboticArm;
    
    map<string, ArmPart> m;
    
    // put sg in
    pair<string, ArmPart> p;
    p = make_pair("test", ArmPart(1, "name", 2, 3));
    

    ArmPart arm = ArmPart(1, "name", 2, 3);
    ArmPart arm2;
    
    arm2 = move(arm);
    
    m.insert(p);
   
    // get back
    ArmPart a = m.at("test");
    
    
    CPPUNIT_ASSERT(true);
}

