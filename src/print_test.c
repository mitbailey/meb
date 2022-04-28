/**
 * @file main.c
 * @author Mit Bailey (mitbailey99@gmail.com)
 * @brief 
 * @version See Git tags for version information.
 * @date 2021.11.02
 * 
 * @copyright Copyright (c) 2021
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 * 
 */

#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <math.h>
#include <time.h>
#include "meb_print.h"

int main()
{
    dbprintf(BLUE_FG "dbprintf(...) with BLUE_FG\n");
    dbprintlf(GREEN_FG "dbprintlf(...) with GREEN_FG");
    dbprintlf(YELLOW_FG BLUE_BG "dbprintlf(...) with YELLOW_FG BLUE_BG");

    tprintlf("This should print the time, with an automatic newline.");
    tprintf("This should look the same, but with a manual newline.\n");

    erprintlf(errno);
}