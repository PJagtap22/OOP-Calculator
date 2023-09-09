	CC = g++
	CFLAG = 
	
	main.exe: main.o calculator.o 
	$(CC) $(CFLAG) -o main.exe main.o calculator.o
	
	main.o: main.cpp 
	$(cc) $(CFLAG) -c main.cpp
	
	calculator.o: calculator.cpp 
	$(CC) $(CFLAG) -c calculator.cpp
	
	Clean :
	rm -f main.exe *o
