cmake_minimum_required(VERSION 2.8.3)
project(spacecraft)

find_package(catkin REQUIRED COMPONENTS
    roscpp
    std_msgs
)

catkin_package(
    INCLUDE_DIRS include
    LIBRARIES ${PROJECT_NAME}
    CATKIN_DEPENDS
        roscpp
        std_msgs
)

include_directories(
    include
    ${catkin_INCLUDE_DIRS}
)

add_executable(${PROJECT_NAME}_node src/${PROJECT_NAME}.cpp src/Spacecraft.cpp)
add_dependencies(${PROJECT_NAME}_node
    # ${${PROJECT_NAME}}_EXPORTED_TARGETS
    ${catkin_EXPORTED_TARGETS}
)
# add_library(${PROJECT_NAME} src/Spacecraft.cpp)
target_link_libraries(${PROJECT_NAME}_node
    ${catkin_LIBRARIES}
)