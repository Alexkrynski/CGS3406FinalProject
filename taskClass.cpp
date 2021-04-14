#include<iostream>
#include<string>
#include"taskClass.h"


void Task::itr(Task arr[]) //prints out task list based on how many there are 
{
    int responseSum = 0; // var to determine how many tasks there are
    for(int i = 0; i < 9; i++) 
    {
        if (arr[i].taskName.length() > 0) 
            responseSum = responseSum + 1;
    }
    
        if(responseSum == 0)
            cout<<"No tasks" << endl;
        else
        {
            for(int j = 0; j < responseSum; j++) 
                cout<< j + 1 << ". '" << arr[j].taskName << "'. due: " << arr[j].dueDate << ". Status: " << arr[j].progress << endl; 
        }
        
}
 















