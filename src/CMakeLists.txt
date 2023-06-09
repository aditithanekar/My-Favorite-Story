
add_library(simpleLibrary
  Genre.cpp
  OutputText.cpp 
  Player.cpp
  Scene.cpp
  Dating.cpp
  Vanilla.cpp
  Mint.cpp
  InputText.cpp
  Horror.cpp
  main.cpp
  )

add_executable(playMyFavoriteStory
  Genre.cpp
  Dating.cpp 
  Horror.cpp 
  InputText.cpp
  OutputText.cpp
  Scene.cpp 
  Player.cpp
  Vanilla.cpp
  Mint.cpp
  main.cpp
)

find_library(M_LIB m)
target_link_libraries(simpleLibrary ${M_LIB})