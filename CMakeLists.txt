cmake_minimum_required(VERSION 3.10)
project(WORKSPACE LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

add_executable(InventoryManager
    src/main.cpp
    # Add any other source files here
    "src/include/Weapon.h" "src/cpp/Weapon.cpp" "src/include/RangedWeapon.h" "src/cpp/RangedWeapon.cpp")

target_include_directories(InventoryManager PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/src/include
)