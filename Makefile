## MONGe Compiler
OUT = monge

## Lex Definitions
LEXC = scanner.c ##generated scanner
LEXH = scanner.h ##generated header
LEXT = table ##table file
LEXR = rules.flex ##rules file

.PHONY: all test debug lex parser setdbg

all: flex
test:
debug:
flex:
	flex --outfile=$(LEXC) --header-file=$(LEXH) --tables-file=$(LEXT) $(LEXR)

parser:
setdbg:
