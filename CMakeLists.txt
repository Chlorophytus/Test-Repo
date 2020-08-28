cmake_minimum_required(VERSION 3.17)

# You can change the name of the project
project(testrepo VERSION 0.1.0)

# If you add classes you should add them here
add_executable(${PROJECT_NAME} main.cpp test.cpp another.cpp)

# Enable C++17 extensions (no need to -RJM)
set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD_REQUIRED TRUE)
set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 17)

# Link
target_link_libraries(${PROJECT_NAME})
