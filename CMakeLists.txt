cmake_minimum_required(VERSION 3.20)

project(CPP LANGUAGES CXX)

# C++ 20 standards
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Executables (build separately to avoid multiple mains)
add_executable(Array
    src/1.EssentialConcepts/1.Array/ArrayBasics.cpp
)

add_executable(Structure
    src/1.EssentialConcepts/2.Structure/StructureBasics.cpp
)

add_executable(Pointers
    src/1.EssentialConcepts/3.Pointers/PointersBasics.cpp
)

add_executable(PointerToStructure
    src/1.EssentialConcepts/4.PointerToStructure/PointerToStructureBasics.cpp
)

add_executable(Reference
    src/1.EssentialConcepts/5.Reference/ReferenceBasics.cpp
)

add_executable(Function
    src/1.EssentialConcepts/6.Function/FunctionBasics.cpp
)

add_executable(ParameterPassingFunc
    src/1.EssentialConcepts/7.ParameterPassingFunc/ParameterPassingFuncBasics.cpp
)

add_executable(ArrayAsParameter
    src/1.EssentialConcepts/8.ArrayAsParameter/ArrayAsParameter.cpp
)