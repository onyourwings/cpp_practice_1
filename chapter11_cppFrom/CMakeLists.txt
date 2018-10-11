cmake_minimum_required(VERSION 3.1      )
project(HospitalBill)
set (CMAKE_CXX_STANDARD 11)
set (NAME_SRC 
	src/chap11_ex.cpp 
        src/billType.cpp 
        src/dateType.cpp 
        src/doctorType.cpp 
        src/patientType.cpp 
	src/personType.cpp
)
set (NAME_HEADERS
        include/billType.h 
        include/dateType.h 
        include/doctorType.h 
        include/patientType.h 
	include/personType.h 
)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

add_executable(HospitalBill ${NAME_SRC} ${NAME_HEADERS})


