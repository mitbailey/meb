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
#include <time.h>
#include "meb_print.h"
#include "meb_convert.h"

int main()
{
    dbprintf(BLUE_FG "dbprintf(...) with BLUE_FG\n");
    dbprintlf(GREEN_FG "dbprintlf(...) with GREEN_FG");
    dbprintlf(YELLOW_FG BLUE_BG "dbprintlf(...) with YELLOW_FG BLUE_BG");

    dbprintlf("45 degrees is %.02f radians.", DEG_TO_RAD(45));
    bprintlf("0.5 radians is %.02f degrees.", RAD_TO_DEG(0.5));

    bprintf("1 second is %d microseconds.\n", SEC_TO_USEC(1));

    tprintlf("This should print the time, with an automatic newline.");
    tprintf("This should look the same, but with a manual newline.\n");

    erprintlf(errno);
}