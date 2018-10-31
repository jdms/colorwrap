#ifndef __WIN_DLL_EXPORT_HANDLER_HPP__
#define __WIN_DLL_EXPORT_HANDLER_HPP__


#if defined(_WIN32) || defined(_WIN64)
// #if defined(_WIN64)

    #if defined(_MSC_VER)
        /* Avoids warning C4251 in VS2013 : 
         *     --> identifier' : class 'type' needs to have dll-interface to be used by clients of class 'type2' 
         *     https://msdn.microsoft.com/en-us/library/esew7y1w.aspx
         *     https://msdn.microsoft.com/en-us/library/2c8f766e.aspx
         */
        #define SILENCE_MSVC_WIN_DLL_EXPORT_WARNING __pragma( warning(disable : 4251) )

    #else
        #define SILENCE_MSVC_WIN_DLL_EXPORT_WARNING 

    #endif
    // 
    // When building a "SHARED" library in Windows, Cmake exports the name
    // 
    // '<target>_EXPORTS', (here 'colorwrap_EXPORTS', see preprocessor directives
    // below) 
    //
    // as a flag to allow the correct processing of the necessary dll handlers. The
    // name '<target>' is defined in the 'CMakeLists.txt' file with cmake's
    // reserved function 'add_library()'.
    //
    // Alternatively, one can define any name at compilation time to achieve the
    // same results. In cmake, this is simply done by appending a definition to be
    // passed to the compiler with cmake's 'add_definitions(-D[FLAG])' function,
    // here "[FLAG]" has to be substituted by the actual flag. Example:
    // "add_definitions(-DMY_COMPLIER_FLAG_TO_EXPORT_DLLS)
    //

    // this is not arbitrary, see previous comment 
    #if defined(colorwrap_EXPORTS) 
        // the name 'COLORWRAPLIB_DLL_HANDLER' is my choice, I will call it the EXPORT MACRO. 
        #define COLORWRAPLIB_DLL_HANDLER __declspec(dllexport)

    #else //#if defined(colorwrap_EXPORTS) 
        #define COLORWRAPLIB_DLL_HANDLER __declspec(dllimport)

    #endif

#else // #if defined(_WIN32) || defined(_WIN64)  
    #define SILENCE_MSVC_WIN_DLL_EXPORT_WARNING 

    #define COLORWRAPLIB_DLL_HANDLER

#endif

//
// Now, any class that will be exposed in the DLL must be annotated with the 
// 'COLORWRAPLIB_DLL_HANDLER' macro. Example: 
//
//
// class COLORWRAPLIB_DLL_HANDLER myClass : public Base_Class { 
// (... implementation ...)  
// }; 
//

// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// NOTICE THAT DIFFERENT DLLS MUST HAVE DIFFERENT EXPORT MACROS. 
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

#endif //__WIN_DLL_EXPORT_HANDLER_HPP__

