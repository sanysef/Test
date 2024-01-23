cmake_minimum_required(VERSION 3.23) 	# Specify CMake version.
project(HelloAERSP424) 		# A project name. This can be anything.
set(CMAKE_CXX_STANDARD 20) 	# Specify C++ version.
#include_directories(${CMAKE_SOURCE_DIR}/include)  header file folder.
add_executable(MyExecutableExe HelloWorld.cpp myMath.cpp myMath.h) 		# creates executable for source code #named my MyBinaryExe, looks at file HelloWorld.cpp

#These five lines above are minimal for CMakeLists.txt
#Create a text file containing these lines and save as CMakeLists.txt
