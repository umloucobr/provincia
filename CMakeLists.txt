# CMakeList.txt: projeto de CMake para provincia, incluir origem e definir
# lógica específica a um projeto aqui.
#
cmake_minimum_required (VERSION 3.8)

project ("provincia")

# Adicione a origem ao executável deste projeto.
add_executable (provincia "provincia.cpp" "provincia.h")

set_property(TARGET provincia PROPERTY CXX_STANDARD 11)

# TODO: Adicione testes e instale destinos, se necessário.
