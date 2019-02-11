EXEC = camera
OBJS = camera.o

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) $< -o $@

	
clean:
	-rm -f $(EXEC) *.o
