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


TARGET_A=demo
TARGET_SO=demo_so

CUR_SOURCE=${wildcard *.c}
CUR_OBJS=${patsubst %.c, %.o, $(CUR_SOURCE)}


# make all .c or .cpp 
%.o: %.c
	@echo "Compling: " $(addsuffix .c, $(basename $(notdir $@)))
	$(CC) $(CFLAGS) -I $(INCDIR) -c $< -o ../obj/$@

#%.o: %.cpp
#	@echo "Compling: " $(addsuffix .cpp, $(basename $(notdir $@)))
#	@$(CXX) $(CFLAGS) -c $< -o $(OBJDIR)/$@

all: $(TARGET_A) $(TARGET_SO)

$(TARGET_A): $(CUR_OBJS)
	$(CC)  $(OBJDIR)/*.o -o $(BINDIR)/$@ -static -L $(ADIR) -ldemo

$(TARGET_SO): $(CUR_OBJS)
	$(CC)  $(OBJDIR)/*.o -o $(BINDIR)/$@  -L $(SODIR) -ldemo

clean:
	rm -f  $(OBJDIR)/*.o $(BINDIR)/$(TARGET_A) $(BINDIR)/$(TARGET_SO)
