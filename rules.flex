/* Headers */
%{
	#include "tkList.h"
%}

/* Definitions part */

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

/* Punctuation and delimiters 
	; { } ( ) [ ]
*/

PC_SEMICOLON ';'
PC_COMMA ','

DEL_LBRACKET '{'
DEL_RBRACKET '}'

DEL_LPAREN '('
DEL_RPAREN ')'

DEL_LSQBRACK '['
DEL_RSQBRACK ']'

/* Operators logical, comparison
 and  arithmetic 
	+ - * /
	== <= >= < >
	! && ||
*/


/* Numbers, literals and removables */
RM_BLANKS [ \n\t\f\r]*
NUM_INT -?[0-9]+
NUM_FLOAT -?(([0-9]+"."[0-9]*)|([0-9]*"."[0-9]+))
RM_COMMENT "/*"[^"*/""/*"]*"*/"

/* IDs */
ID [a-zA-z][a-zA-Z0-9]

%%
{RW_CHAR} {printf("CHAR RW\n");}
{RW_FLOAT} {printf("FLOAT RW\n");}
{RW_INT} {printf("INT RW\n");}
{RW_VOID} {printf("VOID RW\n");}

{RW_IF} {printf("IF RW\n");}
{RW_ELSE} {printf("ELSE RW\n");}
{RW_WHILE} {printf("WHILE RW\n");}

{RW_NEW} {printf("NEW RW\n");}
{RW_RETURN} {printf("RETURN RW\n");}

({RM_BLANKS}|{RM_COMMENT}) {/* ignore them! */}
{NUM_INT} {printf("INT: %s\n", yytext);}
{NUM_FLOAT} printf("FLOAT: %s\n", yytext);

{ID} printf("ID: %s\n", yytext);
