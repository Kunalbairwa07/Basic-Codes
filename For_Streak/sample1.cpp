#include <iostream>
#include <ctime>
using namespace std;

// Function to get current date as string
string getCurrentDate() {
    time_t now = time(0);
    tm* localTime = localtime(&now);
    int day = localTime->tm_mday;
    int month = 1 + localTime->tm_mon;
    int year = 1900 + localTime->tm_year;

    return to_string(day) + "-" + to_string(month) + "-" + to_string(year);
}

int main() {
    cout << "==============================" << endl;
    cout << "  GitHub Daily Commit Logger  " << endl;
    cout << "==============================" << endl;

    // Print today's date
    string today = getCurrentDate();
    cout << " Commit logged for: " << today << endl;

    // Motivation quote of the day (change this daily!)
    string quote = "Push yourself, because no one else is going to do it for you!";
    cout << " Quote of the day: " << quote << endl;

    // Tip (optional: change daily)
    string tip = "Even a small commit keeps your streak alive!";
    cout << " Tip: " << tip << endl;

    cout << "Keep coding and keep the streak alive " << endl;
    return 0;
}
