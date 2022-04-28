# meb
Header-only advanced print function library for C programs.

# Examples

The `examples/` directory contains example Makefiles for C and C++ programs.

The file `src/meb_print.h` contains an example program for using the `meb_print.h` library.

# meb_print.h
stderr-based debug printouts for C programs.
    
_Created by Mit Bailey with revisions by Sunip K. Mukherjee._

Each function-like macro name takes the form
`<prefix>print<suffix>(...)`, where `<prefix>` is:

 - b
   - Includes no pre-formatted string text.
   - Supports MEB colors.
   - Outputs to `stdout`.
   - Returns numbers of characters written to `stdout`.

 - t
   - Displays current system time to second accuracy.
   - Supports MEB colors.
   - Outputs to `stderr`
   - Return type `void`.

 - db
   - Displays filename, line number, and function name.
   - Supports MEB colors.
   - Outputs to `stderr`.
   - Return type `void`.

 - er
   - Prints an `stderror.h` error.
   - Displays filename, line number, and function name.
   - Does not support MEB colors.
   - Outputs to `stderr`
   - Return type `void`.


 and `<suffix>` is:
 - lf
   - Contains a newline character.
 - f
   - Does not contain a newline character.

List of all function-like macros:
```
dbprintlf(format, ...)
dbprintf(format, ...)
bprintf(str, ...)
bprintlf(str, ...)
erprintlf(error)
tprintf(str, ...)
tprintlf(str, ...)
```

Also included is a print-level mask `MEB_DBGLVL`, where only the relevant prints are allowed. By default, `MEB_DBGLVL` is set to `#define MEB_DBG_ALL (MEB_DBG_BPRINT | MEB_DBG_TPRINT | MEB_DBG_DBPRINT | MEB_DBG_ERPRINT)` if the user does not `#define MEB_DBGLVL` to some value.

List of all level masks:
```
MEB_DBG_BPRINT
MEB_DBG_TPRINT
MEB_DBG_DBPRINT
MEB_DBG_ERPRINT
```

# Licensing

  Copyright (C) 2021 Mit Bailey

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU Lesser General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public License
  along with this program.  If not, see <https://www.gnu.org/licenses/>.