.PHONY: all main clean
main: main.o test_enum.o
	gcc main.o test_enum.o -o main
main.o: main.c inc/fast_enum_util.h
	gcc -c main.c -o main.o
test_enum.o: test_enum.c inc/fast_enum_util.h
	gcc -c test_enum.c -o test_enum.o
clean:
	rm -rf *.o *.exe
