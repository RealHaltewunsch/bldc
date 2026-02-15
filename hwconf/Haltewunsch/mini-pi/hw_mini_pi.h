/*
	Haltewunsch Mini Pi hardware config.
	Default revision is MK1. Define HW_MINI_PI_IS_MK0 to build MK0.
*/

#ifndef HW_MINI_PI_H_
#define HW_MINI_PI_H_

#define HW_MINI_PI

#if defined(HW_MINI_PI_IS_V0)
#define HW_MINI_PI_IS_MK0
#endif

#if defined(HW_MINI_PI_IS_V1)
#define HW_MINI_PI_IS_MK1
#endif

#if defined(HW_MINI_PI_IS_MK0)
#define HW_HALTEWUNSCH_MINI_PI_MK0
#else
#define HW_HALTEWUNSCH_MINI_PI_MK1
#endif

#include "hw_mini_pi_core.h"

#endif /* HW_MINI_PI_H_ */
