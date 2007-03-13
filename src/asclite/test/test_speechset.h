/*
 * asclite
 * Author: Jonatan Fiscus, Ajot Jerome, Laprun Christophe, Radde Nicolas
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

#ifndef TEST_SPEECHSET_H
#define TEST_SPEECHSET_H

#include "stdinc.h"
#include "speechset.h"

/**
 * Test the class SpeechSet
 */
class SpeechSetTest
{
	public:
		// class constructor
		SpeechSetTest();
		// class destructor
		~SpeechSetTest();
		/**
		 * Launch all the class test
		 */
		void testAll();
		/**
		 * Test the status mechanism
		 */
		void testStatus();
};

#endif // TEST_SPEECHSET_H
