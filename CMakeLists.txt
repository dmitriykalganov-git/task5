cmake_minimum_required(VERSION 3.5)

project(allocator VERSION 0.0.1)



add_executable(graphic_editor graphic_editor.cpp model.h View.h Controller.h)
set_target_properties(graphic_editor PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON)

set(CPACK_GENERATOR DEB)

include(CPack)