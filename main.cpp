#include <iostream>
#include <ctime>
#include <Windows.h>

using namespace std;

void init();
void setCountingTime();
void runCountdown();
void showTime();

unsigned int seconds;
unsigned int minutes;
unsigned int hours;

int main(){
    init();
    setCountingTime();
    runCountdown();
    return 0;
}

void init(){
    cout << "********* Welcome to CountDownTimer *********" << endl;
    cout << "\nPlease enter the time you want to count down." << endl;
}

void setCountingTime(){
    cout << "\nEnter Hours: " << endl;
    cin >> hours;
    cout << "\nEnter Minutes: " << endl;
    cin >> minutes;
    cout << "\nEnter Seconds: " << endl;
    cin >> seconds;
}

void runCountdown(){
     while(seconds >= 1){
        showTime();
        Sleep(1000);
        --seconds;

        if(seconds == 0 && minutes > 0){
            --minutes;
            seconds = 59;
        }

        if(seconds == 0 && minutes == 0 && hours > 0){
            --hours;
            seconds = 59;
            minutes = 59;
        }

        if(seconds == 0 && minutes == 0 && hours == 0){
            break;
        }
    }
    cout << "********* Count Down Finished *********" << endl;
    cout << "Stand UP and Move Move Move !!!" << endl;
}

void showTime(){
    cout << hours << ":" << minutes << ":" << seconds << endl;
}
