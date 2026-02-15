/*
	Haltewunsch Mini Pi hardware config.
	Default revision is V1. Define HW_MINI_PI_IS_V0 to build V0.
*/

#ifndef HW_MINI_PI_H_
#define HW_MINI_PI_H_

#define HW_MINI_PI

#if defined(HW_MINI_PI_IS_V0)
#define HW_HALTEWUNSCH_MINI_PI_V0
#else
#define HW_HALTEWUNSCH_MINI_PI_V1
#endif

#include "hw_mini_pi_core.h"

#endif /* HW_MINI_PI_H_ */
