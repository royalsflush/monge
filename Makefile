## MONGe Compiler
OUT = monge
CC = gcc
CFLAGS = -ansi -pedantic -Wall -Wshadow
LIBLEX = -lfl
MONGEC = monge.c

## Lex Definitions
LEXC = scanner.c ##generated scanner
LEXH = scanner.h ##generated header
LEXT = table ##table file
LEXR = rules.flex ##rules file

## Srcs and objs definition
SRCS = $(LEXC) $(MONGEC)
OBJS = $(SRCS:.c=.o)

.PHONY: all test debug lex parser

## Rules themselves

all: $(OBJS)
	$(CC) $(CFLAGS) -o $(OUT) $^ $(LIBLEX)

clean:
	rm $(OUT) *.o

$(LEXC): $(LEXR)
	flex --outfile=$(LEXC) --header-file=$(LEXH) --tables-file=$(LEXT) $(LEXR)


test:
debug:

parser:
