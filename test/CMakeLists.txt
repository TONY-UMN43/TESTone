cmake_minimum_required(VERSION 3.3)
project(WorkshopTests)

include_directories(${CMAKE_SOURCE_DIR}/src)


set(SRC_FILES
	main.cpp
)

add_executable (workshop_tests ${SRC_FILES})
target_link_libraries(workshop_tests workshop)