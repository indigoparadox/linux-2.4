DEFS = -I. -D_GNU_SOURCE -DPACKAGE_NAME=\"\" -DPACKAGE_TARNAME=\"\" -DPACKAGE_VERSION=\"\" -DPACKAGE_STRING=\"\" -DPACKAGE_BUGREPORT=\"\" -DCONFIG_ROOT_CHECK_OFF=0  $(EXTRA_DEFS)
DEFS += -DELF_MACHINE_H='"elf_$(ARCH).h"' -DARCH_$(ARCH) $(EXTRA_DEFS)

OBJS = xmalloc.o xrealloc.o xstrcat.o xstrdup.o xsystem.o \
	logger.o modstat.o \
	meta_expand.o config.o snap_shot.o arch64.o gzfiles.o sys_nim.o \
	xftw.o

%.o: %.c
	$(HOSTCC) $(HOSTCFLAGS) $(DEFS) -c -o $@ $<

all: libutil.a genksyms

genksyms: genksyms.o parse.o lex.o libutil.a
	$(HOSTCC) $(HOSTCFLAGS) -o $@ $^

parse.o: parse.c
	$(HOSTCC) $(HOSTCFLAGS) $(DEFS) -c -o $@ $<

lex.o: lex.c
	$(HOSTCC) $(HOSTCFLAGS) $(DEFS) -c -o $@ $<

crc32.tab: makecrc32.c
	$(HOSTCC) $(HOSTCFLAGS) -o makecrc32 $^
	./makecrc32 > $@.tmp
	mv $@.tmp $@

clean:
	rm -f *.o *.a *.tmp parse.output genksyms makecrc32 crc32.tab

genksyms.o: genksyms.c crc32.tab genksyms.h util.h version.h

lex.o: lex.c keywords.c genksyms.h parse.c util.h

parse.o: parse.c genksyms.h

meta_expand.o: meta_expand.c
	$(HOSTCC) $(HOSTCFLAGS) $(DEFS) -DHAVE_WORDEXP=1 -DHAVE_GLOB=1 -c $<

libutil.a: $(OBJS)
	$(AR) rv $@ $?
