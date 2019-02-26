Design a base class named Account that holds the following info about a bank account:

Balance
Number of deposits this month
Number of withdrawals
Annual Interest Rate
Monthly service charges.
The class should have the following member functions:

constructor: Accepts arguments for the balance and annual interest rate
deposit: A virtual function that accepts an argument for the amount of the deposit. 
withdraw: A virtual function that accepts an argument for the amount of the withdrawal. 
calcInt: A function that updates the balance for a single month. You must calculate the monthly interest rate from the annual interest rate and then determine from that how much to add to the account's balance.
monthlyProc: A virtual function that subtracts the monthly service charges from the balance, calls the calcInt function, then sets the variables that hold the number of withdrawls, number of deposits, and monthly service charges to 0. 
The next class is a SavingsAccount class that is derived from Account. It should hold the following extra info:

status: to represent an active or inactive account
If the balance of a savings account falls below $25, it becomes inactive. No more withdrawals can be made until the balance is raised above $25.

SavingsAccount should have these member functions:

withdraw: Checks to see if the account is inactive. If the account is active, the base class version of withdraw is called to perform the withdrawal.
deposit: Determine if the account needs to be set active. Call the base class version of deposit. 
monthlyProc: If the # of withdrawals this month is greater than 3, a service charge of $1 for each withdrawal above 3 is added to this account's monthly service charges.

A CheckingAccount class also derives from the Account class. It has the following member functions:

withdraw: If the balance will go below 0, a service charge of $15 is charged to the account and the withdrawal is not made. This can cause the balance to go below 0.
monthlyProc: Add the monthly fee of $5 plus $0.10 per withdrawal this month to this account's monthly service charges. This can also cause the balance to go below 0.
In your main function, ask the user to enter values for a SavingsAccount and CheckingAccount. i.e. the user should enter their starting balances and annual interest rates. Everything else can be default set to 0 (number of withdrawals, number of deposits, monthly service charges).  In a menu-driven system, allow the user to:

Make a deposit to savings
Make a deposit to checkings
Make a withdrawal from savings
Make a withdrawal from checkings
View the balance of either
Indicate that a month has passed (i.e. call the monthlyProc functions on each accounts)