cmake_minimum_required(VERSION 3.3)
project(WorkshopTests)

include_directories(
	${CMAKE_SOURCE_DIR}/src
	${CMAKE_SOURCE_DIR}/lib/googletest/googletest/include
)

link_directories(
	${CMAKE_SOURCE_DIR}/lib/googletest/build/lib
)

set(SRC_FILES
	main.cpp
)

add_executable (workshop_tests ${SRC_FILES})

#Uncomment when googletest is downloaded and built
target_link_libraries(workshop_tests workshop gtest_main gtest)
