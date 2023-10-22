CXX = x86_64-w64-mingw32-g++
br: clean compilar ejecutar

compilar: scr/main.cpp
	$(CXX) scr/main.cpp -o bin/humanos -I include

ejecutar: bin/humanos
	./bin/humanos

clean: bin/humanos
	rm bin/humanos

bin/Undertale : src/Undertale.cpp include/*
	c++ src/Undertale.cpp -o bin/Undertale -lcurses -I include

run : bin/Undertale
	./bin/Undertale