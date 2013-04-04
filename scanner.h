#ifndef yyHEADER_H
#define yyHEADER_H 1
#define yyIN_HEADER 1

#line 6 "scanner.h"

#line 8 "scanner.h"

#define  YY_INT_ALIGNED short int

/* A lexical scanner generated by flex */

/* %not-for-header */

#define FLEX_SCANNER
#define YY_FLEX_MAJOR_VERSION 2
#define YY_FLEX_MINOR_VERSION 5
#define YY_FLEX_SUBMINOR_VERSION 35
#if YY_FLEX_SUBMINOR_VERSION > 0
#define FLEX_BETA
#endif

/* %if-c++-only */
/* %endif */

/* %if-c-only */
    
/* %endif */

/* %if-c-only */

/* %endif */

/* First, we deal with  platform-specific or compiler-specific issues. */

/* begin standard C headers. */
/* %if-c-only */
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>
/* %endif */

/* %if-tables-serialization */
#include <sys/types.h>
#include <netinet/in.h>
/* %endif */
/* end standard C headers. */

/* %if-c-or-c++ */
/* flex integer type definitions */

#ifndef FLEXINT_H
#define FLEXINT_H

/* C99 systems have <inttypes.h>. Non-C99 systems may or may not. */

#if defined (__STDC_VERSION__) && __STDC_VERSION__ >= 199901L

/* C99 says to define __STDC_LIMIT_MACROS before including stdint.h,
 * if you want the limit (max/min) macros for int types. 
 */
#ifndef __STDC_LIMIT_MACROS
#define __STDC_LIMIT_MACROS 1
#endif

#include <inttypes.h>
typedef int8_t flex_int8_t;
typedef uint8_t flex_uint8_t;
typedef int16_t flex_int16_t;
typedef uint16_t flex_uint16_t;
typedef int32_t flex_int32_t;
typedef uint32_t flex_uint32_t;
typedef uint64_t flex_uint64_t;
#else
typedef signed char flex_int8_t;
typedef short int flex_int16_t;
typedef int flex_int32_t;
typedef unsigned char flex_uint8_t; 
typedef unsigned short int flex_uint16_t;
typedef unsigned int flex_uint32_t;
#endif /* ! C99 */

/* Limits of integral types. */
#ifndef INT8_MIN
#define INT8_MIN               (-128)
#endif
#ifndef INT16_MIN
#define INT16_MIN              (-32767-1)
#endif
#ifndef INT32_MIN
#define INT32_MIN              (-2147483647-1)
#endif
#ifndef INT8_MAX
#define INT8_MAX               (127)
#endif
#ifndef INT16_MAX
#define INT16_MAX              (32767)
#endif
#ifndef INT32_MAX
#define INT32_MAX              (2147483647)
#endif
#ifndef UINT8_MAX
#define UINT8_MAX              (255U)
#endif
#ifndef UINT16_MAX
#define UINT16_MAX             (65535U)
#endif
#ifndef UINT32_MAX
#define UINT32_MAX             (4294967295U)
#endif

#endif /* ! FLEXINT_H */

/* %endif */

/* %if-c++-only */
/* %endif */

#ifdef __cplusplus

/* The "const" storage-class-modifier is valid. */
#define YY_USE_CONST

#else	/* ! __cplusplus */

/* C99 requires __STDC__ to be defined as 1. */
#if defined (__STDC__)

#define YY_USE_CONST

#endif	/* defined (__STDC__) */
#endif	/* ! __cplusplus */

#ifdef YY_USE_CONST
#define yyconst const
#else
#define yyconst
#endif

/* %not-for-header */

/* %not-for-header */

/* %if-reentrant */
/* %endif */

/* %if-not-reentrant */

/* %endif */

/* Size of default input buffer. */
#ifndef YY_BUF_SIZE
#define YY_BUF_SIZE 16384
#endif

#ifndef YY_TYPEDEF_YY_BUFFER_STATE
#define YY_TYPEDEF_YY_BUFFER_STATE
typedef struct yy_buffer_state *YY_BUFFER_STATE;
#endif

#ifndef YY_TYPEDEF_YY_SIZE_T
#define YY_TYPEDEF_YY_SIZE_T
typedef size_t yy_size_t;
#endif

/* %if-not-reentrant */
extern yy_size_t yyleng;
/* %endif */

/* %if-c-only */
/* %if-not-reentrant */
extern FILE *yyin, *yyout;
/* %endif */
/* %endif */

#ifndef YY_STRUCT_YY_BUFFER_STATE
#define YY_STRUCT_YY_BUFFER_STATE
struct yy_buffer_state
	{
/* %if-c-only */
	FILE *yy_input_file;
/* %endif */

/* %if-c++-only */
/* %endif */

	char *yy_ch_buf;		/* input buffer */
	char *yy_buf_pos;		/* current position in input buffer */

	/* Size of input buffer in bytes, not including room for EOB
	 * characters.
	 */
	yy_size_t yy_buf_size;

	/* Number of characters read into yy_ch_buf, not including EOB
	 * characters.
	 */
	yy_size_t yy_n_chars;

	/* Whether we "own" the buffer - i.e., we know we created it,
	 * and can realloc() it to grow it, and should free() it to
	 * delete it.
	 */
	int yy_is_our_buffer;

	/* Whether this is an "interactive" input source; if so, and
	 * if we're using stdio for input, then we want to use getc()
	 * instead of fread(), to make sure we stop fetching input after
	 * each newline.
	 */
	int yy_is_interactive;

	/* Whether we're considered to be at the beginning of a line.
	 * If so, '^' rules will be active on the next match, otherwise
	 * not.
	 */
	int yy_at_bol;

    int yy_bs_lineno; /**< The line count. */
    int yy_bs_column; /**< The column count. */
    
	/* Whether to try to fill the input buffer when we reach the
	 * end of it.
	 */
	int yy_fill_buffer;

	int yy_buffer_status;

	};
#endif /* !YY_STRUCT_YY_BUFFER_STATE */

/* %if-c-only Standard (non-C++) definition */
/* %not-for-header */

/* %endif */

/* %if-c-only Standard (non-C++) definition */

/* %if-not-reentrant */
/* %not-for-header */

/* %endif */

void yyrestart (FILE *input_file  );
void yy_switch_to_buffer (YY_BUFFER_STATE new_buffer  );
YY_BUFFER_STATE yy_create_buffer (FILE *file,int size  );
void yy_delete_buffer (YY_BUFFER_STATE b  );
void yy_flush_buffer (YY_BUFFER_STATE b  );
void yypush_buffer_state (YY_BUFFER_STATE new_buffer  );
void yypop_buffer_state (void );

YY_BUFFER_STATE yy_scan_buffer (char *base,yy_size_t size  );
YY_BUFFER_STATE yy_scan_string (yyconst char *yy_str  );
YY_BUFFER_STATE yy_scan_bytes (yyconst char *bytes,yy_size_t len  );

/* %endif */

void *yyalloc (yy_size_t  );
void *yyrealloc (void *,yy_size_t  );
void yyfree (void *  );

/* %% [1.0] yytext/yyin/yyout/yy_state_type/yylineno etc. def's & init go here */

#define FLEX_DEBUG

extern int yylineno;

extern char *yytext;
#define yytext_ptr yytext

/* %if-c-only Standard (non-C++) definition */

/* %endif */

#ifdef YY_HEADER_EXPORT_START_CONDITIONS
#define INITIAL 0

#endif

#ifndef YY_NO_UNISTD_H
/* Special case for "unistd.h", since it is non-ANSI. We include it way
 * down here because we want the user's section 1 to have been scanned first.
 * The user has a chance to override it with an option.
 */
/* %if-c-only */
#include <unistd.h>
/* %endif */
/* %if-c++-only */
/* %endif */
#endif

#ifndef YY_EXTRA_TYPE
#define YY_EXTRA_TYPE void *
#endif

/* %if-c-only Reentrant structure and macros (non-C++). */
/* %if-reentrant */
/* %if-c-only */

/* %endif */
/* %if-reentrant */
/* %endif */
/* %endif End reentrant structures and macros. */

/* Accessor methods to globals.
   These are made visible to non-reentrant scanners for convenience. */

int yylex_destroy (void );

int yyget_debug (void );

void yyset_debug (int debug_flag  );

YY_EXTRA_TYPE yyget_extra (void );

void yyset_extra (YY_EXTRA_TYPE user_defined  );

FILE *yyget_in (void );

void yyset_in  (FILE * in_str  );

FILE *yyget_out (void );

void yyset_out  (FILE * out_str  );

yy_size_t yyget_leng (void );

char *yyget_text (void );

int yyget_lineno (void );

void yyset_lineno (int line_number  );

/* %if-bison-bridge */
/* %endif */

/* Macros after this point can all be overridden by user definitions in
 * section 1.
 */

#ifndef YY_SKIP_YYWRAP
#ifdef __cplusplus
extern "C" int yywrap (void );
#else
extern int yywrap (void );
#endif
#endif

/* %not-for-header */

/* %endif */

#ifndef yytext_ptr
static void yy_flex_strncpy (char *,yyconst char *,int );
#endif

#ifdef YY_NEED_STRLEN
static int yy_flex_strlen (yyconst char * );
#endif

#ifndef YY_NO_INPUT
/* %if-c-only Standard (non-C++) definition */
/* %not-for-header */

/* %endif */
#endif

/* %if-c-only */

/* %endif */

/* Amount of stuff to slurp up with each read. */
#ifndef YY_READ_BUF_SIZE
#define YY_READ_BUF_SIZE 8192
#endif

/* Number of entries by which start-condition stack grows. */
#ifndef YY_START_STACK_INCR
#define YY_START_STACK_INCR 25
#endif

/* %if-tables-serialization structures and prototypes */
#ifdef FLEX_SCANNER
/*
dnl  tables_shared.h - tables serialization header
dnl
dnl  Copyright (c) 1990 The Regents of the University of California.
dnl  All rights reserved.
dnl
dnl  This code is derived from software contributed to Berkeley by
dnl  Vern Paxson.
dnl
dnl  The United States Government has rights in this work pursuant
dnl  to contract no. DE-AC03-76SF00098 between the United States
dnl  Department of Energy and the University of California.
dnl
dnl  This file is part of flex.
dnl
dnl  Redistribution and use in source and binary forms, with or without
dnl  modification, are permitted provided that the following conditions
dnl  are met:
dnl
dnl  1. Redistributions of source code must retain the above copyright
dnl     notice, this list of conditions and the following disclaimer.
dnl  2. Redistributions in binary form must reproduce the above copyright
dnl     notice, this list of conditions and the following disclaimer in the
dnl     documentation and/or other materials provided with the distribution.
dnl
dnl  Neither the name of the University nor the names of its contributors
dnl  may be used to endorse or promote products derived from this software
dnl  without specific prior written permission.
dnl
dnl  THIS SOFTWARE IS PROVIDED `AS IS' AND WITHOUT ANY EXPRESS OR
dnl  IMPLIED WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED
dnl  WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
dnl  PURPOSE.

dnl
dnl  This file is meant to be included in both the skeleton and the actual
dnl  flex code (hence the name "_shared").
*/
#ifndef yyskel_static
#define yyskel_static static
#endif
#else
#ifndef yyskel_static
#define yyskel_static
#endif
#endif

/* Structures and prototypes for serializing flex tables.  The
 * binary format is documented in the manual.
 *
 * Design considerations:
 *
 *  -  The format allows many tables per file.
 *  -  The tables can be streamed.
 *  -  All data is stored in network byte order.
 *  -  We do not hinder future unicode support.
 *  -  We can lookup tables by name.
 */

/** Magic number for serialized format. */
#ifndef YYTBL_MAGIC
#define YYTBL_MAGIC 0xF13C57B1
#endif

/** Calculate (0-7) = number bytes needed to pad n to next 64-bit boundary. */
#ifndef yypad64
#define yypad64(n) ((8-((n)%8))%8)
#endif

#ifndef YYTABLES_TYPES
#define YYTABLES_TYPES
/** Possible values for td_id field. Each one corresponds to a
 *  scanner table of the same name.
 */
enum yytbl_id {
	YYTD_ID_ACCEPT = 0x01,		/**< 1-dim ints */
	YYTD_ID_BASE = 0x02,		/**< 1-dim ints */
	YYTD_ID_CHK = 0x03,		/**< 1-dim ints */
	YYTD_ID_DEF = 0x04,		/**< 1-dim ints */
	YYTD_ID_EC = 0x05,		/**< 1-dim ints */
	YYTD_ID_META = 0x06,		/**< 1-dim ints */
	YYTD_ID_NUL_TRANS = 0x07,	/**< 1-dim ints, maybe indices */
	YYTD_ID_NXT = 0x08,		/**< may be 2 dimensional ints */
	YYTD_ID_RULE_CAN_MATCH_EOL = 0x09, /**< 1-dim ints */
	YYTD_ID_START_STATE_LIST = 0x0A,	/**< 1-dim indices into trans tbl  */
	YYTD_ID_TRANSITION = 0x0B,	/**< structs */
	YYTD_ID_ACCLIST = 0x0C		/**< 1-dim ints */
};

/** bit flags for t_flags field of struct yytbl_data */
enum yytbl_flags {
	/* These first three are mutually exclusive */
	YYTD_DATA8 = 0x01,   /**< data is an array of type flex_int8_t */
	YYTD_DATA16 = 0x02,  /**< data is an array of type flex_int16_t */
	YYTD_DATA32 = 0x04,  /**< data is an array of type flex_int32_t */

	/* These two are mutually exclusive. */
	YYTD_PTRANS = 0x08,  /**< data is a list of indexes of entries
                                 into the expanded yy_transition
                                 array. See notes in manual. */
	YYTD_STRUCT = 0x10  /**< data consists of yy_trans_info structs */
};

/* The serialized tables header. */
struct yytbl_hdr {
	flex_uint32_t th_magic;  /**< Must be 0xF13C57B1 (comes from "Flex Table") */
	flex_uint32_t th_hsize;  /**< Size of this header in bytes. */
	flex_uint32_t th_ssize;  /**< Size of this dataset, in bytes, including header. */
	flex_uint16_t th_flags;  /**< Currently unused, must be 0 */
	char   *th_version; /**< Flex version string. NUL terminated. */
	char   *th_name;    /**< The name of this table set. NUL terminated. */
};

/** A single serialized table */
struct yytbl_data {
	flex_uint16_t td_id;      /**< enum yytbl_id table identifier */
	flex_uint16_t td_flags;   /**< how to interpret this data */
	flex_uint32_t td_hilen;   /**< num elements in highest dimension array */
	flex_uint32_t td_lolen;   /**< num elements in lowest dimension array */
	void   *td_data;     /**< table data */
};
#endif

/** Extract corresponding data size_t from td_flags */
#ifndef YYTDFLAGS2BYTES
#define YYTDFLAGS2BYTES(td_flags)\
        (((td_flags) & YYTD_DATA8)\
            ? sizeof(flex_int8_t)\
            :(((td_flags) & YYTD_DATA16)\
                ? sizeof(flex_int16_t)\
                :sizeof(flex_int32_t)))
#endif

#ifdef FLEX_SCANNER
/* %not-for-header */

#endif

/* vim:set noexpandtab cindent tabstop=8 softtabstop=0 shiftwidth=8 textwidth=0: */

/* Load the DFA tables from the given stream.  */
int yytables_fload (FILE * fp );

/* Unload the tables from memory. */
int yytables_destroy (void);
/* %not-for-header */

/* Default declaration of generated scanner - a define so the user can
 * easily add parameters.
 */
#ifndef YY_DECL
#define YY_DECL_IS_OURS 1
/* %if-c-only Standard (non-C++) definition */

extern int yylex (void);

#define YY_DECL int yylex (void)
/* %endif */
/* %if-c++-only C++ definition */
/* %endif */
#endif /* !YY_DECL */

/* %not-for-header */

/* %if-c++-only */
/* %not-for-header */

/* %endif */

/* yy_get_previous_state - get the state just before the EOB char was reached */

/* %if-c-only */
/* %not-for-header */

#undef YY_NEW_FILE
#undef YY_FLUSH_BUFFER
#undef yy_set_bol
#undef yy_new_buffer
#undef yy_set_interactive
#undef YY_DO_BEFORE_ACTION

#ifdef YY_DECL_IS_OURS
#undef YY_DECL_IS_OURS
#undef YY_DECL
#endif

#line 47 "rules.flex"

#line 574 "scanner.h"
#undef yyIN_HEADER
#endif /* yyHEADER_H */
