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

DEL_LBRACE \{
DEL_RBRACE \}

DEL_LPAREN \(
DEL_RPAREN \)

DEL_LBRACKET \[
DEL_RBRACKET ]

/* Numbers, literals and removables */
RM_BLANKS {BLANK}+
NUM_INT [0-9]+
NUM_FLOAT (([0-9]+"."[0-9]*)|([0-9]*"."[0-9]+))
RM_COMMENT "/*"[^"*/""/*"]*"*/"

LIT '.'

/* IDs */
ID [_a-zA-Z][a-zA-Z0-9_]*

/* Invalids */
INV_NESTED_COMMENT "/*"[^"*/"]*"/*"
INV_CHAR [^_a-zA-Z0-9<>=&!\|\{\};,\(\)'\[\]\.\\]
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

RW_COMM ("if"|"else"|"while")

RW_NEW "new"
RW_RETURN "return"

/* Operators logical, comparison
 and  arithmetic 
	+ - * /
	== <= >= < >
	! && ||
*/

ASSIGN =

ARITH_PLUS \+
ARITH_MINUS -
ARITH_TIMES \*
ARITH_DIV \/

COMP_EQ ==
COMP_LEQ <=
COMP_GEQ >=
COMP_LT <
COMP_GT >

LOG_NOT !
LOG_AND &&
LOG_OR \|\|

%%
{RW_CHAR}			|
{RW_FLOAT}			|
{RW_INT} 			|
{RW_VOID} 			addToken(yytext, NULL);

{RW_COMM} 			addToken(yytext, NULL);

{RW_NEW}			|
{RW_RETURN}			addToken(yytext, NULL);

{PC_SEMICOLON}			|
{PC_COMMA}			addToken(yytext, NULL);

{DEL_LPAREN}			|
{DEL_RPAREN}			|
{DEL_LBRACKET}			|
{DEL_RBRACKET}			|
{DEL_LBRACE}			|
{DEL_RBRACE}			addToken(yytext, NULL);

{ASSIGN}			addToken(yytext, NULL);

{ARITH_PLUS}			|
{ARITH_MINUS}			|
{ARITH_TIMES}			|
{ARITH_DIV}			addToken(yytext, NULL);

{COMP_EQ}			|
{COMP_LEQ}			|
{COMP_GEQ}			|
{COMP_LT}			|
{COMP_GT}			addToken(yytext, NULL);

{LOG_NOT}			|
{LOG_AND}			|
{LOG_OR}			addToken(yytext, NULL);

{RM_BLANKS}			blank(yytext);
{RM_COMMENT}			/* ignore comments */

{NUM_INT}			addToken("int", yytext);
{NUM_FLOAT}			addToken("float", yytext);
{LIT}				addToken("char", yytext);

{ID}				addToken("id", yytext);

{INV_NESTED_COMMENT}		nestedComment();
{INV_CHAR}			invalidChar(yytext);
{INV_NOT_OPENED_COMMENT}	notOpenedComment();
