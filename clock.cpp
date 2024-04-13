#include <iostream>
#include <ctime>

using namespace std;

int main() {
    cout << "CLOCK" << endl;

    while (true) {
        // Get current time
        time_t now = time(nullptr);
        tm *t = localtime(&now);

        // Extract and format time components
        int hr = t->tm_hour % 12;  
        int m = t->tm_min;
        int sec = t->tm_sec;

        string formattedTime = to_string(hr) + ":" + to_string(m) + ":" + to_string(sec);
        if (hr < 10) {
            formattedTime = "0" + formattedTime;  // Add leading zero for single-digit hours
        }
        if (m < 10) {
            formattedTime.insert(2, "0");  // Insert leading zero for single-digit minutes
        }
        if (sec < 10) {
            formattedTime.insert(5, "0");  // Insert leading zero for single-digit seconds
        }

        // Clear screen (replace with portable method if needed)
        system("cls");

        cout << formattedTime << endl;

    }

    return 0;
}
