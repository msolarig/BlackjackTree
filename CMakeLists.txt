cmake_minimum_required(VERSION 3.16)
project(BlackjackTree)

set(CMAKE_CXX_STANDARD 17)

# Include headers
include_directories(include)

# Collect all source files under src/
file(GLOB_RECURSE SOURCES
        "src/blackjack/*.cpp"
        "src/decision_tree/*.cpp"
        "src/simulator/*.cpp"
)

# Add main.cpp explicitly
list(APPEND SOURCES "main.cpp")

# Create the executable
add_executable(BlackjackTree ${SOURCES})