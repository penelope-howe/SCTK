/*
 * asclite
 * Author: Ajot Jerome, Radde Nicolas
 *
 * This software was developed at the National Institute of Standards and Technology by
 * employees of the Federal Government in the course of their official duties.  Pursuant to
 * Title 17 Section 105 of the United States Code this software is not subject to copyright
 * protection within the United States and is in the public domain. asclite is
 * an experimental system.  NIST assumes no responsibility whatsoever for its use by any party.
 *
 * THIS SOFTWARE IS PROVIDED "AS IS."  With regard to this software, NIST MAKES NO EXPRESS
 * OR IMPLIED WARRANTY AS TO ANY MATTER WHATSOEVER, INCLUDING MERCHANTABILITY,
 * OR FITNESS FOR A PARTICULAR PURPOSE.
 */

#ifndef TEST_SEGMENT_H
#define TEST_SEGMENT_H

#include "segment.h"

/**
 * Test methods to test the behavior of a segment.
 */
class TestSegment
{
	public:
		// class constructor
		TestSegment();
		// class destructor
		~TestSegment();
		/**
     * Test the basics accessor to the 
     * obkects info
     */
    void testBasicAccessor();
    /**
     * Test the is First Token methods behavior.
     * Test the is Last Token methods behavior.
     */
    void testIsFirstOrLastTokenMethod();
    /**
     * Test merge two segments.
     */
    void testMerge();
    /**
		 * Test the output a plan version of the segment method.
		 */
		void testToTopologicalOrderedStruct();
    
    /**
     * Test all the methods.
     */
    void testAll();
};

#endif // TEST_SEGMENT_H
