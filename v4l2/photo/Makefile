EXEC = photo
OBJS = photo.o

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) $< -o $@

	
clean:
	-rm -f $(EXEC) *.o *.yuv
