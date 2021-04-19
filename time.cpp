#include <iostream>
#include "time.h"

using namespace std;

Time::Time(int h,int m,int s){
    //ff secs/mins/hrs are greater than 60
    if(s>=60){
        m+=s/60;
        s=s%60;
    }
    if(m>=60){
        h+=m/60;
        m=m%60;
    }
    if(h>=24){
        h=h%24;
    }
    hour=h;
    minute=m;
    second=s;
}
void Time::tick(){

    if(second>=60){
        minute+=second/60;
        second=second%60;
    }
    minute=minute+1;
    if(minute>=60){
        hour+=minute/60;
        minute=minute%60;
    }
    if(hour>=24){
        hour=hour%24;
    }
}
void Time::print() {
    cout << "(" << hour << ":" << minute << ":" << second << ")\n";
}