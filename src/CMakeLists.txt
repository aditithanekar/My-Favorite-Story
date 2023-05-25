
add_library(simpleLibrary
  Genre.cpp
  OutputText.cpp 
  Player.cpp
  Scene.cpp
  Vanilla.cpp
  Mint.cpp
)

find_library(M_LIB m)
target_link_libraries(simpleLibrary ${M_LIB})


