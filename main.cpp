#include<iostream>
#include<string>
#include"taskClass.cpp"

using namespace std;


Task tasks[10]; //array of tasks, max of 10 in application
int g_Tnum = 0;//global variable to control what task we're on


bool running = true;
int optFunc; //user picks between Big options
int optTask1; //navigates task management
int optTask2;//navigates task management


int main() {
    
    
    while(running) {
        
       
       cout<<"1. for Task management. 2. for [future function]" << endl;
       cin>>optFunc;
       
       
       
       
       if(optFunc == 1) {
 
            //Big option 1
            cout<<"\n1. for tasks, 2. for [OPTION] ,3. for [OPTION]: ";
            cin>>optTask1;

            if(optTask1 == 1) {
                int taskOpt;
                cout<<"\n1. for NEW TASK, 2. for CURRENT TASKS, 3. for EDIT TASK PROGRESS ";
                cin>>taskOpt;
                
                    if(optTask2 == 1) {
                        cin.ignore(); //clears buffer
                        cout<<"Task name: ";
                        getline(cin, tasks[g_Tnum].taskName);
                        
                        cout<<"Due Date: ";
                        getline(cin, tasks[g_Tnum].dueDate);
                        cout<< "New task '" << tasks[g_Tnum].taskName << "' added sucessfully!";
                        g_Tnum++; //to store next task in next index
                        
                    }
                    if(optTask2 == 2) //prints out tasks
                    {
                        
                        for(int i = 0; i < 10; i++) {
                            cout<< "'" << tasks[i].taskName << "'. due: " << tasks[i].dueDate << endl;
                        }
                        
                    }
                    if(optTask2 == 3)
                    {
                        
                    }
                
            }
            
       }
       
       if(optFunc == 2) {
           cout<<"[placeholder text for function 2]" << endl;
       }   
    }    
    return 0;
}


