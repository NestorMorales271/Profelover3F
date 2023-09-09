br: clean compilar ejecutar

compilar: scr/main.cpp
	g++ scr/main.cpp -o bin/humanos -I include

ejecutar: bin/humanos
	./bin/humanos

clean: bin/humanos
	rm bin/humanos