#include"elevator.h"
#include<iostream>
#include<cstdlib>
#include<windows.h>
#include <time.h>

using namespace std;

void elevator::goUp()
{
    ++current;
}

void elevator::goDown()
{
    --current;
}

void elevator::judgeAndShow(int upOrDown,int expected_floor)
{
    if(((upOrDown-1)&&expected_floor>=current)||(!(upOrDown-1)&&expected_floor<=current))
        show(current,expected_floor);
    else
        cout<<"invalid number of the floor you want to go"<<endl;
}
void elevator::show(int &current_floor,int expected_floor)
{
    if(current_floor<=expected_floor)
    {
        while(current_floor!=expected_floor)
        {
            cout<<"Now is Floor "<<current_floor++<<endl;
            delay(2);
        }
        cout<<"you have reached the "<<current_floor<<" floor"<<'\n'<<endl;
    }

    else
    {
        while(current_floor!=expected_floor)
        {
            cout<<"Now is Floor "<<current_floor--<<endl;
            delay(2);
        }
        cout<<"you have reached the "<<current_floor<<" floor"<<'\n'<<endl;
    }

}

void elevator::showtimeAndCurrentFloor()
{
    SYSTEMTIME sys;
    GetLocalTime(&sys);
    cout<<"Now the time is "<<sys.wYear<<'/'<<sys.wMonth<<'/'<<sys.wDay<<' '
        <<sys.wHour<<':'<<sys.wMinute<<'\n'
        <<"and you are on the Floor "<<current
        <<" at the beginning"<<'\n'<<endl;
}

void delay(int sec)
{
    time_t start_time, cur_time;
    time(&start_time);
    do
    {
        time(&cur_time);
    }
    while((cur_time-start_time)<sec);
}
