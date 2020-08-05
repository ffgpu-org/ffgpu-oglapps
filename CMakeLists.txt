cmake_minimum_required(VERSION 3.10)
project(glapps)

add_compile_options(-Wall -std=gnu99)

find_package(glfw3 REQUIRED)

# basic
add_executable(GL_Compat_Triangle_0000 src/geo/GL_Compat_Triangle_0000.c)
target_link_libraries(GL_Compat_Triangle_0000 GL glut)
add_executable(GL_Compat_Triangle_0001 src/geo/GL_Compat_Triangle_0001.c)
target_link_libraries(GL_Compat_Triangle_0001 GL glut)
add_executable(GL_Compat_Triangle_0002 src/geo/GL_Compat_Triangle_0002.c)
target_link_libraries(GL_Compat_Triangle_0002 GL glut)






# models
add_executable(venus src/models/venus.c)
target_link_libraries(venus GL glut)
add_executable(monkey src/models/monkey.c)
target_link_libraries(monkey GL glfw)
