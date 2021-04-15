#include<iostream>
#include<string>

using namespace std;
 class Task {
    public:
    //class vars
    string taskName;
    string dueDate;
    string progress;
    
    //class method prototypes
    void itr(Task arr[]);
    void progressChange(Task arr[], int editClassNum, int editProgNum );
    void taskSetter(Task arr[], string name, string date, int g_num);
};


