cmake_minimum_required(VERSION 3.10)
project(InventorySystem LANGUAGES CXX)

# Set C++ standard (e.g., C++17)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

# Add files and define the executable target FIRST
add_executable(InventorySystem
    src/main.cpp
    # Add any other source files here

 "src/include/Item.h" "src/cpp/Item.cpp")

# Now, you can specify include directories for the defined target
target_include_directories(InventorySystem PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/src/include # Use PRIVATE for includes only needed by this target
)