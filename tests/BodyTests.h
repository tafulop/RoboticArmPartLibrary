/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   BodyTests.h
 * Author: fulop
 *
 * Created on Mar 6, 2016, 9:47:33 AM
 */

#ifndef BODYTESTS_H
#define BODYTESTS_H

#include <cppunit/extensions/HelperMacros.h>
#include "../Body.h"

class BodyTests : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(BodyTests);

    /* normal construction */
    CPPUNIT_TEST(normalConstruction);
    
    /* wrong argument construction */
    CPPUNIT_TEST(wrongId);
    CPPUNIT_TEST(wrongName);
    CPPUNIT_TEST(wrongMass);
    CPPUNIT_TEST(wrongLength);
    

    CPPUNIT_TEST_SUITE_END();

public:
    BodyTests();
    virtual ~BodyTests();
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
    
};

#endif /* BODYTESTS_H */

