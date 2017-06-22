/**
  ******************************************************************************
  * @file    Font8.c
  * @author  MCD Application Team
  * @version V1.0.0
  * @date    18-February-2014
  * @brief   This file provides text Font8 for STM32xx-EVAL's LCD driver. 
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT(c) 2014 STMicroelectronics</center></h2>
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "fonts.h"

/** @addtogroup Utilities
  * @{
  */
  
/** @addtogroup STM32_EVAL
  * @{
  */ 

/** @addtogroup Common
  * @{
  */

/** @addtogroup FONTS
  * @brief      This file provides text Font8 for STM32xx-EVAL's LCD driver. 
  * @{
  */  

/** @defgroup FONTS_Private_Types
  * @{
  */ 
/**
  * @}
  */ 


/** @defgroup FONTS_Private_Defines
  * @{
  */
/**
  * @}
  */ 


/** @defgroup FONTS_Private_Macros
  * @{
  */
/**
  * @}
  */ 
  

/** @defgroup FONTS_Private_Variables
  * @{
  */
// 
//  Font data for Courier New 12pt
// 

const uint8_t Font8_Table[] = 
{
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // sp
0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, 0x10, 0x00, 0x00,  // !
0x28, 0x28, 0x28, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // "
0x24, 0x24, 0x7C, 0x24, 0x48, 0x7C, 0x48, 0x48, 0x00, 0x00,  // #
0x38, 0x54, 0x50, 0x38, 0x14, 0x54, 0x54, 0x38, 0x10, 0x00,  // $
0x20, 0x54, 0x58, 0x30, 0x28, 0x54, 0x14, 0x08, 0x00, 0x00,  // %
0x10, 0x28, 0x28, 0x10, 0x34, 0x48, 0x48, 0x34, 0x00, 0x00,  // &
0x10, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // '
0x08, 0x10, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x10, 0x08,  // (
0x20, 0x10, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x10, 0x20,  // )
0x10, 0x38, 0x10, 0x28, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // *
0x00, 0x00, 0x10, 0x10, 0x7C, 0x10, 0x10, 0x00, 0x00, 0x00,  // +
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x10,  // ,
0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00,  // -
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00,  // .
0x08, 0x08, 0x10, 0x10, 0x10, 0x10, 0x20, 0x20, 0x00, 0x00,  // /
0x38, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x38, 0x00, 0x00,  // 0
0x10, 0x30, 0x50, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, 0x00,  // 1
0x38, 0x44, 0x44, 0x04, 0x08, 0x10, 0x20, 0x7C, 0x00, 0x00,  // 2
0x38, 0x44, 0x04, 0x18, 0x04, 0x04, 0x44, 0x38, 0x00, 0x00,  // 3
0x08, 0x18, 0x28, 0x28, 0x48, 0x7C, 0x08, 0x08, 0x00, 0x00,  // 4
0x7C, 0x40, 0x40, 0x78, 0x04, 0x04, 0x44, 0x38, 0x00, 0x00,  // 5
0x38, 0x44, 0x40, 0x78, 0x44, 0x44, 0x44, 0x38, 0x00, 0x00,  // 6
0x7C, 0x04, 0x08, 0x10, 0x10, 0x20, 0x20, 0x20, 0x00, 0x00,  // 7
0x38, 0x44, 0x44, 0x38, 0x44, 0x44, 0x44, 0x38, 0x00, 0x00,  // 8
0x38, 0x44, 0x44, 0x44, 0x3C, 0x04, 0x44, 0x38, 0x00, 0x00,  // 9
0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,  // :
0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x10, 0x10, 0x10,  // ;
0x00, 0x00, 0x0C, 0x30, 0x40, 0x30, 0x0C, 0x00, 0x00, 0x00,  // <
0x00, 0x00, 0x00, 0x7C, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00,  // =
0x00, 0x00, 0x60, 0x18, 0x04, 0x18, 0x60, 0x00, 0x00, 0x00,  // >
0x38, 0x44, 0x04, 0x08, 0x10, 0x10, 0x00, 0x10, 0x00, 0x00,  // ?
0x38, 0x44, 0x4C, 0x54, 0x5C, 0x40, 0x40, 0x38, 0x00, 0x00,  // @
0x10, 0x28, 0x28, 0x28, 0x28, 0x7C, 0x44, 0x44, 0x00, 0x00,  // A
0x78, 0x44, 0x44, 0x78, 0x44, 0x44, 0x44, 0x78, 0x00, 0x00,  // B
0x38, 0x44, 0x40, 0x40, 0x40, 0x40, 0x44, 0x38, 0x00, 0x00,  // C
0x70, 0x48, 0x44, 0x44, 0x44, 0x44, 0x48, 0x70, 0x00, 0x00,  // D
0x7C, 0x40, 0x40, 0x7C, 0x40, 0x40, 0x40, 0x7C, 0x00, 0x00,  // E
0x7C, 0x40, 0x40, 0x78, 0x40, 0x40, 0x40, 0x40, 0x00, 0x00,  // F
0x38, 0x44, 0x40, 0x40, 0x5C, 0x44, 0x44, 0x38, 0x00, 0x00,  // G
0x44, 0x44, 0x44, 0x7C, 0x44, 0x44, 0x44, 0x44, 0x00, 0x00,  // H
0x38, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x38, 0x00, 0x00,  // I
0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x44, 0x38, 0x00, 0x00,  // J
0x44, 0x48, 0x50, 0x60, 0x50, 0x48, 0x48, 0x44, 0x00, 0x00,  // K
0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x7C, 0x00, 0x00,  // L
0x44, 0x6C, 0x6C, 0x54, 0x44, 0x44, 0x44, 0x44, 0x00, 0x00,  // M
0x44, 0x64, 0x64, 0x54, 0x54, 0x4C, 0x4C, 0x44, 0x00, 0x00,  // N
0x38, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x38, 0x00, 0x00,  // O
0x78, 0x44, 0x44, 0x44, 0x78, 0x40, 0x40, 0x40, 0x00, 0x00,  // P
0x38, 0x44, 0x44, 0x44, 0x44, 0x44, 0x54, 0x38, 0x04, 0x00,  // Q
0x78, 0x44, 0x44, 0x44, 0x78, 0x48, 0x48, 0x44, 0x00, 0x00,  // R
0x38, 0x44, 0x40, 0x30, 0x08, 0x04, 0x44, 0x38, 0x00, 0x00,  // S
0x7C, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, 0x00,  // T
0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x38, 0x00, 0x00,  // U
0x44, 0x44, 0x44, 0x28, 0x28, 0x28, 0x10, 0x10, 0x00, 0x00,  // V
0x44, 0x44, 0x54, 0x54, 0x54, 0x6C, 0x28, 0x28, 0x00, 0x00,  // W
0x44, 0x28, 0x28, 0x10, 0x10, 0x28, 0x28, 0x44, 0x00, 0x00,  // X
0x44, 0x44, 0x28, 0x28, 0x10, 0x10, 0x10, 0x10, 0x00, 0x00,  // Y
0x7C, 0x04, 0x08, 0x10, 0x10, 0x20, 0x40, 0x7C, 0x00, 0x00,  // Z
0x18, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x18,  // [
0x20, 0x20, 0x10, 0x10, 0x10, 0x10, 0x08, 0x08, 0x00, 0x00,  /* \ */
0x30, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x30,  // ]
0x10, 0x28, 0x28, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ^
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE,  // _
0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // `
0x00, 0x00, 0x38, 0x44, 0x3C, 0x44, 0x4C, 0x34, 0x00, 0x00,  // a
0x40, 0x40, 0x58, 0x64, 0x44, 0x44, 0x64, 0x58, 0x00, 0x00,  // b
0x00, 0x00, 0x38, 0x44, 0x40, 0x40, 0x44, 0x38, 0x00, 0x00,  // c
0x04, 0x04, 0x34, 0x4C, 0x44, 0x44, 0x4C, 0x34, 0x00, 0x00,  // d
0x00, 0x00, 0x38, 0x44, 0x7C, 0x40, 0x44, 0x38, 0x00, 0x00,  // e
0x0C, 0x10, 0x7C, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, 0x00,  // f
0x00, 0x00, 0x34, 0x4C, 0x44, 0x44, 0x4C, 0x34, 0x04, 0x78,  // g
0x40, 0x40, 0x58, 0x64, 0x44, 0x44, 0x44, 0x44, 0x00, 0x00,  // h
0x10, 0x00, 0x70, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, 0x00,  // i
0x10, 0x00, 0x70, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0xE0,  // j
0x40, 0x40, 0x48, 0x50, 0x60, 0x50, 0x48, 0x44, 0x00, 0x00,  // k
0x70, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, 0x00,  // l
0x00, 0x00, 0x78, 0x54, 0x54, 0x54, 0x54, 0x54, 0x00, 0x00,  // m
0x00, 0x00, 0x58, 0x64, 0x44, 0x44, 0x44, 0x44, 0x00, 0x00,  // n
0x00, 0x00, 0x38, 0x44, 0x44, 0x44, 0x44, 0x38, 0x00, 0x00,  // o
0x00, 0x00, 0x58, 0x64, 0x44, 0x44, 0x64, 0x58, 0x40, 0x40,  // p
0x00, 0x00, 0x34, 0x4C, 0x44, 0x44, 0x4C, 0x34, 0x04, 0x04,  // q
0x00, 0x00, 0x58, 0x64, 0x40, 0x40, 0x40, 0x40, 0x00, 0x00,  // r
0x00, 0x00, 0x38, 0x44, 0x30, 0x08, 0x44, 0x38, 0x00, 0x00,  // s
0x20, 0x20, 0x78, 0x20, 0x20, 0x20, 0x20, 0x18, 0x00, 0x00,  // t
0x00, 0x00, 0x44, 0x44, 0x44, 0x44, 0x4C, 0x34, 0x00, 0x00,  // u
0x00, 0x00, 0x44, 0x44, 0x28, 0x28, 0x28, 0x10, 0x00, 0x00,  // v
0x00, 0x00, 0x54, 0x54, 0x54, 0x6C, 0x28, 0x28, 0x00, 0x00,  // w
0x00, 0x00, 0x44, 0x28, 0x10, 0x10, 0x28, 0x44, 0x00, 0x00,  // x
0x00, 0x00, 0x44, 0x44, 0x28, 0x28, 0x10, 0x10, 0x10, 0x60,  // y
0x00, 0x00, 0x7C, 0x08, 0x10, 0x20, 0x40, 0x7C, 0x00, 0x00,  // z
0x18, 0x10, 0x10, 0x10, 0x20, 0x20, 0x10, 0x10, 0x10, 0x18,  // {
0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,  // |
0x30, 0x10, 0x10, 0x10, 0x08, 0x08, 0x10, 0x10, 0x10, 0x30,  // }
0x00, 0x00, 0x00, 0x74, 0x4C, 0x00, 0x00, 0x00, 0x00, 0x00,  // ~
};

sFONT Font8 = {
  Font8_Table,
  7, /* Width */
  10, /* Height */
};

/**
  * @}
  */ 


/** @defgroup FONTS_Private_Function_Prototypes
  * @{
  */ 
/**
  * @}
  */ 


/** @defgroup FONTS_Private_Functions
  * @{
  */
    
/**
  * @}
  */
  
/**
  * @}
  */ 

/**
  * @}
  */

/**
  * @}
  */

/**
  * @}
  */  
/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
