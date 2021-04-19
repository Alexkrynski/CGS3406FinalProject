#include<iostream>
#include<string>
#include<math.h>
#include"taskClass.h"

using namespace std;


bool running = true;//for whole app


Task taskArr[10]; //array of task objects, max of 10 in application
int g_Tnum = 0;//global variable to control what task we're on
int optFunc; //user picks between 3 functions of app
int optTask; //navigates 3 options of task management
int cont; //continue/main menu
string nameTemp, dateTemp; //passes into setter function
int editClassNum;//progress function var
int editProgNum;//progress function var



int main() {
    
    taskArr[0].taskName = "test";
taskArr[0].dueDate = "test date";
    
    while(running) {
        
       cout<<"-------------------------------------------------------------------------- " << endl;
       cout<<"|  Hi, I'm Alfred, your digital assistant. Press...                      | " << endl;
       cout<<"| 1. for Task management. 2. To Use Calculator 3. for [future function]  | " << endl;
       cout<<"-------------------------------------------------------------------------- " << endl;
       
       
       cin>>optFunc;

       while(optFunc == 1) {
                
                cout<<"\n********************************************************************";
                cout<<"\n1. for NEW TASK, 2. for CURRENT TASKS, 3. for EDIT TASK PROGRESS: ";
                cout<<"\n********************************************************************" << endl;
                cin>>optTask;
                
                    if(optTask == 1) { //new task
                        cin.ignore();
                        cout<<"Enter new task name: ";
                        getline(cin, nameTemp);
                        cout<<"Enter the due date: ";
                        getline(cin, dateTemp);
                            taskArr[10].taskSetter(taskArr, nameTemp, dateTemp, g_Tnum);
                            g_Tnum++;
                    }
                    if(optTask == 2) //iterate current tasks
                    { 
                        taskArr[10].itr(taskArr);
                    }
                    if(optTask == 3) //itr task to show user, then user edits progress
                    {
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
           float a,b,PI;
           int c;
           cout<<"\n********************************************************************";
           cout<<"\nWelcome to the Scientific Calculator";
           cout<<"\n********************************************************************" << endl;
                cout<<"Operations\t"<<"\tTrigonometric Functions"<<"\t\tLogarithmic Functions\n";
                cout<<"*****************************************************************\n";
                cout<<"1 - Division\t\t"<<"7 - Sin\t\t"<<"\t\t13 - Log"<<endl;
                cout<<"2 - Multiplication\t"<<"8 - Cos\t\t"<<"\t\t14 - Log Base 10"<<endl;
                cout<<"3 - Subtract"<<"\t\t9 - Tan\t\t"<<endl;
                cout<<"4 - Addition\t\t"<<"10 - Inverse Sin"<<endl;
                cout<<"5 - Calculate Exponent"<<"11 - Inverse of Cos"<<endl;
                cout<<"6 - Square Root"<<"12 - Inverse of Tan"<<endl;
                cout<<"Enter the function that you want to execute: ";
                cin>>c;
                    PI=3.14159265358979323;
                switch(c){
                        case 1:
                            cout<<"Enter the 1st number :";
                            cin>>a;
                            cout<<"Enter the 2nd number :";
                            cin>>b;
                            cout<<"Division = "<<a/b<<endl;
                        break;
                        case 2:
                            cout<<"Enter the 1st number :";
                            cin>>a;
                            cout<<"Enter the 2nd number :";
                            cin>>b;
                            cout<<"Multiplication = "<<a*b<<endl;
                        break;
                        case 3:
                            cout<<"Enter the 1st number :";
                            cin>>a;
                            cout<<"Enter the 2nd number :";
                            cin>>b;
                            cout<<"Subtraction = "<<a-b<<endl;
                        break;
                        case 4:
                            cout<<"Enter the 1st number :";
                            cin>>a;
                            cout<<"Enter the 2nd number :";
                            cin>>b;
                            cout<<"Addition = "<<a+b<<endl;
                        break;
                        case 5:
                            cout<<"Enter the base :";
                            cin>>a;
                            cout<<"Enter the POWER :";
                            cin>>b;
                            cout<<"Exponent = "<<pow(a,b)<<endl;
                        break;
                        case 6:
                            cout<<"Enter a number to find the sqrt :";
                            cin>>a;
                            cout<<"Square Root = "<<sqrt(a)<<endl;
                        break;
                        case 7:
                            cout<<"Enter a Number :";
                            cin>>a;
                            cout<<"Sin = "<<sin(a)<<endl;
                        break;
                        case 8:
                            cout<<"Enter a number :";
                            cin>>a;
                            cout<<"Cos = "<<cos(a)<<endl;
                        break;
                        case 9:
                            cout<<"Enter a number :";
                            cin>>a;
                            cout<<"Tan = "<<tan(a)<<endl;
                        break;
                        case 10:
                            cout<<"Enter a number to find the Inverse of Sine :";
                            cin>>a;
                            cout<<"Inverse of Sin = "<<asin(a)*180.0/PI<<endl;
                        break;
                        case 11:
                            cout<<"Enter a number to find the Inverse of Cosine :";
                            cin>>a;
                            cout<<"Inverse of Cos = "<<acos(a)*180.0/PI<<endl;
                        break;
                        case 12:
                            cout<<"Enter a number to find the Inverse of Tangent :";
                            cin>>a;
                            cout<<"Inverse of Tan = "<<atan(a)*180.0/PI<<endl;
                        break;
                        case 13:
                            cout<<"Enter a number to find Logarithm :";
                            cin>>a;
                            cout<<"Log = "<<log(a)<<endl;
                        break;
                        case 14:
                            cout<<"Enter a nubmber to find the Logarithm Base 10 :";
                            cin>>a;
                            cout<<"Log Base 10 ="<<log10(a)<<endl;
                        break;
                        default:
                            cout<<"Wrong Input"<<endl;
                            

                }

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




