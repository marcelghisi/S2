CC = gcc
CFLAGS =  -Wall -Wextra -Werror
LDFLAGS = -lm
OBJFILES = myls_lib.o myls.o
TARGET = myls
 
all: $(TARGET)
 
$(TARGET): $(OBJFILES)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJFILES) $(LDFLAGS)
 
clean:
	rm -rf $(OBJFILES) $(TARGET) *~