## MONGe Compiler
OUT = monge
CC = gcc
CFLAGS = -ansi -pedantic -Wall -Wshadow
LIBLEX = -lfl
MONGEC = monge.c
DBGFLAGS = -g

## Lex Definitions
LEXC = scanner.c ##generated scanner
LEXH = scanner.h ##generated header
LEXT = table ##table file
LEXR = rules.flex ##rules file
LEXDBG = --debug
LEXFLAGS = --outfile=$(LEXC) --header-file=$(LEXH) \
	--tables-file=$(LEXT)

## Srcs and objs definition
SRCS = $(LEXC) $(MONGEC)
OBJS = $(SRCS:.c=.o)

.PHONY: all test debug lex parser setbdg

## Rules themselves

all: $(OBJS)
	$(CC) $(CFLAGS) -o $(OUT) $^ $(LIBLEX)

clean:
	rm $(OUT) *.o
	rm $(LEXT) $(LEXH) $(LEXC)

$(LEXC): $(LEXR)
	flex $(LEXFLAGS) $(LEXR)


test:
debug: setdbg | all

parser:
setdbg:
	$(eval LEXFLAGS+=$(LEXDBG))
	$(eval CFLAGS+=$(DBGFLAGS))
