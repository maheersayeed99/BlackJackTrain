set(SOURCEFILES 
Blackjack_Simulator.cpp 
Game.cpp 
Hand.cpp 
Player.cpp 
Deck.cpp
DrawingUtilNG.cpp
GraphicFont.cpp
StringPlus.cpp
ysglfontdata.c
Source.cpp
yssimplesound.cpp
#yssimplesound_dsound.cpp
)

set(HEADERFILES 
Game.h 
Hand.h 
Player.h 
Deck.h
DrawingUtilNG.h
GraphicFont.h
StringPlus.h
ysglfontdata.h
yssimplesound.h
)
add_executable(blackjack MACOSX_BUNDLE ${SOURCEFILES} ${HEADERFILES})
target_link_libraries(blackjack fssimplewindow)
target_link_libraries(blackjack ysclass)
target_link_libraries(blackjack ysbitmapfont)
#target_link_libraries(blackjack yssimplesound)
target_link_libraries(blackjack ysbitmap)


target_include_directories(blackjack PUBLIC ../sounds)
target_include_directories(blackjack PUBLIC ../images/cards)
target_include_directories(blackjack PUBLIC ../images/backgrounds)
