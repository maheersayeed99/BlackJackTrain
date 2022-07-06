set(SOURCEFILES 
Blackjack_Simulator.cpp 
Game.cpp 
Hand.cpp 
Player.cpp 
Deck.cpp
DrawingUtilNG.cpp
GraphicFont.cpp
StringPlus.cpp
)

set(HEADERFILES 
Game.h 
Hand.h 
Player.h 
Deck.h
DrawingUtilNG.h
GraphicFont.h
StringPlus.h
)
add_executable(blackjack MACOSX_BUNDLE ${SOURCEFILES} ${HEADERFILES})
target_link_libraries(blackjack fssimplewindow)
target_link_libraries(blackjack ysclass)
target_link_libraries(blackjack ysbitmapfont)
target_link_libraries(blackjack ysbitmap)
#target_link_libraries(blackjack yssimplesound)


