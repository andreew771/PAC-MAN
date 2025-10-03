cmake_minimum_required(VERSION 3.10)
project(PAC-MAN)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(include) # Calea către fișierele header
link_directories(lib)        # Calea către bibliotecile externe (folosește doar dacă este necesar)

file(GLOB SOURCES "/*.cpp") # Colectează automat toate fișierele .cpp din src
add_executable(PAC-MAN ${SOURCES})

target_link_libraries(app love math) # Leagă bibliotecile
