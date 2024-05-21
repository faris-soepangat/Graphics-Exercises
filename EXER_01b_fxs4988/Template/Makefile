# Soepangat, Faris
# fxs4988
# 2024-02-13
#-----------------------------------------------------------------
CC       = gcc

SANFLAGS = -fsanitize=address

CFLAGS   = -g -Wall -Wextra $(SANFLAGS)
LDFLAGS  = $(SANFLAGS)
LDLIBS   = -lm

#-----------------------------------------------------------------
%.o : %.c
	$(CC) $(CFLAGS) -c $^

#-----------------------------------------------------------------
matrixTest : matrix.o matrixTest.o
	$(CC) $(LDFLAGS) -o $@ matrix.o matrixTest.o $(LDLIBS)

#-----------------------------------------------------------------
clean:
	rm -f matrixTest *.o

#-----------------------------------------------------------------
