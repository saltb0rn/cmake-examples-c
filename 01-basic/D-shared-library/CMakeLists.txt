cmake_minimum_required(VERSION 3.5)

project(hello_project)

############################################################
# Create a library
############################################################

#Generate the shared library from the library sources
add_library(hello_library SHARED
  src/Hello.c
  )

add_library(hello::library ALIAS hello_library)

target_include_directories(hello_library PUBLIC
  ${PROJECT_SOURCE_DIR}/include
  )

############################################################
# Create an executable
############################################################

# Add an executable with the above sources
add_executable(hello_binary src/main.c)

# link the new hello_library target with hello_binary target
target_link_libraries(hello_binary PRIVATE
  hello::library
  )
