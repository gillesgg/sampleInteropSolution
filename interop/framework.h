#pragma once

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows Header Files
#include <windows.h>
#include <atlstr.h>
#ifdef __cplusplus_cli
#include <msclr\gcroot.h>
#endif

#ifdef __cplusplus_cli
#include "Interop.h"
#endif
