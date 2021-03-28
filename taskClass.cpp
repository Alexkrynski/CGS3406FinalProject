#include<iostream>
#include<string>

using namespace std;


class Task {
    public:
    //task name
    string taskName;
    //due date
    string dueDate;
    //progress
    string notStart, inProgress, finished;
    
    void setName(string name) {
        taskName = name;
    }
    
    void setDate(string date) {
        dueDate = date;
        
    }
    //finished tasks
};