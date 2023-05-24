add_library(simpleLibrary
  inputText.cpp
)

find_library(M_LIB m)
target_link_libraries(simpleLibrary ${M_LIB})