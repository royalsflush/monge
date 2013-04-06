## MONGe Compiler
OUT = monge
CFLAGS = -ansi -pedantic -Wall -Wshadow -O2
LIBLEX = -lfl
MONGEC = monge.c
DBGFLAGS = -g

## Lex Definitions
LEXC = scanner.c ##generated scanner
LEXH = scanner.h ##generated header
LEXR = rules.flex ##rules file
LEXDBG = --debug
LEXFLAGS = --outfile=$(LEXC) --header-file=$(LEXH)

## Srcs and objs definition
SRCS = $(LEXC) $(MONGEC) tkList.c lexHandler.c
OBJS = $(SRCS:.c=.o)

## Tests
TSTDIR = tests
TST = $(TSTDIR)/comm.lext \
	$(TSTDIR)/ifelse.lext \
	$(TSTDIR)/idtest.lext \
	$(TSTDIR)/rw.lext \
	$(TSTDIR)/nums.lext \
	$(TSTDIR)/lit.lext \
	$(TSTDIR)/prog.lext \
	$(TSTDIR)/validchars.lext
GABS = $(TST:.lext=.gab)

.PHONY: all test debug lex parser setdbg

## Rules themselves

all: $(OUT)
$(OUT): $(OBJS)
	gcc $(CFLAGS) -o $(OUT) $^ $(LIBLEX)

clean:
	rm $(OUT) *.o
	rm $(LEXH) $(LEXC)

$(OBJS): %.o: %.c
	gcc $(CFLAGS) -c -o $@ $< 

$(LEXC): $(LEXR)
	flex $(LEXFLAGS) $(LEXR)

test: $(GABS)
	echo $(GABS)

$(GABS): %.gab: %.lext
	./$(OUT) $< > $@

debug: setdbg | all

parser:
setdbg:
	$(eval LEXFLAGS+=$(LEXDBG))
	$(eval CFLAGS+=$(DBGFLAGS))
