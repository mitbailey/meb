# meb
Helpful code snippets and references.

# Troubleshooting
None.

# meb_debug.h
stderr-based debug printouts for C programs.
  
    
Created by Mit Bailey with revisions by Sunip K. Mukherjee.

Each function-like macro name takes the form
`<prefix>print<suffix>(...)`, where `<prefix>` is:
 - db
   - Displays filename, line number, and function name.
   - Supports MEB colors.
   - Outputs to `stderr`.
   - Return type `void`.
 - b
   - Includes no pre-formatted string text.
   - Supports MEB colors.
   - Outputs to `stdout`.
   - Returns numbers of characters written to `stdout`.
 - er
   - Prints an `stderror.h` error.
   - Displays filename, line number, and function name.
   - Does not support MEB colors.
   - Outputs to `stderr`
   - Return type `void`.
 - t
   - Displays current system time to second accuracy.
   - Supports MEB colors.
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

# meb_constants.h
Contains converter function-like macros.

List of all function-like macros:
```
RAD_TO_DEG(radians)
DEG_TO_RAD(degrees)
SEC_TO_USEC(seconds)
```
