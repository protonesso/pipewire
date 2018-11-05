/* Simple Plugin API
 *
 * Copyright © 2018 Wim Taymans
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#ifndef __SPA_VIDEO_TYPES_H__
#define __SPA_VIDEO_TYPES_H__

#ifdef __cplusplus
extern "C" {
#endif

#include <spa/param/video/raw.h>

#define SPA_TYPE__VideoFormat		SPA_TYPE_ENUM_BASE "VideoFormat"
#define SPA_TYPE_VIDEO_FORMAT_BASE	SPA_TYPE__VideoFormat ":"

static const struct spa_type_info spa_type_video_format[] = {
	{ SPA_VIDEO_FORMAT_ENCODED,	SPA_TYPE_VIDEO_FORMAT_BASE "encoded", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_I420,	SPA_TYPE_VIDEO_FORMAT_BASE "I420", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_YV12,	SPA_TYPE_VIDEO_FORMAT_BASE "YV12", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_YUY2,	SPA_TYPE_VIDEO_FORMAT_BASE "YUY2", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_UYVY,	SPA_TYPE_VIDEO_FORMAT_BASE "UYVY", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_AYUV,	SPA_TYPE_VIDEO_FORMAT_BASE "AYUV", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_RGBx,	SPA_TYPE_VIDEO_FORMAT_BASE "RGBx", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_BGRx,	SPA_TYPE_VIDEO_FORMAT_BASE "BGRx", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_xRGB,	SPA_TYPE_VIDEO_FORMAT_BASE "xRGB", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_xBGR,	SPA_TYPE_VIDEO_FORMAT_BASE "xBGR", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_RGBA,	SPA_TYPE_VIDEO_FORMAT_BASE "RGBA", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_BGRA,	SPA_TYPE_VIDEO_FORMAT_BASE "BGRA", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_ARGB,	SPA_TYPE_VIDEO_FORMAT_BASE "ARGB", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_ABGR,	SPA_TYPE_VIDEO_FORMAT_BASE "ABGR", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_RGB,		SPA_TYPE_VIDEO_FORMAT_BASE "RGB", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_BGR,		SPA_TYPE_VIDEO_FORMAT_BASE "BGR", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_Y41B,	SPA_TYPE_VIDEO_FORMAT_BASE "Y41B", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_Y42B,	SPA_TYPE_VIDEO_FORMAT_BASE "Y42B", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_YVYU,	SPA_TYPE_VIDEO_FORMAT_BASE "YVYU", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_Y444,	SPA_TYPE_VIDEO_FORMAT_BASE "Y444", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_v210,	SPA_TYPE_VIDEO_FORMAT_BASE "v210", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_v216,	SPA_TYPE_VIDEO_FORMAT_BASE "v216", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_NV12,	SPA_TYPE_VIDEO_FORMAT_BASE "NV12", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_NV21,	SPA_TYPE_VIDEO_FORMAT_BASE "NV21", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_GRAY8,	SPA_TYPE_VIDEO_FORMAT_BASE "GRAY8", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_GRAY16_BE,	SPA_TYPE_VIDEO_FORMAT_BASE "GRAY16_BE", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_GRAY16_LE,	SPA_TYPE_VIDEO_FORMAT_BASE "GRAY16_LE", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_v308,	SPA_TYPE_VIDEO_FORMAT_BASE "v308", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_RGB16,	SPA_TYPE_VIDEO_FORMAT_BASE "RGB16", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_BGR16,	SPA_TYPE_VIDEO_FORMAT_BASE "BGR16", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_RGB15,	SPA_TYPE_VIDEO_FORMAT_BASE "RGB15", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_BGR15,	SPA_TYPE_VIDEO_FORMAT_BASE "BGR15", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_UYVP,	SPA_TYPE_VIDEO_FORMAT_BASE "UYVP", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_A420,	SPA_TYPE_VIDEO_FORMAT_BASE "A420", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_RGB8P,	SPA_TYPE_VIDEO_FORMAT_BASE "RGB8P", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_YUV9,	SPA_TYPE_VIDEO_FORMAT_BASE "YUV9", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_YVU9,	SPA_TYPE_VIDEO_FORMAT_BASE "YVU9", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_IYU1,	SPA_TYPE_VIDEO_FORMAT_BASE "IYU1", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_ARGB64,	SPA_TYPE_VIDEO_FORMAT_BASE "ARGB64", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_AYUV64,	SPA_TYPE_VIDEO_FORMAT_BASE "AYUV64", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_r210,	SPA_TYPE_VIDEO_FORMAT_BASE "r210", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_I420_10BE,	SPA_TYPE_VIDEO_FORMAT_BASE "I420_10BE", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_I420_10LE,	SPA_TYPE_VIDEO_FORMAT_BASE "I420_10LE", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_I422_10BE,	SPA_TYPE_VIDEO_FORMAT_BASE "I422_10BE", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_I422_10LE,	SPA_TYPE_VIDEO_FORMAT_BASE "I422_10LE", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_Y444_10BE,	SPA_TYPE_VIDEO_FORMAT_BASE "Y444_10BE", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_Y444_10LE,	SPA_TYPE_VIDEO_FORMAT_BASE "Y444_10LE", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_GBR,		SPA_TYPE_VIDEO_FORMAT_BASE "GBR", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_GBR_10BE,	SPA_TYPE_VIDEO_FORMAT_BASE "GBR_10BE", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_GBR_10LE,	SPA_TYPE_VIDEO_FORMAT_BASE "GBR_10LE", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_NV16,	SPA_TYPE_VIDEO_FORMAT_BASE "NV16", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_NV24,	SPA_TYPE_VIDEO_FORMAT_BASE "NV24", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_NV12_64Z32,	SPA_TYPE_VIDEO_FORMAT_BASE "NV12_64Z32", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_A420_10BE,	SPA_TYPE_VIDEO_FORMAT_BASE "A420_10BE", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_A420_10LE,	SPA_TYPE_VIDEO_FORMAT_BASE "A420_10LE", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_A422_10BE,	SPA_TYPE_VIDEO_FORMAT_BASE "A422_10BE", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_A422_10LE,	SPA_TYPE_VIDEO_FORMAT_BASE "A422_10LE", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_A444_10BE,	SPA_TYPE_VIDEO_FORMAT_BASE "A444_10BE", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_A444_10LE,	SPA_TYPE_VIDEO_FORMAT_BASE "A444_10LE", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_NV61,	SPA_TYPE_VIDEO_FORMAT_BASE "NV61", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_P010_10BE,	SPA_TYPE_VIDEO_FORMAT_BASE "P010_10BE", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_P010_10LE,	SPA_TYPE_VIDEO_FORMAT_BASE "P010_10LE", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_IYU2,	SPA_TYPE_VIDEO_FORMAT_BASE "IYU2", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_VYUY,	SPA_TYPE_VIDEO_FORMAT_BASE "VYUY", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_GBRA,	SPA_TYPE_VIDEO_FORMAT_BASE "GBRA", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_GBRA_10BE,	SPA_TYPE_VIDEO_FORMAT_BASE "GBRA_10BE", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_GBRA_10LE,	SPA_TYPE_VIDEO_FORMAT_BASE "GBRA_10LE", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_GBR_12BE,	SPA_TYPE_VIDEO_FORMAT_BASE "GBR_12BE", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_GBR_12LE,	SPA_TYPE_VIDEO_FORMAT_BASE "GBR_12LE", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_GBRA_12BE,	SPA_TYPE_VIDEO_FORMAT_BASE "GBRA_12BE", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_GBRA_12LE,	SPA_TYPE_VIDEO_FORMAT_BASE "GBRA_12LE", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_I420_12BE,	SPA_TYPE_VIDEO_FORMAT_BASE "I420_12BE", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_I420_12LE,	SPA_TYPE_VIDEO_FORMAT_BASE "I420_12LE", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_I422_12BE,	SPA_TYPE_VIDEO_FORMAT_BASE "I422_12BE", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_I422_12LE,	SPA_TYPE_VIDEO_FORMAT_BASE "I422_12LE", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_Y444_12BE,	SPA_TYPE_VIDEO_FORMAT_BASE "Y444_12BE", SPA_TYPE_Int, },
	{ SPA_VIDEO_FORMAT_Y444_12LE,	SPA_TYPE_VIDEO_FORMAT_BASE "Y444_12LE", SPA_TYPE_Int, },
        { 0, NULL, },
};

#ifdef __cplusplus
}  /* extern "C" */
#endif

#endif /* __SPA_VIDEO_RAW_TYPES_H__ */
