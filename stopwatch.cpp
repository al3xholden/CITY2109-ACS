
/* Stopwatch / Timer class */
/* Included in Main.cpp */

#include <conio.h> //required for getch()
#include <iostream> //required for cin and cout
#include <chrono> // date & time utilities
#include <Windows.h> // Win32 API functions

using namespace std;
using namespace chrono;

class stopwatch : high_resolution_clock {
    bool stopped = false;
    const time_point start_time;
    const time_point end_time;

public:
    stopwatch() : start_time(now()) {};

    rep kill_stopwatch() const
    {
        return duration_cast<seconds>(now() - start_time).count();
    }

    rep elapsed_time() {
        if (stopped) {
            return duration_cast<seconds>(end_time - start_time).count();
        }
        else {
            return duration_cast<seconds>(now() - start_time).count();
        }
    }

};
