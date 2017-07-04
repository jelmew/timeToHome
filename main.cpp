#include <iostream>

using namespace std;

int main() {
    time_t now = time(0);
    tm *ltm = localtime(&now);
    int seconds = 60 - ltm->tm_sec;
    int minutes = 60 - 1 - ltm->tm_min;
    int hours = 16 - 1 - ltm->tm_hour;
    if (hours < 0) {
        cout << "You are already " << abs(hours) << " :hours" << minutes << " :minutes, " << seconds
             << " :seconds past time" << endl;
        cout << "Go home!!" << endl;
        return 0;
    }
    cout << hours << " :hours, " << minutes << " :minutes, " << seconds << " :seconds to go home" << endl;
    return 0;
}
