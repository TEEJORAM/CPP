cmake_minimum_required(VERSION 3.20)

project(CPP LANGUAGES CXX)

# C++ 20 standards
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Executables (build separately to avoid multiple mains)
add_executable(Array
    src/Array/ArrayBasics.cpp
)

add_executable(Structure
    src/Structure/StructureBasics.cpp
)

add_executable(Pointers
    src/Pointers/PointersBasics.cpp
)

add_executable(Reference
   src/Reference/ReferenceBasics.cpp
)

add_executable(PointerToStructure
   src/PointerToStructure/PointerToStructureBasics.cpp
)

add_executable(Function
    src/Function/FunctionBasics.cpp
)

add_executable(ParameterPassingFunc
    src/ParameterPassingFunc/ParameterPassingFuncBasics.cpp
)