/*
 *  Copyright (c) 2010 The WebM project authors. All Rights Reserved.
 *
 *  Use of this source code is governed by a BSD-style license
 *  that can be found in the LICENSE file in the root of the source
 *  tree. An additional intellectual property rights grant can be found
 *  in the file PATENTS.  All contributing project authors may
 *  be found in the AUTHORS file in the root of the source tree.
*/

#ifndef VP8_COMMON_VP8_ENTROPYMODEDATA_H_
#define VP8_COMMON_VP8_ENTROPYMODEDATA_H_

/*Generated file, included by entropymode.c*/


const struct vp8_token_struct vp8_bmode_encodings[VP8_BINTRAMODES] =
{
    { 0, 1 },
    { 2, 2 },
    { 6, 3 },
    { 28, 5 },
    { 30, 5 },
    { 58, 6 },
    { 59, 6 },
    { 62, 6 },
    { 126, 7 },
    { 127, 7 }
};

const struct vp8_token_struct vp8_ymode_encodings[VP8_YMODES] =
{
    { 0, 1 },
    { 4, 3 },
    { 5, 3 },
    { 6, 3 },
    { 7, 3 }
};

const struct vp8_token_struct vp8_kf_ymode_encodings[VP8_YMODES] =
{
    { 4, 3 },
    { 5, 3 },
    { 6, 3 },
    { 7, 3 },
    { 0, 1 }
};

const struct vp8_token_struct vp8_uv_mode_encodings[VP8_UV_MODES] =
{
    { 0, 1 },
    { 2, 2 },
    { 6, 3 },
    { 7, 3 }
};

const struct vp8_token_struct vp8_mbsplit_encodings[VP8_NUMMBSPLITS] =
{
    { 6, 3 },
    { 7, 3 },
    { 2, 2 },
    { 0, 1 }
};

const struct vp8_token_struct vp8_mv_ref_encoding_array[VP8_MVREFS] =
{
    { 2, 2 },
    { 6, 3 },
    { 0, 1 },
    { 14, 4 },
    { 15, 4 }
};

const struct vp8_token_struct vp8_sub_mv_ref_encoding_array[VP8_SUBMVREFS] =
{
    { 0, 1 },
    { 2, 2 },
    { 6, 3 },
    { 7, 3 }
};

const struct vp8_token_struct vp8_small_mvencodings[8] =
{
    { 0, 3 },
    { 1, 3 },
    { 2, 3 },
    { 3, 3 },
    { 4, 3 },
    { 5, 3 },
    { 6, 3 },
    { 7, 3 }
};

const vp8_prob vp8_ymode_prob[VP8_YMODES-1] =
{
    112, 86, 140, 37
};

const vp8_prob vp8_kf_ymode_prob[VP8_YMODES-1] =
{
    145, 156, 163, 128
};

const vp8_prob vp8_uv_mode_prob[VP8_UV_MODES-1] =
{
    162, 101, 204
};

const vp8_prob vp8_kf_uv_mode_prob[VP8_UV_MODES-1] =
{
    142, 114, 183
};

const vp8_prob vp8_bmode_prob[VP8_BINTRAMODES-1] =
{
    120, 90, 79, 133, 87, 85, 80, 111, 151
};



const vp8_prob vp8_kf_bmode_prob
[VP8_BINTRAMODES] [VP8_BINTRAMODES] [VP8_BINTRAMODES-1] =
{
    {
        { 231, 120,  48,  89, 115, 113, 120, 152, 112 },
        { 152, 179,  64, 126, 170, 118,  46,  70,  95 },
        { 175,  69, 143,  80,  85,  82,  72, 155, 103 },
        {  56,  58,  10, 171, 218, 189,  17,  13, 152 },
        { 144,  71,  10,  38, 171, 213, 144,  34,  26 },
        { 114,  26,  17, 163,  44, 195,  21,  10, 173 },
        { 121,  24,  80, 195,  26,  62,  44,  64,  85 },
        { 170,  46,  55,  19, 136, 160,  33, 206,  71 },
        {  63,  20,   8, 114, 114, 208,  12,   9, 226 },
        {  81,  40,  11,  96, 182,  84,  29,  16,  36 }
    },
    {
        { 134, 183,  89, 137,  98, 101, 106, 165, 148 },
        {  72, 187, 100, 130, 157, 111,  32,  75,  80 },
        {  66, 102, 167,  99,  74,  62,  40, 234, 128 },
        {  41,  53,   9, 178, 241, 141,  26,   8, 107 },
        { 104,  79,  12,  27, 217, 255,  87,  17,   7 },
        {  74,  43,  26, 146,  73, 166,  49,  23, 157 },
        {  65,  38, 105, 160,  51,  52,  31, 115, 128 },
        {  87,  68,  71,  44, 114,  51,  15, 186,  23 },
        {  47,  41,  14, 110, 182, 183,  21,  17, 194 },
        {  66,  45,  25, 102, 197, 189,  23,  18,  22 }
    },
    {
        {  88,  88, 147, 150,  42,  46,  45, 196, 205 },
        {  43,  97, 183, 117,  85,  38,  35, 179,  61 },
        {  39,  53, 200,  87,  26,  21,  43, 232, 171 },
        {  56,  34,  51, 104, 114, 102,  29,  93,  77 },
        { 107,  54,  32,  26,  51,   1,  81,  43,  31 },
        {  39,  28,  85, 171,  58, 165,  90,  98,  64 },
        {  34,  22, 116, 206,  23,  34,  43, 166,  73 },
        {  68,  25, 106,  22,  64, 171,  36, 225, 114 },
        {  34,  19,  21, 102, 132, 188,  16,  76, 124 },
        {  62,  18,  78,  95,  85,  57,  50,  48,  51 }
    },
    {
        { 193, 101,  35, 159, 215, 111,  89,  46, 111 },
        {  60, 148,  31, 172, 219, 228,  21,  18, 111 },
        { 112, 113,  77,  85, 179, 255,  38, 120, 114 },
        {  40,  42,   1, 196, 245, 209,  10,  25, 109 },
        { 100,  80,   8,  43, 154,   1,  51,  26,  71 },
        {  88,  43,  29, 140, 166, 213,  37,  43, 154 },
        {  61,  63,  30, 155,  67,  45,  68,   1, 209 },
        { 142,  78,  78,  16, 255, 128,  34, 197, 171 },
        {  41,  40,   5, 102, 211, 183,   4,   1, 221 },
        {  51,  50,  17, 168, 209, 192,  23,  25,  82 }
    },
    {
        { 125,  98,  42,  88, 104,  85, 117, 175,  82 },
        {  95,  84,  53,  89, 128, 100, 113, 101,  45 },
        {  75,  79, 123,  47,  51, 128,  81, 171,   1 },
        {  57,  17,   5,  71, 102,  57,  53,  41,  49 },
        { 115,  21,   2,  10, 102, 255, 166,  23,   6 },
        {  38,  33,  13, 121,  57,  73,  26,   1,  85 },
        {  41,  10,  67, 138,  77, 110,  90,  47, 114 },
        { 101,  29,  16,  10,  85, 128, 101, 196,  26 },
        {  57,  18,  10, 102, 102, 213,  34,  20,  43 },
        { 117,  20,  15,  36, 163, 128,  68,   1,  26 }
    },
    {
        { 138,  31,  36, 171,  27, 166,  38,  44, 229 },
        {  67,  87,  58, 169,  82, 115,  26,  59, 179 },
        {  63,  59,  90, 180,  59, 166,  93,  73, 154 },
        {  40,  40,  21, 116, 143, 209,  34,  39, 175 },
        {  57,  46,  22,  24, 128,   1,  54,  17,  37 },
        {  47,  15,  16, 183,  34, 223,  49,  45, 183 },
        {  46,  17,  33, 183,   6,  98,  15,  32, 183 },
        {  65,  32,  73, 115,  28, 128,  23, 128, 205 },
        {  40,   3,   9, 115,  51, 192,  18,   6, 223 },
        {  87,  37,   9, 115,  59,  77,  64,  21,  47 }
    },
    {
        { 104,  55,  44, 218,   9,  54,  53, 130, 226 },
        {  64,  90,  70, 205,  40,  41,  23,  26,  57 },
        {  54,  57, 112, 184,   5,  41,  38, 166, 213 },
        {  30,  34,  26, 133, 152, 116,  10,  32, 134 },
        {  75,  32,  12,  51, 192, 255, 160,  43,  51 },
        {  39,  19,  53, 221,  26, 114,  32,  73, 255 },
        {  31,   9,  65, 234,   2,  15,   1, 118,  73 },
        {  88,  31,  35,  67, 102,  85,  55, 186,  85 },
        {  56,  21,  23, 111,  59, 205,  45,  37, 192 },
        {  55,  38,  70, 124,  73, 102,   1,  34,  98 }
    },
    {
        { 102,  61,  71,  37,  34,  53,  31, 243, 192 },
        {  69,  60,  71,  38,  73, 119,  28, 222,  37 },
        {  68,  45, 128,  34,   1,  47,  11, 245, 171 },
        {  62,  17,  19,  70, 146,  85,  55,  62,  70 },
        {  75,  15,   9,   9,  64, 255, 184, 119,  16 },
        {  37,  43,  37, 154, 100, 163,  85, 160,   1 },
        {  63,   9,  92, 136,  28,  64,  32, 201,  85 },
        {  86,   6,  28,   5,  64, 255,  25, 248,   1 },
        {  56,   8,  17, 132, 137, 255,  55, 116, 128 },
        {  58,  15,  20,  82, 135,  57,  26, 121,  40 }
    },
    {
        { 164,  50,  31, 137, 154, 133,  25,  35, 218 },
        {  51, 103,  44, 131, 131, 123,  31,   6, 158 },
        {  86,  40,  64, 135, 148, 224,  45, 183, 128 },
        {  22,  26,  17, 131, 240, 154,  14,   1, 209 },
        {  83,  12,  13,  54, 192, 255,  68,  47,  28 },
        {  45,  16,  21,  91,  64, 222,   7,   1, 197 },
        {  56,  21,  39, 155,  60, 138,  23, 102, 213 },
        {  85,  26,  85,  85, 128, 128,  32, 146, 171 },
        {  18,  11,   7,  63, 144, 171,   4,   4, 246 },
        {  35,  27,  10, 146, 174, 171,  12,  26, 128 }
    },
    {
        { 190,  80,  35,  99, 180,  80, 126,  54,  45 },
        {  85, 126,  47,  87, 176,  51,  41,  20,  32 },
        { 101,  75, 128, 139, 118, 146, 116, 128,  85 },
        {  56,  41,  15, 176, 236,  85,  37,   9,  62 },
        { 146,  36,  19,  30, 171, 255,  97,  27,  20 },
        {  71,  30,  17, 119, 118, 255,  17,  18, 138 },
        { 101,  38,  60, 138,  55,  70,  43,  26, 142 },
        { 138,  45,  61,  62, 219,   1,  81, 188,  64 },
        {  32,  41,  20, 117, 151, 142,  20,  21, 163 },
        { 112,  19,  12,  61, 195, 128,  48,   4,  24 }
    }
};

#endif  // VP8_COMMON_VP8_ENTROPYMODEDATA_H_
