SRCDIR=source
SRC=*.cpp
CC=g++
PROG=morsetran

all: $(PROG)

$(PROG): $(SRCDIR)/$(SRC)
	$(CC) $(SRCDIR)/$(SRC) -o $(PROG)

clean:
	rm -f $(PROG) *.o

install:
	install -m755 $(PROG) $(DESTDIR)/usr/bin
