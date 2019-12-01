CC=gcc
AR=ar
OBJECTS_MAIN=main.o
OBJECTS_BANK=myBank.o
FLAGS= -Wall -g

all: libmybank.so libmybank.a progmains progmaind
progmains: $(OBJECTS_MAIN) libmybank.a 
	$(CC) $(FLAGS) -o progmains $(OBJECTS_MAIN) libmybank.a

progmaind: $(OBJECTS_MAIN)
	$(CC) $(FLAGS) -o progmaind $(OBJECTS_MAIN) ./libmybank.so

libmybank.so: $(OBJECTS_BANK)
	$(CC) -shared -o libmybank.so $(OBJECTS_BANK)

libmybank.a: $(OBJECTS_BANK)
	$(AR) -rcs libmybank.a $(OBJECTS_BANK)	

myBank.o: myBank.c myBank.h
	$(CC) $(FLAGS) -c myBank.c

main.o: main.c myBank.h  
	$(CC) $(FLAGS) -c main.c 

.PHONY: clean all

clean:
	rm -f *.o *.a *.so progmains progmaind
