# CGS3406FinalProject
Digital Assistant 

For this project, we made a Digital assistant that can preform three big functions: 

Function 1: Task Manager (made by Alex Krynski)
Function 2: Scientific Calculator (made by Galen Olds)
Function 3: Timer (made by Thalifa S.)


Function Descriptions

Function 1: Task Manager
  The task manager uses a custom task class and an array of objects of this class to give the user the ability to create new tasks with a due date and assign a progress description (not started, in-progress, finished). Within the task manager the user is presented with the 3 options: create a task, check current tasks, and edit progress. Each of these options rely on their own class method. "taskSetter," sets the name and due date. "itr" shows current tasks by first determining how many tasks there are, then iterating the array until all tasks are shown. "progressChange," lets the user edit progress of a specific task by accepting an input corresponding to one of the progress settings.
  
Function 2: Scientific Calculator
  The calculator is a poetic addition to the final 3046 project that produces a more complex version of the calculator program shown to us in class. The calculator makes use of the switch and case properties to store different formulas under different options that the user can then choose to calculate their answer. The caluclator includes algebraic, logarithmic, and trigonometric functions with room to add more. Once an option is selected the program will ask for your number selections and generate an answer after both have been entered. Any invalid input is noted by the calculator and allows the user to start again.
  
  Function 3: Task Timer 
The timer (hour:minute:second) is entered and the user have the options to add how many minutes they would like to add to the time. The time class is hour, minute, and second member variables, constructor, print(),tick(), and member functions are used.  Constructors was put in effect using 3 types. The print() function prints the time in (hour:minute:second) format after calculating the added time. The tick() function calculates the time after 1 mins was added, the second and minute are 0 when they reach 60, and the hour is 0 when reached 24.

  
