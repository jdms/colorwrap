/* Copyright (c) 2018 Julio Daniel Machado Silva */

/* Licensed under the Apache License, Version 2.0 (the "License"); */
/* you may not use this file except in compliance with the License. */
/* You may obtain a copy of the License at */

/* http://www.apache.org/licenses/LICENSE-2.0 */

/* Unless required by applicable law or agreed to in writing, software */
/* distributed under the License is distributed on an "AS IS" BASIS, */
/* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. */
/* See the License for the specific language governing permissions and */
/* limitations under the License. */


#ifndef __COLORWRAP_C_H__
#define __COLORWRAP_C_H__


#ifdef __cplusplus
extern "C" 
{
#endif


#include "colorwrap_win_dll_export_handler.h"


    ///////////////////////////////////////////////////////////////
    // Sequential colormaps
    ///////////////////////////////////////////////////////////////

    COLORWRAPLIB_DLL_HANDLER int colorwrap_Blues   ( int, int [] );
    COLORWRAPLIB_DLL_HANDLER int colorwrap_BuGn    ( int, int [] );
    COLORWRAPLIB_DLL_HANDLER int colorwrap_BuPu    ( int, int [] );
    COLORWRAPLIB_DLL_HANDLER int colorwrap_GnBu    ( int, int [] );
    COLORWRAPLIB_DLL_HANDLER int colorwrap_Greens  ( int, int [] );
    COLORWRAPLIB_DLL_HANDLER int colorwrap_Greys   ( int, int [] );
    COLORWRAPLIB_DLL_HANDLER int colorwrap_Oranges ( int, int [] );
    COLORWRAPLIB_DLL_HANDLER int colorwrap_OrRd    ( int, int [] );
    COLORWRAPLIB_DLL_HANDLER int colorwrap_PuBu    ( int, int [] );
    COLORWRAPLIB_DLL_HANDLER int colorwrap_PuBuGn  ( int, int [] );
    COLORWRAPLIB_DLL_HANDLER int colorwrap_PuRd    ( int, int [] );
    COLORWRAPLIB_DLL_HANDLER int colorwrap_Purples ( int, int [] );
    COLORWRAPLIB_DLL_HANDLER int colorwrap_RdPu    ( int, int [] );
    COLORWRAPLIB_DLL_HANDLER int colorwrap_Reds    ( int, int [] );
    COLORWRAPLIB_DLL_HANDLER int colorwrap_YlGn    ( int, int [] );
    COLORWRAPLIB_DLL_HANDLER int colorwrap_YlGnBu  ( int, int [] );
    COLORWRAPLIB_DLL_HANDLER int colorwrap_YlOrBr  ( int, int [] );
    COLORWRAPLIB_DLL_HANDLER int colorwrap_YlOrRd  ( int, int [] );


    ///////////////////////////////////////////////////////////////
    // Diverging colormaps
    ///////////////////////////////////////////////////////////////

    COLORWRAPLIB_DLL_HANDLER int colorwrap_BrBG    ( int, int [] );
    COLORWRAPLIB_DLL_HANDLER int colorwrap_PiYG    ( int, int [] );
    COLORWRAPLIB_DLL_HANDLER int colorwrap_PRGn    ( int, int [] );
    COLORWRAPLIB_DLL_HANDLER int colorwrap_PuOr    ( int, int [] );
    COLORWRAPLIB_DLL_HANDLER int colorwrap_RdBu    ( int, int [] );
    COLORWRAPLIB_DLL_HANDLER int colorwrap_RdGy    ( int, int [] );
    COLORWRAPLIB_DLL_HANDLER int colorwrap_RdYlBu  ( int, int [] );
    COLORWRAPLIB_DLL_HANDLER int colorwrap_RdYlGn  ( int, int [] );
    COLORWRAPLIB_DLL_HANDLER int colorwrap_Spectral( int, int [] );


    ///////////////////////////////////////////////////////////////
    // Qualitative colormaps
    ///////////////////////////////////////////////////////////////

    COLORWRAPLIB_DLL_HANDLER int colorwrap_Accent  ( int, int [] );
    COLORWRAPLIB_DLL_HANDLER int colorwrap_Dark2   ( int, int [] );
    COLORWRAPLIB_DLL_HANDLER int colorwrap_Paired  ( int, int [] );
    COLORWRAPLIB_DLL_HANDLER int colorwrap_Pastel1 ( int, int [] );
    COLORWRAPLIB_DLL_HANDLER int colorwrap_Pastel2 ( int, int [] );
    COLORWRAPLIB_DLL_HANDLER int colorwrap_Set1    ( int, int [] );
    COLORWRAPLIB_DLL_HANDLER int colorwrap_Set2    ( int, int [] );
    COLORWRAPLIB_DLL_HANDLER int colorwrap_Set3    ( int, int [] );


#ifdef __cplusplus
} // extern "C"
#endif

#endif
