For this project you will need two classes: Player and Question.

Declare and define each in their own .h and .cpp files.

In your Source.cpp file, create a trivia game for multiple players. Create 10 Question objects (You can come up with your own trivia questions). Each question should have 4 possible answers, with only one being correct. At the beginning of the game, ask the user how many players are playing. Create as many Player objects as are requested. 

Then, ask each player 5 of the 10 questions. i.e. ask player 1 the first question, then ask player 2 the first question, etc. 

Do not tell the players which questions they got right or wrong until the end of the game. 

Inside each Player object, create two vectors that contain pointers to Question objects. One vector contains pointers to the questions the player got right and one contains pointers to the questions the player got wrong.

At the end of the game, print out which players got each question right. Allow the user to play again, asking 5 different questions this time. Re-use the same Player objects, but make sure to clear the necessary data. 