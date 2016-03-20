/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   JointTest.h
 * Author: fulop
 *
 * Created on Mar 6, 2016, 10:21:13 AM
 */

#ifndef JOINTTEST_H
#define JOINTTEST_H

#include <cppunit/extensions/HelperMacros.h>
#include "../Joint.h"

class JointTest : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(JointTest);
    
    /* normal construction */
    CPPUNIT_TEST(normalConstruction);
    
    /* wrong argument construction */
    CPPUNIT_TEST(wrongId);
    CPPUNIT_TEST(wrongName);
    CPPUNIT_TEST(wrongMass);
    CPPUNIT_TEST(wrongLength);
    
    /* valid par */
    CPPUNIT_TEST(validParReadBack);

    CPPUNIT_TEST_SUITE_END();

public:
    JointTest();
    virtual ~JointTest();
    void setUp();
    void tearDown();

private:
    
    /* normal construction test */
    void normalConstruction();
    
    /* wrong arguments test */
    void wrongId();
    void wrongName();
    void wrongMass();
    void wrongLength();
    
    /* valid arg */
    void validParReadBack();
};

#endif /* JOINTTEST_H */

