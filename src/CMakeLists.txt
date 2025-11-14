cmake_minimum_required(VERSION 3.10)
project(Lab05_Modules)

set(CMAKE_CXX_STANDARD 17)


add_library(GameUtils STATIC
    src/Utils/point.cpp
    src/Utils/direction.cpp
    src/Utils/obstacle.cpp
    src/Utils/scoreboard.cpp
)

target_include_directories(GameUtils PUBLIC src/Utils)


add_library(GameEntities STATIC 
    src/Entities/player.cpp 
    src/Entities/enemy.cpp 
    src/Entities/reward.cpp
)

target_include_directories(GameEntities PUBLIC src/Entities)


target_link_libraries(GameEntities PUBLIC GameUtils)



add_library(GameCore STATIC 
    src/Engine/engine.cpp 
    src/Map/map.cpp 
    src/View/view.cpp
)

target_include_directories(GameCore PUBLIC src/Engine src/Map src/View)


target_link_libraries(GameCore PUBLIC GameUtils GameEntities)



add_executable(PAC-MAN src/main.cpp)

target_include_directories(PAC-MAN PUBLIC src)

target_link_libraries(PAC-MAN PRIVATE 
    GameEntities 
    GameCore 
    GameUtils
)
