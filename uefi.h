#pragma once

/** ***************************************************************************
 * @section section_uefi Section 1. UEFI definitions
 * This section contains several basic UEFI type and function definitions.
 *************************************************************************** */


#include <Uefi.h>
#include <Library/UefiLib.h>

EFI_SYSTEM_TABLE  *SystemTable;

CHAR16 getwchar();
void putws(CHAR16 *str);
void putchar_buffered(CHAR16 c);
void wprintf (const CHAR16 *format, ...);
