#ifndef TIME_TIME_H
#define TIME_TIME_H

class Time{
public:
    Time(int h,int m,int s);
    Time(int h,int m):Time(h,m,0){};
    Time(int h):Time(h,0,0){};
    Time():Time(0,0,0){};
    void tick();
    void print();

private:
    int hour;
    int minute;
    int second;
};

#endif //TIME_TIME_H
