/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   MapTest.h
 * Author: fulop
 *
 * Created on Mar 20, 2016, 9:23:32 PM
 */

#ifndef MAPTEST_H
#define MAPTEST_H

#include <cppunit/extensions/HelperMacros.h>
#include "../AllParts.h"
#include <map>

class MapTest : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(MapTest);

    CPPUNIT_TEST(emplaceTest);
    

    CPPUNIT_TEST_SUITE_END();

public:
    MapTest();
    virtual ~MapTest();
    void setUp();
    void tearDown();

private:
    void emplaceTest();
};

#endif /* MAPTEST_H */

