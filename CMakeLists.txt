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

# Clang detection
if (CMAKE_CXX_COMPILER MATCHES ".*clang")
    set (CMAKE_COMPILER_IS_CLANGCXX 1)
endif()

# Compiler options
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_COMPILER_IS_CLANGCXX)
	SET(ENABLE_CXX11 "-std=c++11")

	# Get GCC version
	if (CMAKE_COMPILER_IS_GNUCXX)
		EXECUTE_PROCESS(COMMAND "${CMAKE_CXX_COMPILER} -dumpversion" OUTPUT_VARIABLE GCC_VERSION)
		
		if (GCC_VERSION VERSION_LESS 4.7)
			SET(ENABLE_CXX11 "-std=c++0x")
		endif()
	endif()

	# Tune compiler 
	SET(CMAKE_CXX_DEBUG_FLAGS "${CMAKE_CXX_DEBUG_FLAGS} -g3 -O0")
	SET(CMAKE_CXX_REALESE_FLAGS "${CMAKE_CXX_RELEASE_FLAGS} -O2 -g0")
	SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${ENABLE_CXX11} -Wall -Werror")
endif()

# Include paths
INCLUDE_DIRECTORIES("include")

# Sub-Projects
ADD_SUBDIRECTORY("src/core")

