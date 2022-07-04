main: main.o page1.o
	g++-11 -o main main.o page1.o

main.o: main.cpp
	g++-11 -c main.o main.cpp

page1.o: pages/page1.cpp
	g++-11 -c pages/page1.cpp

clean:
	rm *.o main
