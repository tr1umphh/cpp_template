project(unit_test)

file(GLOB TEST_SOURCES *.cc)

enable_testing()

add_executable(${PROJECT_NAME} ${TEST_SOURCES})
target_link_libraries(${PROJECT_NAME} PRIVATE gtest gtest_main gmock gmock_main pthread)
