/*
 *
 *	cext_hps.h	External	31-Jul-2002
 *
 *	Copyright (C)  1991-2002  EPIX, Inc.  All rights reserved.
 *
 *	GP: Standard .h prefix
 *	As required w. external visibility; for distributed .h's
 *
 */

#include "epix_cext.h"

/*
 * Affix structure packing
 */
#if defined(C_MSC32)|defined(C_MSC64)
  #pragma warning (disable:4103)    /* packing changes */
  #pragma pack(4)
#elif defined(C_MSC16)
  #pragma warning (disable:4103)    /* packing changes */
  #pragma pack(2)
#elif defined(C_BOR32)
  #pragma option -a4
#elif defined(C_BOR16)
  #if C_BOR16==0 || C_BOR16>=400
    #pragma option -a2
  #else
    #pragma option -a
  #endif
#elif defined(C_HIC32)
  #pragma Push_align_members(4);
#elif defined(C_WAT32)
  #pragma pack(4)
#elif defined(C_WAT16)
  #pragma pack(2)
#elif defined(C_TMSC40)
#elif defined(C_GNU32)|defined(C_GNU64)
    #pragma pack(push,4)  /* added 31-Jan-2013 */
#elif defined(C_LSB32)|defined(C_LSB64)
    #pragma pack(push,4)
#else
  #error "Can't identify compiler."
#endif
/*
 * Check proper usage
 */
#if defined(EPIX_CEXT_HPE)
  #error "Bad usage of cext_hp[1248se].h."
#endif
#define EPIX_CEXT_HPE	 1
