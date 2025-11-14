CXX = g++
CXXFLAGS = -std=c++17 -Wall -I./src -I./src/Engine -I./src/Entities -I./src/Map -I./src/View -I./src/Utils

SRC = \
    src/main.cpp \
    src/Engine/engine.cpp \
    src/Entities/player.cpp \
    src/Entities/enemy.cpp \
    src/Entities/reward.cpp \
    src/Map/map.cpp \
    src/View/view.cpp \
    src/Utils/scoreboard.cpp

OBJ = $(SRC:.cpp=.o)

TARGET = pacman

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(OBJ) -o $(TARGET)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	del /Q $(subst /,\,$(OBJ)) $(TARGET).exe 2>nul || true
