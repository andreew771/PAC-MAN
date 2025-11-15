#====================#
#      COMPILER      #
#====================#

CXX = g++
CXXFLAGS = -std=c++17 -Wall -I./src -I./src/Entities -I./src/Engine -I./src/Map -I./src/View -I./src/Utils
AR = ar rcs

#====================#
#      SOURCES       #
#====================#

ENTITIES_SRC = \
    src/Entities/player.cpp \
    src/Entities/enemy.cpp \
    src/Entities/reward.cpp

CORE_SRC = \
    src/Engine/engine.cpp \
    src/Map/map.cpp \
    src/View/view.cpp

UTILS_SRC = \
    src/Utils/scoreboard.cpp

MAIN_SRC = src/main.cpp

#====================#
#      OBJECTS       #
#====================#

ENTITIES_OBJ = $(ENTITIES_SRC:.cpp=.o)
CORE_OBJ = $(CORE_SRC:.cpp=.o)
UTILS_OBJ = $(UTILS_SRC:.cpp=.o)
MAIN_OBJ = $(MAIN_SRC:.cpp=.o)

#====================#
#      LIBRARIES     #
#====================#

ENTITIES_LIB = lib/libEntities.a
CORE_LIB = lib/libCore.a
UTILS_LIB = lib/libUtils.a

TARGET = pacman.exe

#====================#
#      BUILD RULES   #
#====================#

all: libs $(TARGET)

libs: $(ENTITIES_LIB) $(CORE_LIB) $(UTILS_LIB)

# Create Entities library
$(ENTITIES_LIB): $(ENTITIES_OBJ)
	@mkdir -p lib
	$(AR) $(ENTITIES_LIB) $(ENTITIES_OBJ)

# Create Core library
$(CORE_LIB): $(CORE_OBJ)
	@mkdir -p lib
	$(AR) $(CORE_LIB) $(CORE_OBJ)

# Create Utils library
$(UTILS_LIB): $(UTILS_OBJ)
	@mkdir -p lib
	$(AR) $(UTILS_LIB) $(UTILS_OBJ)

# Link executable
$(TARGET): $(MAIN_OBJ) $(CORE_LIB) $(ENTITIES_LIB) $(UTILS_LIB)
	$(CXX) $(MAIN_OBJ) -L./lib -lCore -lEntities -lUtils -o $(TARGET)

# Compile any .cpp into .o, creating directories automatically
%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean everything
clean:
	del /Q $(subst /,\,$(ENTITIES_OBJ)) 2>nul || true
	del /Q $(subst /,\,$(CORE_OBJ)) 2>nul || true
	del /Q $(subst /,\,$(UTILS_OBJ)) 2>nul || true
	del /Q $(subst /,\,$(MAIN_OBJ)) 2>nul || true
	del /Q lib\*.a 2>nul || true
	del /Q $(TARGET) 2>nul || true

.PHONY: all clean libs
