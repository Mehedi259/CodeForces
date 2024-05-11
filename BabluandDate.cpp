#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Date {
    int day;
    int month;
    int year;
};

Date convertToDate(const string& dateString) {
    Date date;
    sscanf(dateString.c_str(), "%d/%d/%d", &date.day, &date.month, &date.year);
    return date;
}

bool compareDates(const Date& date1, const Date& date2) {
    if (date1.year != date2.year)
        return date1.year < date2.year;
    if (date1.month != date2.month)
        return date1.month < date2.month;
    return date1.day < date2.day;
}

int main() {
    vector<Date> dates;
    string inputDate;

   // cout << "Enter dates in format DD/MM/YYYY (enter 'done' to finish):\n";
   

    while (true) {
        cin >> inputDate;

        dates.push_back(convertToDate(inputDate));
    }

    sort(dates.begin(), dates.end(), compareDates);

    cout << "Sorted dates:\n";
    for (const auto& date : dates) {
        cout << date.day << "/" << date.month << "/" << date.year << endl;
    }

    return 0;
}
