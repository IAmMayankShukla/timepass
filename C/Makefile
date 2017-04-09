# Test MakeFile

CC = gcc
CFLAGS = -Wall

all: createDir macrotest.run bittwiddlingtest.run \
		vardeclarationQues.run datatypeQues.run \
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

moveDir:
	mv *.o *.run build/

clean:
	rm -rf build/*.o build/*.run build
