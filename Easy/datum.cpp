#include <iostream>
#include <ctime>
#include <string>

using namespace std;

string getDayOfWeek(int day, int month) {

    tm time_in = {0, 0, 0, day, month - 1, 2009 - 1900}; // tm_year is years since 1900, tm_mon is 0-based
    time_t time_temp = mktime(&time_in);

    const tm *time_out = localtime(&time_temp);
    int day_of_week = time_out->tm_wday;
    const string days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    
    return days[day_of_week];
}

int main() {

    int day, month;
    cin >> day >> month;

    cout << getDayOfWeek(day, month) << std::endl;

    return 0;
}
