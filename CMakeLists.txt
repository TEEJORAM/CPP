cmake_minimum_required(VERSION 3.20)

# project(project_name LANGUAGES language1 language2 ...)
# Helps CMake to identify the project and language being used
project(CPP LANGUAGES CXX)
# CPP: Project name
# LANGUAGES CXX: Specifies that the project uses C++


# Set(variable_name_value value [CACHE TYPE DOCSTRING])
# variable_name_value: CMAKE_CXX_STANDARD
# Value denotes the C++ standard version
# CACHE TYPE DOCSTRING: Ensures the variable is stored in the cache meaning it persists across CMake runs

# C++ 20 standards
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# add_executable(executable_name source1, source2 ...)
# executable_name: Name of the executable to be created
# source1, source2 ...: Source files to be compiled into the executable
# These creates dll(WIN)/dylib(MAC)/so(LINUX) files for the respective executables
# Executables (build separately to avoid multiple mains)
add_executable(Array
    src/2.EssentialConcepts/1.Array/ArrayBasics.cpp
)

add_executable(Structure
    src/2.EssentialConcepts/2.Structure/StructureBasics.cpp
)

add_executable(Pointers
    src/2.EssentialConcepts/3.Pointers/PointersBasics.cpp
)

add_executable(PointerToStructure
    src/2.EssentialConcepts/4.PointerToStructure/PointerToStructureBasics.cpp
)

add_executable(Reference
    src/2.EssentialConcepts/5.Reference/ReferenceBasics.cpp
)

add_executable(Function
    src/2.EssentialConcepts/6.Function/FunctionBasics.cpp
)

add_executable(ParameterPassingFunc
    src/2.EssentialConcepts/7.ParameterPassingFunc/ParameterPassingFuncBasics.cpp
)

add_executable(ArrayAsParameter
    src/2.EssentialConcepts/8.ArrayAsParameter/ArrayAsParameter.cpp
)

add_executable(StructAsParameter
    src/2.EssentialConcepts/9.StructAsParameter/StructAsParameter.cpp
)

add_executable(StructureAndFunctions
    src/2.EssentialConcepts/10.StructureAndFunctions/StructureAndFunctions.cpp
)

add_executable(StructureAndFunctionsIntoClass
    src/2.EssentialConcepts/11.StructureAndFunctionsIntoClass/StructureAndFunctionsIntoClass.cpp
)

add_executable(ClassAndConstructors
    src/2.EssentialConcepts/12.ClassAndConstructors/main.cpp
    src/2.EssentialConcepts/12.ClassAndConstructors/ClassAndConstructors.h
    src/2.EssentialConcepts/12.ClassAndConstructors/ClassAndConstructors.cpp
)

add_executable(TemplateClasses
    src/2.EssentialConcepts/13.TemplateClasses/main.cpp
    src/2.EssentialConcepts/13.TemplateClasses/TemplateClass.h
    # src/2.EssentialConcepts/13.TemplateClasses/TemplateClass.cpp
)

add_executable(Recursion
   src/3.Recursion/BasicRecursion.cpp
   src/3.Recursion/TypesOfRecursion.cpp
)