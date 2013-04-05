/* Headers */
%{
	#include "lexHandler.h"
%}

/* Definitions part */
BLANK [ \n\t\f\r]

/* Punctuation and delimiters 
	; { } ( ) [ ]
*/

PC_SEMICOLON ;
PC_COMMA ,

DEL_LBRACKET {
DEL_RBRACKET }

DEL_LPAREN (
DEL_RPAREN )

DEL_LSQBRACK [
DEL_RSQBRACK ]

/* Numbers, literals and removables */
RM_BLANKS {BLANK}+
NUM_INT -?[0-9]+
NUM_FLOAT -?(([0-9]+"."[0-9]*)|([0-9]*"."[0-9]+))
RM_COMMENT "/*"[^"*/""/*"]*"*/"

/* IDs */
ID [_a-zA-z][a-zA-Z0-9_]{0,63}

/* Invalids */
INV_NESTED_COMMENT "/*"[^"*/"]*"/*"
INV_CHAR [^_a-zA-Z<>=&\|\{\};,\(\)']
INV_NOT_OPENED_COMMENT "*/"

/* Reserved words:
	char float int void
	if else while
	new return
*/

RW_CHAR "char"
RW_FLOAT "float"
RW_INT "int"
RW_VOID "void"

RW_IF "if"
RW_ELSE "else"
RW_WHILE "while"

RW_NEW "new"
RW_RETURN "return"

/* Operators logical, comparison
 and  arithmetic 
	+ - * /
	== <= >= < >
	! && ||
*/



%%
{RW_CHAR}			|
{RW_FLOAT}			|
{RW_INT} 			|
{RW_VOID} 			addToken(yytext, NULL);

{RW_IF}				|
{RW_ELSE}			|
{RW_WHILE} 			addToken(yytext, NULL);

{RW_NEW}			|
{RW_RETURN}			addToken(yytext, NULL);

{PC_SEMICOLON}			|
{PC_COMMA}			addToken(yytext, NULL);

{RM_BLANKS}			blank(yytext);
{RM_COMMENT}			/* ignore comments */

{NUM_INT}			addToken("int", yytext);
{NUM_FLOAT}			addToken("float", yytext);

{ID}				addToken("id", yytext);

{INV_NESTED_COMMENT}		nestedComment();
{INV_CHAR}			invalidChar(yytext);
{INV_NOT_OPENED_COMMENT}	notOpenedComment();
