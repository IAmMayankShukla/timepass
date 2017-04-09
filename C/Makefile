# Test MakeFile

CC = gcc
CFLAGS = -Wall
OPTIMIZATION_FLAGS = -O3

all: createDir macrotest.run bittwiddlingtest.run \
		vardeclarationQues.run datatypeQues.run \
		storageClasseQues.run ioQues.run \
		controlLoopQues.run \
		moveDir

createDir: 
	mkdir -p build

macrotest.run: macroQuestions.o
	$(CC) $(CFLAGS) -o $@ $^

bittwiddlingtest.run: bit_twiddling.o
	$(CC) $(CFLAGS) -o $@ $^

vardeclarationQues.run: vardeclarationQues.o
	$(CC) $(CFLAGS) -o $@ $^

datatypeQues.run: datatypeQues.o
	$(CC) $(CFLAGS) -o $@ $^

storageClasseQues.run: storageClasseQues.o
	$(CC) $(CFLAGS) $(OPTIMIZATION_FLAGS) -o $@ $^

ioQues.run: ioQues.o
	$(CC) $(CFLAGS) -o $@ $^

controlLoopQues.run: controlLoopQues.o
	$(CC) $(CFLAGS) -o $@ $^

moveDir:
	mv *.o *.run build/

clean:
	rm -rf build/*.o build/*.run build
