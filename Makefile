MAIN	=main
OBJ1	=obj1
OBJ2	=obj2
FRAGS	=-Wall -O2

.PHONY:clean
all: $(MAIN)

./bin/$(OBJ2).o:./src/$(OBJ2).c
	gcc -c ./src/$(OBJ2).c $(FRAGS) -o ./bin/$(OBJ2).o

./bin/$(OBJ1).o:./src/$(OBJ1).c
	gcc -c ./src/$(OBJ1).c $(FRAGS) -o ./bin/$(OBJ1).o

./bin/$(MAIN).o:./src/$(MAIN).c
	gcc -c ./src/$(MAIN).c $(FRAGS) -o ./bin/$(MAIN).o

$(MAIN):./bin/$(MAIN).o ./bin/$(OBJ1).o ./bin/$(OBJ2).o
	gcc ./bin/$(MAIN).o ./bin/$(OBJ1).o ./bin/$(OBJ2).o $(FRAGS) -o $(MAIN)

clean:
	rm $(MAIN) ./bin/*  ./src/*~ ./*~
