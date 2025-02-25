/*-
 * SPDX-License-Identifier: BSD-3-Clause
 *
 * Copyright (c) 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)myhistedit.h	8.2 (Berkeley) 5/4/95
 * $FreeBSD$
 */

#include <histedit.h>

extern History *hist;
extern EditLine *el;
extern int displayhist;

#ifdef HAVE_FN_COMPLETE2
#define FN_QUOTE_MATCH 1U
/* while this is not a part of the public API in libedit, it is a part of
 * its public ABI (in recent versions, older ones did not have it, which
 * is why this is guarded here)
 *
 * i hope libedit will at very least play nice and not break it, as that
 * could get ugly
 */
int fn_complete2(EditLine *,
    char *(*)(const char *, int),
    char **(*)(const char *, int, int),
    const wchar_t *, const wchar_t *, const char *(*)(const char *), size_t,
    int *, int *, int *, int *, unsigned int);
char *fn_tilde_expand(const char *);
#endif

void histedit(void);
void sethistsize(const char *);
void setterm(const char *);
void histload(void);
void histsave(void);
