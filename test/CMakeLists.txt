cmake_minimum_required(VERSION 3.20)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/bin")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/lib")
add_subdirectory(googletest)

add_executable(runAllTests
  GenreTesting.cpp
  InputTextTest.cpp
  OutputTextTest.cpp
  sceneTests.cpp 
  testPlayer.cpp
  VanillaTest.cpp
  MintTest.cpp
  horrorTests.cpp
  DatingTests.cpp
)

target_link_libraries(runAllTests gtest gtest_main)
target_link_libraries(runAllTests simpleLibrary)
