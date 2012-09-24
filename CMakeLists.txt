# BUILDING UNDER WINDOWS AND MINGW
# 	In order to build project under WINDOWS using MinGW
# 	You need run cmake with option `-G` 
#	[cmake -G "MinGW Makefiles"]
#
# BUILD DEBUG OR RELEASE 
# 	You have to use `CMAKE_BUILD_TYPE` flag
# 	[cmake -DCMAKE_BUILD_TYPE=DEBUG]

# You must have version of CMake isn't lower than defined here
# Get the latest version of CMake at cmake.org
CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

# The project name
PROJECT("lemon")

# Project versions
# To identify project version we use sequence of identifiers [major.minor.build], 
# where:
#   - MAJOR_VERSION is increased when there are significant changes in functionality;
#   - MINOR_VERSION is increased when minor features have been added;
#   - BUILD_VERSION is incremented when some bugs are fixed.
SET(LEMON_MAJOR_VERSION 0)
SET(LEMON_MINOR_VERSION 0)
SET(LEMON_BUILD_VERSION 0)

# Compiler options
if(CMAKE_COMPILER_IS_GNUCXX)
	SET(CMAKE_CXX_FLAGS         "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -Werror")
	SET(CMAKE_CXX_DEBUG_FLAGS   "${CMAKE_CXX_DEBUG_FLAGS} -g3 -O0")
	SET(CMAKE_CXX_REALESE_FLAGS "${CMAKE_CXX_RELEASE_FLAGS} -O2 -g0")
endif()

# Include paths
INCLUDE_DIRECTORIES("include")

# Sub-Projects
ADD_SUBDIRECTORY("src/core")

# Unit testing
#ENABLE_TESTING()
#ADD_SUBDIRECTORY("tests")

# Build info
MESSAGE("USER SYSTEM  ${CMAKE_SYSTEM}")
MESSAGE("COMPILER     ${CMAKE_CXX_COMPILER}")
MESSAGE("BUILD TYPE   ${CMAKE_BUILD_TYPE}")
