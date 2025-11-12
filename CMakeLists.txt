cmake_minimum_required(VERSION 3.10)
project(Lab05_Modules)

set(CMAKE_CXX_STANDARD 17)

# Biblioteci (module)
add_library(GameEntities STATIC 
    src/entities/player.cpp 
    src/entities/enemy.cpp 
    src/entities/reward.cpp
)

add_library(GameCore STATIC 
    src/engine/engine.cpp 
    src/map/map.cpp 
    src/view/view.cpp
)

add_library(GameUtils STATIC 
    src/utils/scoreboard.cpp
)


add_executable(GameApp src/main.cpp)


target_link_libraries(GameApp PRIVATE GameEntities GameCore GameUtils)
