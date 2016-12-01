lab21.exe : lab21.o MyClass.o
	g++ lab21.o MyClass.o -o lab21.exe

lab21.o : lab21.cpp MyClass.cpp include.h
    g++ -Wall -c lab21.cpp 

MyClass.o : MyClass.cpp include.h
    g++ -Wall -c MyClass.cpp 

clean :
    rm *.o Lab21.exe