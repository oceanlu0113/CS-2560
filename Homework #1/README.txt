Note: Do not use any global variables for this project!

Please read these instructions carefully and make sure you understand each step. Points will be taken off if aspects of the project are implemented incorrectly (i.e. you use global variables, data is not formatted nicely, code is not split up into functions for each task, etc). If you have any questions, email me or talk to me after class / during office hours. 

You will be writing a program to allow a store owner to enter the sales made in a given day. In your main function, you will define two parallel vectors. The first contains strings, and each string indicates the name of an item that was sold. The other vector contains doubles which indicate how much the corresponding item costs. 

Design your code as a menu-based program (i.e. continually ask the user which task they would like to perform, unless the user enters '0', in which case quit the program). 

Each task the user can perform should be implemented in a separate function outside of the main function.  

The first task is to add sales. When the addSales function is called, the user should be asked to enter a sale and then enter its price. This should continue until the user requests to stop entering sales. 

The second task is to view sales. This function should nicely format the current sales data contained in the two vectors. Use some of the formatting techniques we discussed in class so data lines up nicely. 

The third task is to edit a sale. In this function, the user should be asked for a sale's index in the vector. The user may then edit that sale's price. 

The fourth task is to remove a sale. In this function, the user should be allowed to enter the index of a sale and it should be removed from the vector. Note: We did not discuss how to do this in class! We only discussed how to remove the final entry from a vector. I recommend doing a Google search to find out how to remove an item from a vector based on its index (StackOverflow has some good solutions). 

Finally: You should provide some basic input validation. For example, make sure the user enters a valid vector index when editing a sale, etc. However, I will not be entering string values whenever the program asks for a numeric value, so you don't have to worry about putting that type of check in. 