/*
	Haltewunsch Mini Pi hardware config (no limits).
	Default revision is MK0. Define HW_MINI_PI_IS_MK1 to build MK1.
*/

#ifndef HW_MINI_PI_NO_LIMITS_H_
#define HW_MINI_PI_NO_LIMITS_H_

#define HW_MINI_PI

#if defined(HW_MINI_PI_IS_V0)
#define HW_MINI_PI_IS_MK0
#endif

#if defined(HW_MINI_PI_IS_V1)
#define HW_MINI_PI_IS_MK1
#endif

#if defined(HW_MINI_PI_IS_MK1)
#define HW_HALTEWUNSCH_MINI_PI_MK1
#else
#define HW_HALTEWUNSCH_MINI_PI_MK0
#endif

#define DISABLE_HW_LIMITS

#include "hw_mini_pi_core.h"

#endif /* HW_MINI_PI_NO_LIMITS_H_ */
