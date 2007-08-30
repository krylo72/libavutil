include ../config.mak

OBJS = adler32.o \
       aes.o \
       base64.o \
       crc.o \
       intfloat_readwrite.o \
       fifo.o \
       lls.o \
       log.o \
       lzo.o \
       mathematics.o \
       md5.o \
       mem.o \
       random.o \
       rational.o \
       string.o \
       tree.o \

HEADERS = adler32.h \
          avstring.h \
          avutil.h \
          base64.h \
          common.h \
          fifo.h \
          integer.h \
          intfloat_readwrite.h \
          log.h \
          lzo.h \
          mathematics.h \
          md5.h \
          mem.h \
          random.h \
          rational.h \

NAME=avutil
LIBVERSION=$(LAVUVERSION)
LIBMAJOR=$(LAVUMAJOR)

include ../common.mak
