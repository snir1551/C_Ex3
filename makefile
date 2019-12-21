CC=gcc 
FLAGS= -Wall -g



all: isort txtfind

isort: main_sort.o sortAndIncome.o sortAndIncome.h
	$(CC) $(Flags) -o isort main_sort.o sortAndIncome.o
txtfind: main_txt.o txt.o txt.h
	$(CC) $(Flags) -o txtfind main_txt.o txt.o

main_sort.o: main_sort.c sortAndIncome.h
	$(CC) -c main_sort.c
sortAndIncome.o: sortAndIncome.c sortAndIncome.h
	$(CC) -fPIC -c sortAndIncome.c

main_txt.o: main_txt.c txt.h
	$(CC) -c main_txt.c
txt.o: txt.c txt.h
	$(CC) -fPIC -c txt.c

.PHONY: clean all

clean: 
	rm -f *.o isort txtfind


