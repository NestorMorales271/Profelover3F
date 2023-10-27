CXX = x86_64-w64-mingw32-g++
br: clean compilar ejecutar

compilar: src/Undertale.cpp
	$(CXX) src/Undertale.cpp -o bin/Undertale -I include

ejecutar: bin/Undertale
	./bin/Undertale

clean: bin/Undertale
	rm bin/Undertale

bin/Undertale : src/Undertale.cpp include/*
	c++ src/Undertale.cpp -o bin/Undertale -lcurses -I include

run : bin/Undertale
	./bin/Undertale