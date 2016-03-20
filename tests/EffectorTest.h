/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   EffectorTest.h
 * Author: fulop
 *
 * Created on Mar 6, 2016, 10:11:17 AM
 */

#ifndef EFFECTORTEST_H
#define EFFECTORTEST_H

#include <cppunit/extensions/HelperMacros.h>
#include "../Effector.h"

class EffectorTest : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(EffectorTest);

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
    EffectorTest();
    virtual ~EffectorTest();
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

#endif /* EFFECTORTEST_H */

