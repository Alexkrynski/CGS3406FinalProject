#include<iostream>
#include<string>
#include"taskClass.h"



void Task::taskSetter(Task arr[], string name, string date, int g_Tnum) // name&date setter
{
    arr[g_Tnum].taskName = name;
    arr[g_Tnum].dueDate = date;
    cout<< "New task '" << arr[g_Tnum].taskName << "' added sucessfully!";
    g_Tnum++;
}
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
            cout<<"\n---------------------------";
            cout<<"\nTasks";
            cout<<"\n---------------------------" << endl;
            for(int j = 0; j < responseSum; j++) //loop iterates task arr based on how many are there, calculated above 
                cout<< j + 1 << ". '" << arr[j].taskName << "'. DUE: " << arr[j].dueDate << ". STATUS: " << arr[j].progress << endl; 
        }
        
}
void Task::progressChange(Task arr[], int editClassNum, int editProgNum ) 
{ //self-explanatory
    
    if(editProgNum == 1) 
        arr[editClassNum - 1].progress = "not started";
    else if(editProgNum == 2)
        arr[editClassNum - 1].progress = "in-progress";
    else if(editProgNum == 3)
        arr[editClassNum - 1].progress = "finished";

    cout<< "\nProgress changed to: '" << arr[editClassNum - 1].progress <<  "' for '" << arr[editClassNum-1].taskName << "'" << endl;
}
 
















