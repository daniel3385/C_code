CC=gcc

TIMER=timer.c
TIMERTEST=timerExampleUse.c

OBJTIMER=timer.o
OBJTEST=timerExampleUse.o

OUT_EXE=test 

LDFLAGS=-lpthread
CFLAGS=-ansi -pedantic -Wall -Werror -g 


build: $(OBJTEST) $(OBJTIMER)
	$(CC) -o $(OUT_EXE) $(OBJTEST) $(OBJTIMER) $(LDFLAGS)	

$(OBJTEST): $(TIMERTEST)
	$(CC) -c $(TIMERTEST) 

$(OBJTIMER): $(TIMER)
	$(CC) -c $(TIMER) $(LDFLAGS) $(CFLAGS)

clean:
	rm -f *.o $(OUT_EXE) 
