/**
 * @file meb_convert.h
 * @author Mit Bailey (mitbailey99@gmail.com)
 * @brief 
 * @version v1.1
 * @date 2021.11.02
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef MEB_CONVERT_H
#define MEB_CONVERT_H

// Requires math.h or equivalent M_PI definition.
#ifdef M_PI
#ifndef MEB_RAD_TO_DEG
#define MEB_RAD_TO_DEG
#define RAD_TO_DEG(radians) (radians * (180.0 / M_PI))
#endif // MEB_RAD2DEG
#ifndef MEB_DEG_TO_RAD
#define MEB_DEG_TO_RAD
#define DEG_TO_RAD(degrees) (degrees * (M_PI / 180.0))
#endif // MEB_DEG2RAD
#endif // M_PI

// Intended for use with usleep(1 SEC).
#ifndef MEB_SEC_TO_USEC
#define MEB_SEC_TO_USEC
#define SEC_TO_USEC(seconds) (seconds * 1000000)
#endif // MEB_SEC_TO_USEC

#endif // MEB_CONSTANTS_H