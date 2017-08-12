EXEC = getevent
OBJS = getevent.o

SUBDIRS=$(shell ls -l | grep ^d | awk '{print $9}')

all: $(EXEC)

.c.o:
	$(CC) -c $(CFLAGS) $<

$(EXEC): $(OBJS)
	$(CC) $(OBJS) -o $@ -lpthread

romfs:
	$(ROMFSINST) -d /bin/$(EXEC)
	
clean:
	-rm -f $(EXEC) *.elf *.o


