/** Title: Precompiled Header for ByteLib
 *	@version: v0.0.0.1
 *	@author: ByteofSin
 *	Contacts: 
 *		Email: ByteofSin@gmail.com 
 *	Created: 09/21/2022 
 *	Modified: 09/21/2022
 *	@brief: A way to include all of bytelib in one area
 *	Externals: 
 *	@bug: none yet
 */

#ifndef BYTEOFSIN_BYTELIB_H
#define BYTEOFSIN_BYTELIB_H

namespace byteofsin {
    /** @brief Return values for various errors
     */
    enum ReturnDefinitions {
        EXIT_SUCCESSFUL         = 0,
        MINOR_ERROR             = 1,
        MAJOR_ERROR             = 2,
        COMMAND_NOT_FOUND       = 127,

        //SIG Errors
        ILLEGAL_INSTRUCTION     = 132,
        EXCEPTION_OCCURED       = 133,
        ABORT                   = 134,

        
        ARITHMETIC_ERROR        = 136,
        MEMORY_LIMIT_EXCEEDED   = 137,
        BUS_ERROR               = 138
        SEGMENTATION_FAULT      = 139,
        INVALID_SYSTEM_CALL,
    }

    /** @brief API Macros
     */
    #define BYTE_API __declspec(dllexport)
    #define BYTE_API_IMPORT __declspec(dllimport)



};


#endif