/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   newtestclass1.h
 * Author: fulop
 *
 * Created on Mar 5, 2016, 10:25:14 AM
 */

#ifndef NEWTESTCLASS1_H
#define NEWTESTCLASS1_H

#include <cppunit/extensions/HelperMacros.h>

#include "../ArmPart.h"

class ArmPartTest : public CPPUNIT_NS::TestFixture {
    
    CPPUNIT_TEST_SUITE(ArmPartTest);
    
    /* Normal construction */
    CPPUNIT_TEST(normalConstruct);
    
    /* Wrong arguments */
    CPPUNIT_TEST(wrongIdAsArgument);
    CPPUNIT_TEST(wrongMassAsArgument);
    CPPUNIT_TEST(wrongNameAsArgument);
    CPPUNIT_TEST(wrongLengthAsArgument);
    
    CPPUNIT_TEST(validParReadback);
   

    CPPUNIT_TEST_SUITE_END();

public:
    ArmPartTest();
    virtual ~ArmPartTest();
    void setUp();
    void tearDown();

private:
    
    /* Normal construction */
    void normalConstruct();
    
    /* Wrong arguments */
    void wrongIdAsArgument();
    void wrongMassAsArgument();
    void wrongNameAsArgument();
    void wrongLengthAsArgument();
    
    /* parameter read back */
    void validParReadback();
    
    
};

#endif /* NEWTESTCLASS1_H */

