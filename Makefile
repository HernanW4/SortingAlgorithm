all: compile link

compile:
	g++ -I SFML/include -c src/main.cpp
link:
	g++ main.o -o main -L SFML/lib -l sfml-graphics -l sfml-window -l sfml-system