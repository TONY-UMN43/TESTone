cmake_minimum_required(VERSION 3.3)
project(Workshop)

set(SRC_FILES
	fact.cpp
	fact.h
)

add_library(workshop ${SRC_FILES})