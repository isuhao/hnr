/* ///////////////////////////////////////////////////////////////////////
 * File:		element_num_test.h		
 *
 * Created:		08.03.01				
 * Updated:		08.05.05
 *
 * Brief: Unit-testing
 *
 * [<Home>]
 * Copyright (c) 2008-2020, Waruqi All rights reserved.
 * //////////////////////////////////////////////////////////////////// */
#ifndef EXTL_UTILITY_ELEMENT_NUM_TEST_H
#define EXTL_UTILITY_ELEMENT_NUM_TEST_H

#ifndef EXTL_UTILITY_ELEMENT_NUM_H
#	error This file must be included of element_num.h
#endif

/* ///////////////////////////////////////////////////////////////////////
 * ::extl::detail namespace
 */
EXTL_TEST_BEGIN_NAMESPACE

/* ///////////////////////////////////////////////////////////////////////
 * Unit-testing 
 */
EXTL_INLINE void element_num_test()
{
	int ar[10]={0};
	EXTL_STATIC_ASSERT((EXTL_ELEMENT_NUM(ar) == 10));
}
/* ///////////////////////////////////////////////////////////////////////
 * ::extl::detail namespace
 */
EXTL_TEST_END_NAMESPACE

/* //////////////////////////////////////////////////////////////////// */
#endif /* EXTL_UTILITY_ELEMENT_NUM_TEST_H */
/* //////////////////////////////////////////////////////////////////// */