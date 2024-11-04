
project(eig)

find_package(Eigen3 REQUIRED)
if (Eigen3_FOUND)
    message(STATUS "Eigen3 found")
endif()
add_executable(eig main.cpp)
target_link_libraries(eig Eigen3::Eigen)

