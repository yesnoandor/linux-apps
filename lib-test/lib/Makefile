CURDIR		:= $(shell pwd)
TOPDIR		:= $(CURDIR)/..
ADIR		:= $(TOPDIR)/a
SODIR		:= $(TOPDIR)/so
OBJDIR		:= $(TOPDIR)/obj
LIBDIR		:= $(TOPDIR)/lib
BINDIR		:= $(TOPDIR)/bin
INCDIR		:= $(TOPDIR)/inc
SRCDIR		:= $(TOPDIR)/src

$(warning CURDIR = $(CURDIR))
$(warning TOPDIR = $(TOPDIR))
$(warning ADIR = $(ADIR))
$(warning SODIR = $(SODIR))
$(warning OBJDIR = $(OBJDIR))
$(warning LIBDIR = $(LIBDIR))
$(warning INCDIR = $(INCDIR))
$(warning SRCDIR = $(SRCDIR))

LIB = libdemo.a
SOLIB = libdemo.so

SRC = $(wildcard *.c)
OBJS := $(SRC:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c -fPIC $< -o $(OBJDIR)/$@


$(LIB):  $(OBJS)
	$(AR) rc ../a/$@ ../obj/$<

$(SOLIB): $(OBJS)
	$(CC) -fpic -shared -o ../so/$@ $(OBJDIR)/$<

all: $(LIB) $(SOLIB)

clean:
	-rm -f  *.elf $(OBJDIR)/*.o $(ADIR)/*.a $(SODIR)/*.so
