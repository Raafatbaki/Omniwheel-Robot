#include <stdio.h>
#include <wiringPi.h>
#include <iostream>
#include <ncurses.h>
#include "test1.cpp"
#include "test2.cpp"
using namespace std;

void CONTROLL()
{
        initscr();
        keypad(stdscr,TRUE);
        refresh();
        int keypressed = getch();
        if(keypressed==KEY_UP || keypressed == 'W' || keypressed == 'w')
        {
                FORWARD();
        }
        if(keypressed==KEY_DOWN || keypressed == 'X' || keypressed == 'x')
        {
                BACKWARD();
        }
        if(keypressed=='D' || keypressed=='d')
        {
                LINKS();
        }
        if(keypressed=='A' || keypressed=='a')
        {
                RECHTS();
        }
        if(keypressed=='F' || keypressed=='f')
        {
                LINKS2();
        }
        if(keypressed=='E' || keypressed=='e')
        {
                DREHEN();
        }
        if(keypressed=='s' || keypressed=='S')
        {
                STOP();
        }

        endwin();

}

int main()
{
        DEFINE();
        while(1)
        {
                CONTROLL();
        }
        return 0;
}

