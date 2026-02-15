/*
	Haltewunsch Mini Pi hardware config (no limits).
	Default revision is V0. Define HW_MINI_PI_IS_V1 to build V1.
*/

#ifndef HW_MINI_PI_NO_LIMITS_H_
#define HW_MINI_PI_NO_LIMITS_H_

#define HW_MINI_PI

#if defined(HW_MINI_PI_IS_V1)
#define HW_HALTEWUNSCH_MINI_PI_V1
#else
#define HW_HALTEWUNSCH_MINI_PI_V0
#endif

#define DISABLE_HW_LIMITS

#include "hw_mini_pi_core.h"

#endif /* HW_MINI_PI_NO_LIMITS_H_ */
