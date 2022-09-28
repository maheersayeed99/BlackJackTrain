# BlackJackTrain

<img src = "/Screen Shot 2022-09-27 at 11.08.07 PM.png" width = "750"/>

## Description

This is a simulator that allows the user to practice BlackJack strategy, as well as play the game as intended. The parameters of the game can be customized to mimic a casino environment.  

## Build and Run
You will need to install cmake to run this program.
Make a build directory right outside the BlackJackTrain folder. Enter the build directory and enter the command  `cmake add ../BlackJackTrain`.
Now, build the project by typing the command `cmake --build . --target blackjack --config Release`.
Finally, run the executable. Optianally, you can include 3 input arguments. The first is the time taken between cards in milliseconds. The second argument is the number of players (default 5).
The final argument is the number of decks in the main pile (default 6).  



## Controls

The hand at the bottom of the screen is the current active hand

`1` Hit  
`2` Stand  
`3` Split (Only if hand is a pair)  
`4` Double Down  
`5` Insurance  
`M` Menu  
`N` Next Hand  
