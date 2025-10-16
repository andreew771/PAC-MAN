all: PacmanGame.exe

PacmanGame.exe: direction.o enemy.o engine.o main.o map.o player.o point.o reward.o view.o
	g++ -o PacmanGame.exe direction.o enemy.o engine.o main.o map.o player.o point.o reward.o view.o

direction.o: direction.cpp
	g++ -c direction.cpp -o direction.o

enemy.o: enemy.cpp
	g++ -c enemy.cpp -o enemy.o

engine.o: engine.cpp
	g++ -c engine.cpp -o engine.o

main.o: main.cpp
	g++ -c main.cpp -o main.o

map.o: map.cpp
	g++ -c map.cpp -o map.o

player.o: player.cpp
	g++ -c player.cpp -o player.o

point.o: point.cpp
	g++ -c point.cpp -o point.o

reward.o: reward.cpp
	g++ -c reward.cpp -o reward.o

view.o: view.cpp
	g++ -c view.cpp -o view.o

clean:
	rm -f *.o *.exe