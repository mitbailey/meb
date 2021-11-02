/**
 * @file meb_constants.h
 * @author Mit Bailey (mitbailey99@gmail.com)
 * @brief 
 * @version v1.0
 * @date 2021.11.02
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef MEB_CONSTANTS_H
#define MEB_CONSTANTS_H

// Requires math.h or equivalent M_PI definition.
#ifdef M_PI
#ifndef MEB_RAD2DEG
#define MEB_RAD2DEG
#define RAD2DEG(radians) (radians * (180.0 / M_PI))
#endif // MEB_RAD2DEG
#ifndef MEB_DEG2RAD
#define MEB_DEG2RAD
#define DEG2RAD(degrees) (degrees * (M_PI / 180.0))
#endif // MEB_DEG2RAD
#endif // M_PI

// Intended for use with usleep(1 SEC).
#ifndef MEB_SEC
#define MEB_SEC
#define SEC *1000000
#endif // MEB_SEC

#endif // MEB_CONSTANTS_H