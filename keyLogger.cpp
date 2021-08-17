#include <iostream>
#include <windows.h>
#include <ctime>
#include <chrono>

using namespace std;

#include "getKey.hpp"

int main()
{
    system("color a") ;

    while (1)
    {
        for(int i = 8; i <= 190; i++)
        {
            if (GetAsyncKeyState(i) == -32767) {
                    bool caps = false;
                    if (GetAsyncKeyState(0x10 == -32767)) {
                        caps = true;
                    }
                    string key = getKey(i, caps) ;
                    time_t tt ;
                    struct tm * timeinfo ;
                    time ( &tt );
                    timeinfo = localtime ( &tt );
                    string propertime = asctime(timeinfo);
                    propertime.erase(propertime.length()-1);
                    cout << "[OUTPUT/DEBUG AT " << propertime << "] KeyBoard.Key." << key << " | KeyCode: " << i << endl ;
            }
        }
    }

    return 0;
}


