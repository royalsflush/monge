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


/* Variables and removables */
BLANKS [ \n\t\f\r]*
NUM_INT -?[0-9]+
NUM_FLOAT -?(([0-9]+"."[0-9]*)|([0-9]*"."[0-9]+))

%%
{BLANKS} {/* ignore them! */}
{NUM_INT} {printf("INT: %s\n", yytext);}
{NUM_FLOAT} printf("FLOAT: %s\n", yytext);
