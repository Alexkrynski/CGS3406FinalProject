#include<iostream>
#include<string>

#include"taskClass.h"

using namespace std;


bool running = true;//for whole app


Task taskArr[10]; //array of task objects, max of 10 in application
int g_Tnum = 0;//global variable to control what task we're on
int optFunc; //user picks between 3 functions of app
int optTask; //navigates 3 options of task management
int cont; //continue/main menu
int editClassNum;//progress function var
int editProgNum;//progress function var



int main() {
    
    taskArr[0].taskName = "test";
taskArr[0].dueDate = "test date";
    
    while(running) {
        
       cout<<"-------------------------------------------------------------------------- " << endl;
       cout<<"|  Hi, I'm [name], your digital assistant. Press...                      | " << endl;
       cout<<"| 1. for Task management. 2. To Use Calculator 3. for [future function]  | " << endl;
       cout<<"-------------------------------------------------------------------------- " << endl;
       
       
       cin>>optFunc;

       while(optFunc == 1) {
                
                cout<<"\n********************************************************************";
                cout<<"\n1. for NEW TASK, 2. for CURRENT TASKS, 3. for EDIT TASK PROGRESS: ";
                cout<<"\n********************************************************************" << endl;
                cin>>optTask;
                
                    if(optTask == 1) { //new task
                        cin.ignore(); //clears buffer
                        cout<<"New task name: ";
                        getline(cin, taskArr[g_Tnum].taskName);
                        
                        cout<<"Due Date: ";
                        getline(cin, taskArr[g_Tnum].dueDate);
                        cout<< "New task '" << taskArr[g_Tnum].taskName << "' added sucessfully!";
                        g_Tnum++; //to store next task in next index 
                        
                        
                    }
                    if(optTask == 2) //iterate current tasks
                    { 
                         taskArr[10].itr(taskArr);
                    }
                    if(optTask == 3) {
                         taskArr[10].itr(taskArr);
                        
                        cout<<"\nWhich task would you like to edit? \nTask: ";
                        cin>>editClassNum;
                        cout<< "\nPress 1. for not started, 2. for in progress, 3. for finished: ";
                        cin>>editProgNum;
                        
                        taskArr[10].progressChange(taskArr,editClassNum,editProgNum);
                        
                        
                    }
                
                cout<<"\n**********************************************************************";    
                cout<<"\nPress '1' to continue in Task Manager or '2' to go to the main menu ";
                cout<<"\n**********************************************************************"<< endl;
                cin>>cont;
                    if (cont == 1) 
                        optFunc == 1;
                    else
                        break;
                    
            }
            
       
       
       while(optFunc == 2) 
       {
           cout<<"\n********************************************************************";
           cout<<"\n[placeholder text for function 2]";
           cout<<"\n********************************************************************" << endl;
            
           cout<<"\n**********************************************************************";    
           cout<<"\nPress '1' to continue in Task Manager or '2' to go to the main menu ";
           cout<<"\n**********************************************************************"<< endl;
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
           
           
           
           cout<<"\n**********************************************************************";    
           cout<<"\nPress '1' to continue in Task Manager or '2' to go to the main menu ";
           cout<<"\n**********************************************************************" << endl;
              cin>>cont;
                  if (cont == 1) 
                      optFunc == 3;
                  else
                      break;
       }
    }
    return 0;
}




