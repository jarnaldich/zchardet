/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/* ***** BEGIN LICENSE BLOCK *****
 * Version: MPL 1.1/GPL 2.0/LGPL 2.1
 *
 * The contents of this file are subject to the Mozilla Public License Version
 * 1.1 (the "License"); you may not use this file except in compliance with
 * the License. You may obtain a copy of the License at
 * http://www.mozilla.org/MPL/
 *
 * Software distributed under the License is distributed on an "AS IS" basis,
 * WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License
 * for the specific language governing rights and limitations under the
 * License.
 *
 * The Original Code is Mozilla Communicator client code.
 *
 * The Initial Developer of the Original Code is
 * Netscape Communications Corporation.
 * Portions created by the Initial Developer are Copyright (C) 1998
 * the Initial Developer. All Rights Reserved.
 *
 * Contributor(s):
 *
 * Alternatively, the contents of this file may be used under the terms of
 * either the GNU General Public License Version 2 or later (the "GPL"), or
 * the GNU Lesser General Public License Version 2.1 or later (the "LGPL"),
 * in which case the provisions of the GPL or the LGPL are applicable instead
 * of those above. If you wish to allow use of your version of this file only
 * under the terms of either the GPL or the LGPL, and not to allow others to
 * use your version of this file under the terms of the MPL, indicate your
 * decision by deleting the provisions above and replace them with the notice
 * and other provisions required by the GPL or the LGPL. If you do not delete
 * the provisions above, a recipient may use your version of this file under
 * the terms of any one of the MPL, the GPL or the LGPL.
 *
 * ***** END LICENSE BLOCK ***** */

#include "../nsSBCharSetProber.h"
#include "../nsSBCharSetProber-generated.h"
#include "../nsLanguageDetector.h"
#include "../nsLanguageDetector-generated.h"

/********* Language model for: Polish *********/

/**
 * Generated by BuildLangModel.py
 * On: 2022-12-15 00:39:03.247533
 **/

/* Character Mapping Table:
 * ILL: illegal character.
 * CTR: control character specific to the charset.
 * RET: carriage/return.
 * SYM: symbol (punctuation) that does not belong to word.
 * NUM: 0 - 9.
 *
 * Other characters are ordered by probabilities
 * (0 is the most common character in the language).
 *
 * Orders are generic to a language. So the codepoint with order X in
 * CHARSET1 maps to the same character as the codepoint with the same
 * order X in CHARSET2 for the same language.
 * As such, it is possible to get missing order. For instance the
 * ligature of 'o' and 'e' exists in ISO-8859-15 but not in ISO-8859-1
 * even though they are both used for French. Same for the euro sign.
 */
static const unsigned char Iso_8859_2_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  0, 21,  9, 13,  3, 28, 20, 22,  1, 18, 11, 17, 15,  4,  2, /* 4X */
   14, 37,  5,  8, 10, 16, 31,  7, 32, 12,  6,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  0, 21,  9, 13,  3, 28, 20, 22,  1, 18, 11, 17, 15,  4,  2, /* 6X */
   14, 37,  5,  8, 10, 16, 31,  7, 32, 12,  6,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM, 24,SYM, 19,SYM, 81, 27,SYM,SYM, 43, 63, 82, 33,SYM, 50, 26, /* AX */
  SYM, 24,SYM, 19,SYM, 83, 27,SYM,SYM, 43, 63, 84, 33,SYM, 50, 26, /* BX */
   85, 39, 62, 53, 40, 86, 30, 45, 48, 36, 23, 61, 54, 42, 74, 87, /* CX */
   72, 29, 73, 25, 59, 65, 38,SYM, 70, 88, 51, 89, 35, 69, 79, 44, /* DX */
   90, 39, 62, 53, 40, 91, 30, 45, 48, 36, 23, 61, 54, 42, 74, 92, /* EX */
   72, 29, 73, 25, 59, 65, 38,SYM, 70, 93, 51, 94, 35, 69, 79,SYM, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Iso_8859_13_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  0, 21,  9, 13,  3, 28, 20, 22,  1, 18, 11, 17, 15,  4,  2, /* 4X */
   14, 37,  5,  8, 10, 16, 31,  7, 32, 12,  6,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  0, 21,  9, 13,  3, 28, 20, 22,  1, 18, 11, 17, 15,  4,  2, /* 6X */
   14, 37,  5,  8, 10, 16, 31,  7, 32, 12,  6,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, 47,SYM, 95,SYM,SYM,SYM,SYM, 52, /* AX */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, 47,SYM, 96,SYM,SYM,SYM,SYM, 52, /* BX */
   24, 97, 49, 30, 40, 64, 23, 66, 48, 36, 33, 78, 98, 80, 57, 99, /* CX */
   43, 29,100, 25, 34, 55, 38,SYM,101, 19, 27, 41, 35, 26, 50, 44, /* DX */
   24,102, 49, 30, 40, 64, 23, 66, 48, 36, 33, 78,103, 80, 57,104, /* EX */
   43, 29,105, 25, 34, 55, 38,SYM,106, 19, 27, 41, 35, 26, 50,SYM, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Iso_8859_16_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  0, 21,  9, 13,  3, 28, 20, 22,  1, 18, 11, 17, 15,  4,  2, /* 4X */
   14, 37,  5,  8, 10, 16, 31,  7, 32, 12,  6,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  0, 21,  9, 13,  3, 28, 20, 22,  1, 18, 11, 17, 15,  4,  2, /* 6X */
   14, 37,  5,  8, 10, 16, 31,  7, 32, 12,  6,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM, 24, 24, 19,SYM,SYM, 43,SYM, 43,SYM, 58,SYM, 33,SYM, 33, 26, /* AX */
  SYM,SYM, 48, 19, 50,SYM,SYM,SYM, 50, 48, 58,SYM, 68, 68, 77, 26, /* BX */
   56, 39, 62, 53, 40, 30, 52, 45, 46, 36, 60, 61,107, 42, 74, 67, /* CX */
   72, 29, 71, 25, 59, 65, 38, 27,108, 76, 51, 75, 35, 23,109, 44, /* DX */
   56, 39, 62, 53, 40, 30, 52, 45, 46, 36, 60, 61,110, 42, 74, 67, /* EX */
   72, 29, 71, 25, 59, 65, 38, 27,111, 76, 51, 75, 35, 23,112, 77, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Windows_1250_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  0, 21,  9, 13,  3, 28, 20, 22,  1, 18, 11, 17, 15,  4,  2, /* 4X */
   14, 37,  5,  8, 10, 16, 31,  7, 32, 12,  6,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  0, 21,  9, 13,  3, 28, 20, 22,  1, 18, 11, 17, 15,  4,  2, /* 6X */
   14, 37,  5,  8, 10, 16, 31,  7, 32, 12,  6,SYM,SYM,SYM,SYM,CTR, /* 7X */
  SYM,ILL,SYM,ILL,SYM,SYM,SYM,SYM,ILL,SYM, 43,SYM, 27,113, 50, 33, /* 8X */
  ILL,SYM,SYM,SYM,SYM,SYM,SYM,SYM,ILL,SYM, 43,SYM, 27,114, 50, 33, /* 9X */
  SYM,SYM,SYM, 19,SYM, 24,SYM,SYM,SYM,SYM, 63,SYM,SYM,SYM,SYM, 26, /* AX */
  SYM,SYM,SYM, 19,SYM,SYM,SYM,SYM,SYM, 24, 63,SYM,115,SYM,116, 26, /* BX */
  117, 39, 62, 53, 40,118, 30, 45, 48, 36, 23, 61, 54, 42, 74,119, /* CX */
   72, 29, 73, 25, 59, 65, 38,SYM, 70,120, 51,121, 35, 69, 79, 44, /* DX */
  122, 39, 62, 53, 40,123, 30, 45, 48, 36, 23, 61, 54, 42, 74,124, /* EX */
   72, 29, 73, 25, 59, 65, 38,SYM, 70,125, 51,126, 35, 69, 79,SYM, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Ibm852_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  0, 21,  9, 13,  3, 28, 20, 22,  1, 18, 11, 17, 15,  4,  2, /* 4X */
   14, 37,  5,  8, 10, 16, 31,  7, 32, 12,  6,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  0, 21,  9, 13,  3, 28, 20, 22,  1, 18, 11, 17, 15,  4,  2, /* 6X */
   14, 37,  5,  8, 10, 16, 31,  7, 32, 12,  6,SYM,SYM,SYM,SYM,CTR, /* 7X */
   45, 35, 36, 62, 40,127, 30, 45, 19, 61, 65, 65, 74, 33, 40, 30, /* 8X */
   36,128,129, 59, 38,130,131, 27, 27, 38, 35,132,133, 19,SYM, 48, /* 9X */
   39, 42, 25, 51, 24, 24, 50, 50, 23, 23,SYM, 33, 48, 63,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM, 39, 62, 54, 63,SYM,SYM,SYM,SYM, 26, 26,SYM, /* BX */
  SYM,SYM,SYM,SYM,SYM,SYM, 53, 53,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* CX */
   72, 72,134, 61,135, 73, 42, 74, 54,SYM,SYM,SYM,SYM, 79,136,SYM, /* DX */
   25, 44, 59, 29, 29, 73, 43, 43,137, 51,138,139, 69, 69, 79,SYM, /* EX */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,140, 70, 70,SYM,SYM, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Mac_Centraleurope_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  0, 21,  9, 13,  3, 28, 20, 22,  1, 18, 11, 17, 15,  4,  2, /* 4X */
   14, 37,  5,  8, 10, 16, 31,  7, 32, 12,  6,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  0, 21,  9, 13,  3, 28, 20, 22,  1, 18, 11, 17, 15,  4,  2, /* 6X */
   14, 37,  5,  8, 10, 16, 31,  7, 32, 12,  6,SYM,SYM,SYM,SYM,CTR, /* 7X */
   40, 49, 49, 36, 24, 38, 35, 39, 24, 48, 40, 48, 30, 30, 36, 33, /* 8X */
   33,141, 42,142, 66, 66, 78, 25, 78, 59, 38, 55, 51, 54, 54, 35, /* 9X */
  SYM,SYM, 23,SYM,SYM,SYM,SYM, 44,SYM,SYM,SYM, 23,SYM,SYM,143,144, /* AX */
  145, 57,SYM,SYM, 57, 80,SYM,SYM, 19,146,147,148,149,150,151,152, /* BX */
  153, 29,SYM,SYM, 29, 73,SYM,SYM,SYM,SYM,SYM, 73, 65, 55, 65, 34, /* CX */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, 34,154,155, 70,SYM,SYM, 70,156, /* DX */
  157, 43,SYM,SYM, 43, 27, 27, 39,158,159, 42, 50, 50, 41, 25, 59, /* EX */
   41,160, 51,161,162,163,164,165, 69, 69, 80, 26, 19, 26,166,SYM, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const int Unicode_Char_size = 76;
static const unsigned int Unicode_CharOrder[] =
{
   65,  0,  66, 21,  67,  9,  68, 13,  69,  3,  70, 28,  71, 20, 72, 22,
   73,  1,  74, 18,  75, 11,  76, 17,  77, 15,  78,  4,  79,  2, 80, 14,
   81, 37,  82,  5,  83,  8,  84, 10,  85, 16,  86, 31,  87,  7, 88, 32,
   89, 12,  90,  6,  97,  0,  98, 21,  99,  9, 100, 13, 101,  3,102, 28,
  103, 20, 104, 22, 105,  1, 106, 18, 107, 11, 108, 17, 109, 15,110,  4,
  111,  2, 112, 14, 113, 37, 114,  5, 115,  8, 116, 10, 117, 16,118, 31,
  119,  7, 120, 32, 121, 12, 122,  6, 201, 36, 211, 25, 220, 35,233, 36,
  243, 25, 252, 35, 260, 24, 261, 24, 262, 30, 263, 30, 280, 23,281, 23,
  321, 19, 322, 19, 323, 29, 324, 29, 332, 34, 333, 34, 346, 27,347, 27,
  377, 33, 378, 33, 379, 26, 380, 26,
};


/* Model Table:
 * Total considered sequences: 1353 / 1444
 * - Positive sequences: first 583 (0.9950348611960773)
 * - Probable sequences: next 199 (782-583) (0.003966625938834456)
 * - Neutral sequences: last 662 (0.0009985128650882302)
 * - Negative sequences: 91 (off-ratio)
 * Negative sequences: TODO
 */
static const PRUint8 PolishLangModel[] =
{
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,0,0,3,3,3,3,3,3,2,3,0,0,1,2,
  3,3,3,3,3,3,3,3,3,3,3,3,1,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,3,3,1,0,0,1,1,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,0,0,3,3,3,3,3,3,2,2,0,0,0,1,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,1,1,3,3,3,3,2,3,2,3,0,0,0,1,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,2,0,3,3,3,3,3,3,2,1,3,0,0,2,1,0,1,0,1,1,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,2,2,3,1,2,2,1,0,2,2,2,1,
  3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,1,0,1,0,0,1,0,0,1,1,0,0,
  3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,1,3,3,1,3,2,2,2,3,3,3,1,3,1,0,0,0,0,0,0,1,1,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,2,3,3,0,0,3,0,0,2,0,0,1,1,2,1,
  3,3,3,3,3,3,3,1,2,2,3,3,3,2,1,2,3,3,3,2,1,2,3,3,3,3,0,0,1,0,0,1,0,0,0,1,1,2,
  3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,2,3,3,2,3,2,2,3,3,3,3,1,1,2,0,0,2,1,0,2,1,1,1,
  3,3,3,3,3,3,1,3,3,3,3,3,2,2,2,3,3,3,1,3,2,2,2,3,3,3,3,1,2,0,0,1,0,0,2,1,1,0,
  3,2,3,2,3,3,3,3,3,3,3,3,0,3,3,3,2,3,3,3,3,3,2,1,0,0,3,3,3,3,3,1,0,2,2,0,1,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,1,2,0,0,2,0,3,2,1,2,0,
  3,3,3,3,3,3,2,2,3,3,3,3,3,2,3,2,3,3,2,3,1,1,3,3,2,3,0,0,2,0,0,1,0,0,1,1,1,0,
  3,3,3,3,3,2,1,2,3,3,2,3,3,2,3,3,3,3,1,3,2,3,2,3,2,3,1,1,2,0,0,1,1,0,1,2,1,0,
  3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,2,3,3,3,3,3,2,0,0,1,3,2,3,3,1,2,1,2,0,0,1,1,
  3,3,3,3,3,2,2,3,3,3,3,3,3,3,2,3,3,3,2,0,3,3,2,3,3,2,2,0,3,1,0,2,1,0,0,2,2,0,
  3,3,3,3,3,2,2,3,3,3,2,3,0,3,3,3,3,2,1,1,2,3,1,3,3,3,1,3,2,0,1,1,0,0,2,1,0,1,
  3,1,3,3,3,1,1,2,2,3,3,3,3,2,3,2,3,0,0,2,3,2,1,3,3,3,2,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,2,3,2,1,2,2,2,3,1,3,3,3,1,3,2,2,3,3,3,3,0,0,1,0,0,1,1,0,1,2,1,0,
  3,3,3,3,3,3,1,2,3,3,1,3,3,2,1,2,3,3,3,3,1,2,1,3,3,3,0,0,2,0,0,1,0,0,1,1,1,1,
  3,3,3,3,3,3,1,3,3,2,3,2,3,2,1,3,3,3,1,3,1,2,1,2,2,3,1,1,1,0,0,1,0,0,2,1,1,0,
  0,0,0,0,0,1,3,1,3,3,3,3,0,3,3,0,0,3,0,3,3,3,0,0,0,0,3,3,0,0,2,0,0,2,0,0,0,0,
  0,0,0,0,0,0,3,2,3,3,3,2,0,3,3,1,0,0,0,3,3,2,0,0,0,0,3,1,0,0,3,0,0,1,0,0,0,0,
  0,0,0,0,2,3,3,3,3,3,3,2,0,3,1,1,0,3,3,3,3,3,0,0,0,0,3,0,0,0,0,0,0,3,0,0,0,0,
  3,2,3,3,3,0,0,2,3,2,0,3,3,3,1,2,3,3,0,1,1,3,1,2,3,2,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,3,3,0,3,0,3,0,1,0,0,2,3,0,3,0,0,0,1,0,0,0,0,0,0,0,1,3,0,0,0,0,0,0,0,
  3,3,3,3,2,3,0,1,2,2,3,1,2,2,1,2,3,3,1,1,2,1,1,2,2,1,0,0,3,0,0,1,0,0,0,2,1,0,
  0,0,0,0,0,0,0,0,3,3,0,2,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  1,0,0,0,0,0,0,2,1,0,0,1,0,1,0,1,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,
  3,3,3,3,1,2,1,0,2,1,1,1,3,1,1,0,2,1,1,0,1,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1,0,
  2,3,2,1,1,0,0,0,1,1,2,0,1,0,1,1,1,1,0,0,0,1,1,0,0,0,0,0,2,0,0,3,3,0,0,0,1,0,
  0,0,0,0,3,3,0,3,1,2,0,1,0,3,0,2,0,2,0,0,0,2,0,0,0,0,0,0,0,1,2,0,0,0,0,0,0,0,
  1,1,0,1,1,1,1,1,2,1,1,2,1,1,0,1,1,0,1,0,1,1,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,1,2,2,0,0,1,2,1,1,0,1,1,1,0,1,1,0,1,1,2,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,
  1,1,1,1,1,2,1,0,1,1,2,0,0,1,1,2,0,1,0,0,1,1,1,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,
  1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,1,
};


const SequenceModel Iso_8859_2PolishModel =
{
  Iso_8859_2_CharToOrderMap,
  PolishLangModel,
  38,
  (float)0.9990014871349118,
  PR_TRUE,
  "ISO-8859-2",
  "pl"
};

const SequenceModel Iso_8859_13PolishModel =
{
  Iso_8859_13_CharToOrderMap,
  PolishLangModel,
  38,
  (float)0.9990014871349118,
  PR_TRUE,
  "ISO-8859-13",
  "pl"
};

const SequenceModel Iso_8859_16PolishModel =
{
  Iso_8859_16_CharToOrderMap,
  PolishLangModel,
  38,
  (float)0.9990014871349118,
  PR_TRUE,
  "ISO-8859-16",
  "pl"
};

const SequenceModel Windows_1250PolishModel =
{
  Windows_1250_CharToOrderMap,
  PolishLangModel,
  38,
  (float)0.9990014871349118,
  PR_TRUE,
  "WINDOWS-1250",
  "pl"
};

const SequenceModel Ibm852PolishModel =
{
  Ibm852_CharToOrderMap,
  PolishLangModel,
  38,
  (float)0.9990014871349118,
  PR_TRUE,
  "IBM852",
  "pl"
};

const SequenceModel Mac_CentraleuropePolishModel =
{
  Mac_Centraleurope_CharToOrderMap,
  PolishLangModel,
  38,
  (float)0.9990014871349118,
  PR_TRUE,
  "MAC-CENTRALEUROPE",
  "pl"
};

const LanguageModel PolishModel =
{
  "pl",
  Unicode_CharOrder,
  76,
  PolishLangModel,
  38,
  6,
  (float)0.43817523500889866,
  24,
  (float)0.030420295035551964,
};
