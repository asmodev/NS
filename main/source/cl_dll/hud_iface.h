#if !defined( HUD_IFACEH )
#define HUD_IFACEH
#pragma once

#ifndef EXPORT
#define EXPORT		_declspec( dllexport )
#endif

typedef int (*pfnUserMsgHook)(const char *pszName, int iSize, void *pbuf);
#include "wrect.h"
#include "../engine/cdll_int.h"
extern cl_enginefunc_t gEngfuncs;

#endif