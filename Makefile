CC = gcc

# Source files
SRCS = main.c \
       dependencies/cd/cd_handling.c \
       dependencies/background/background_handling.c \
       dependencies/redirection/redirection_handling.c \
       dependencies/pipe/pipe_handling.c \
       dependencies/execute/execute_handling.c

# Output executable
TARGET = main

# Default target
all: $(TARGET)

# Link object files
$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) $^ -o $@
