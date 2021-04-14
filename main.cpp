#include<iostream>
#include<string>

#include"taskClass.h"

using namespace std;

Task tasks[10]; //array of task objects, max of 10 in application




int g_Tnum = 0;//global variable to control what task we're on






bool running = true;
int optFunc; //user picks between Big options
int optTask; //navigates task management
int cont; //continue/main menu
int editClassNum;//progress function var
int editProgNum;



int main() {
    
    while(running) {
        
       cout<<" -------------------------------------------------------------------------- " << endl;
       cout<<"| 1. for Task management. 2. To Use Calculator 3. for [future function]|" << endl;
       cout<<" -------------------------------------------------------------------------- " << endl;
       
       
       cin>>optFunc;

       while(optFunc == 1) {
                
                cout<<"\n********************************************************************";
                cout<<"\n1. for NEW TASK, 2. for CURRENT TASKS, 3. for EDIT TASK PROGRESS: ";
                cout<<"\n********************************************************************" << endl;
                cin>>optTask;
                
                    if(optTask == 1) { //new task
                        cin.ignore(); //clears buffer
                        cout<<"Task name: ";
                        getline(cin, tasks[g_Tnum].taskName);
                        
                        cout<<"Due Date: ";
                        getline(cin, tasks[g_Tnum].dueDate);
                        cout<< "New task '" << tasks[g_Tnum].taskName << "' added sucessfully!";
                        g_Tnum++; //to store next task in next index 
                        
                        
                    }
                    if(optTask == 2) //iterate current tasks
                    { 
                         tasks[10].itr(tasks);
                    }
                    if(optTask == 3) {
                         tasks[10].itr(tasks);
                        
                        cout<<"Which task would you like to edit? \nTask: ";
                        cin>>editClassNum;
                        cout<< "Press 1. for not started, 2. for in progress, 3. for finished: ";
                        cin>>editProgNum;
                        
                        if(editProgNum == 1) 
                            tasks[editClassNum - 1].progress = " not started";
                        else if(editProgNum == 2)
                            tasks[editClassNum - 1].progress = " in-progress";
                        else if(editProgNum == 3)
                            tasks[editClassNum - 1].progress = " finished";
                        
                        
                    }
                
                    
                cout<<"\nPress '1' to continue in Task Manager or '2' to go to the main menu ";
                cin>>cont;
                    if (cont == 1) 
                        optFunc == 1;
                    else
                        break;
                    
            }
            
       
       
       while(optFunc == 2) 
       {
           cout<<"\n********************************************************************";
           cout<<"\n[placeholder text for function 2 (calculator)]";
           cout<<"\n********************************************************************" << endl;
            
           cout<<"\nPress '1' to continue in Calculator or '2' to go to the main menu ";
              cin>>cont;
                  if (cont == 1) 
                      optFunc == 2;
                  else
                      break;
           
           
       }
       
       while(optFunc == 3) 
       {
           cout<<"\n********************************************************************";
           cout<<"\n[placeholder text for function 3]";
           cout<<"\n********************************************************************" << endl;
           
           
           
           cout<<"\nPress '1' to continue in [FUNCTION 3] or '2' to go to the main menu ";
              cin>>cont;
                  if (cont == 1) 
                      optFunc == 3;
                  else
                      break;
           
       }   
    }    
    return 0;
}
