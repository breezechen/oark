/*
Copyright (c) <2010> <Dreg aka David Reguera Garcia, dreg@fr33project.org>
Copyright (c) <2010> <0vercl0k aka Souchet Axel, 0vercl0k@tuxfamily.org>

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/

#ifndef _DEBUG_H__
#define _DEBUG_H__

#include <windows.h>
#include <stdio.h>
#include "common.h"

extern BOOL debug;

/**
 * @name    DisplayErrorMsg
 * @brief   This routine displays error message.
 *
 * This API displays information about an error.
 *
 * @param [in] pMsg A message.
 *
 * Example Usage:
 * @code
 *    DisplayErrorMsg("MemoryAllocationFail");
 * @endcode
 */
VOID DisplayErrorMsg(PCHAR pMsg);

/**
 * @name    DisplayAllocationFailureMsg
 * @brief   This routine displays memory allocation error message.
 *
 * This API displays information about a memory allocation error.
 *
 * Example Usage:
 * @code
 *    DisplayAllocationFailureMsg();
 * @endcode
 */
VOID DisplayAllocationFailureMsg();

/**
 * @name    DisplayIOCTLFailureMsg
 * @brief   This routine displays IOCTLReadKernMem error message.
 *
 * This API displays information about a IOCTLReadKernMem error.
 *
 * Example Usage:
 * @code
 *    DisplayIOCTLFailureMsg();
 * @endcode
 */
VOID DisplayIOCTLFailureMsg();

STATUS_t EnableDebugPrivilege( void );

#endif /* _DEBUG_H__ */