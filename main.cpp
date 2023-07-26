#include <iostream>
#include <Windows.h>
#include <conio.h>

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
    runCountdown();
    return 0;
}

void init(){
    cout << "\n\n\n";
    cout << "********* Welcome to CountDownTimer *********" << endl;
    cout << "\nPlease enter the time you want to count down." << endl;
    cout << "\n";
    setCountingTime();
    cout << "*********************************************" << endl;
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
        Sleep(1000);
        // system("cls");
        showTime();
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
    cout << "************** Count Down Timer *************" << endl;
    cout << "\n";
    cout << hours << ":" << minutes << ":" << seconds << endl;
    cout << "\n";
    cout << "*********************************************" << endl;
}
