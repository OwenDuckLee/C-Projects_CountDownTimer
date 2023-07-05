#include <iostream>
#include <ctime>
#include <Windows.h>
#include <string>

using namespace std;

string getPresentTime();

int main(){
    int seconds;
    cout << "Enter total number seconds for counter" << endl;

   
    if(cin){
         cin >> seconds;
         cout << "Counting start !! " + getPresentTime() << endl;
    }
     
    while(seconds >= 1){
        cout << "Counter : " << seconds << endl;
        Sleep(1000);
        seconds--;
    }

    cout << "Counting end !! "+ getPresentTime() << endl;
   

    return 0;
}

string getPresentTime(){
    time_t tt;
    struct tm* st;

    time(&tt);
    st = localtime(&tt);
    return asctime(st);
}   