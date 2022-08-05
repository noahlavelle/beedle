PREFIX  := /usr/local
CC      := cc
CFLAGS  := -pedantic -Wall -Wno-deprecated-declarations -Os
LDFLAGS := -lX11

# FreeBSD (uncomment)
#LDFLAGS += -L/usr/local/lib -I/usr/local/include
# # OpenBSD (uncomment)
#LDFLAGS += -L/usr/X11R6/lib -I/usr/X11R6/include

all: options beedle

options:
	@echo beedle build options:
	@echo "CFLAGS  = ${CFLAGS}"
	@echo "LDFLAGS = ${LDFLAGS}"
	@echo "CC      = ${CC}"

beedle: beedle.c config.def.h config.h
	${CC} -o beedle beedle.c ${CFLAGS} ${LDFLAGS}

config.h:
	cp config.def.h $@

clean:
	rm -f *.o *.gch beedle

install: beedle
	mkdir -p ${DESTDIR}${PREFIX}/bin
	cp -f beedle ${DESTDIR}${PREFIX}/bin
	chmod 755 ${DESTDIR}${PREFIX}/bin/beedle

uninstall:
	rm -f ${DESTDIR}${PREFIX}/bin/beedle

.PHONY: all options clean install uninstall
