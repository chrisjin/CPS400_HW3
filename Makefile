all: HW3

students.o: students.c students.h
	gcc -c students.c

sort.o: sort.c sort.h
	gcc -c sort.c

driver.o: driver.c students.h sort.h
	gcc -c driver.c

HW3: students.o sort.o driver.o
	gcc *.o -o sortstudents

clean:
	rm *o
