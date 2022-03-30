cmake_minimum_required(VERSION 3.5)

# Set the project name
project (third_party_include)

# find a cJSON install with the libraries filesystem and system
find_package(cJSON 1.7.15 REQUIRED COMPONENTS filesystem system)

if (cJSON_FOUND)
  message ("cJSON found")
else()
  message (FATAL_ERROR "Cannot find cJSON")
endif()

add_executable(third_party_include main.c)

target_link_libraries(third_party_include PRIVATE
  cJSON::filesystem
  )
