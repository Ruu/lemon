# Link libraries for unit testing
link_libraries(gtest) 
if(UNIX)
	link_libraries(pthread) 
endif(UNIX)
