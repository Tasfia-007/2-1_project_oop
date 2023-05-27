all: exe

exe: main.o  hfile1.o hfile2.o hfile3.o hfile4.o hfile5.o hfile6.o hfile7.o hfile8.o
	g++ main.o  hfile1.o hfile2.o hfile3.o hfile4.o hfile5.o hfile6.o hfile7.o hfile8.o -o exe

main.o: main.cpp
	g++ -c main.cpp -o main.o


hfile1.o: hfile1.cpp
	g++ -c hfile1.cpp -o hfile1.o

hfile2.o: hfile2.cpp
	g++ -c hfile2.cpp -o hfile2.o

hfile3.o: hfile3.cpp
	g++ -c hfile3.cpp -o hfile3.o

hfile4.o: hfile4.cpp
	g++ -c hfile4.cpp -o hfile4.o

hfile5.o: hfile5.cpp
	g++ -c hfile5.cpp -o hfile5.o

hfile6.o: hfile6.cpp
	g++ -c hfile6.cpp -o hfile6.o

hfile7.o: hfile7.cpp
	g++ -c hfile7.cpp -o hfile7.o

hfile8.o: hfile8.cpp
	g++ -c hfile8.cpp -o hfile8.o

clean:
	rm *.o