TARGET =carray
CC = gcc
CFLAGS = -Wall -g
OBJS = array.o input.o multiply.o print.o memory_allo.o 
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)
 
%.o: %.c
	$(CC) $(CFLAGS) -c $<
 
clean:
	rm -f $(OBJS) $(TARGET)
