/**
 * @file main.c
 * @author Mit Bailey (mitbailey99@gmail.com)
 * @brief 
 * @version v1.0
 * @date 2021.11.02
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <math.h>
#include "meb_debug.h"
#include "meb_constants.h"

int main()
{
    dbprintf(BLUE_FG "dbprintf(...) with BLUE_FG\n");
    dbprintlf(GREEN_FG "dbprintlf(...) with GREEN_FG");
    dbprintlf(YELLOW_FG BLUE_BG "dbprintlf(...) with YELLOW_FG BLUE_BG");
    erprintlf(errno);

    dbprintlf("45 degrees is %.02f radians.", DEG2RAD(45));
    dbprintlf("0.5 radians is %.02f degrees.", RAD2DEG(0.5));

    dbprintlf("1 second is %d microseconds.", 1 SEC);
}