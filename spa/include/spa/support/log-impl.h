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

#ifndef __SPA_LOG_IMPL_H__
#define __SPA_LOG_IMPL_H__

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>

#include <spa/support/log.h>

static inline void spa_log_impl_logv(struct spa_log *log,
				     enum spa_log_level level,
				     const char *file,
				     int line,
				     const char *func,
				     const char *fmt,
				     va_list args)
{
        char text[512], location[1024];
        static const char *levels[] = { "-", "E", "W", "I", "D", "T" };

        vsnprintf(text, sizeof(text), fmt, args);
        snprintf(location, sizeof(location), "[%s][%s:%i %s()] %s\n",
                levels[level], strrchr(file, '/') + 1, line, func, text);
        fputs(location, stderr);
}
static inline void spa_log_impl_log(struct spa_log *log,
				    enum spa_log_level level,
				    const char *file,
				    int line,
				    const char *func,
				    const char *fmt, ...)
{
	va_list args;
	va_start(args, fmt);
	spa_log_impl_logv(log, level, file, line, func, fmt, args);
	va_end(args);
}

#define SPA_LOG_IMPL_DEFINE(name)		\
struct {					\
	struct spa_log log;			\
} name

#define SPA_LOG_IMPL_INIT			\
        { { SPA_VERSION_LOG,			\
            NULL,				\
	    SPA_LOG_LEVEL_INFO,			\
	    spa_log_impl_log,			\
	    spa_log_impl_logv,} }

#define SPA_LOG_IMPL(name)			\
        SPA_LOG_IMPL_DEFINE(name) = SPA_LOG_IMPL_INIT

#ifdef __cplusplus
}  /* extern "C" */
#endif
#endif /* __SPA_LOG_IMPL_H__ */
