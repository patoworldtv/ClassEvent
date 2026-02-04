#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


// CLASS TIME

class Time {
private:
    int hours;
    int minutes;

public:
    void set(int h, int m) {
        hours = h;

        if (m < 0) m = 0;
        if (m > 59) m = m % 60;

        minutes = m;
    }

    void print() const {
        cout << setw(2) << setfill('0') << hours << ":"
             << setw(2) << setfill('0') << minutes;
    }
};


// CLASS DATE

class Date {
private:
    int year, month, day;

    bool isLeap(int y) const {
        return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
    }

    int daysInMonth(int y, int m) const {
        switch (m) {
            case 2: return isLeap(y) ? 29 : 28;
            case 4: case 6: case 9: case 11: return 30;
            default: return 31;
        }
    }

public:
    void set(int y, int m, int d) {
        if (y < 1970) y = 1970;
        if (y > 2050) y = 2050;
        year = y;

        if (m < 1) m = 1;
        if (m > 12) m = 12;
        month = m;

        int maxDay = daysInMonth(year, month);
        if (d < 1) d = 1;
        if (d > maxDay) d = maxDay;
        day = d;
    }

    void print() const {
        cout << year << "-"
             << setw(2) << setfill('0') << month << "-"
             << setw(2) << setfill('0') << day;
    }
};


//        CLASS EVENT

class Event {
private:
    string title;
    Date date;
    Time startTime;
    Time endTime;

public:
    void setTitle(const string& t) {
        title = t;
    }

    void setDate(int y, int m, int d) {
        date.set(y, m, d);
    }

    void setStart(int h, int m) {
        startTime.set(h, m);
    }

    void setEnd(int h, int m) {
        endTime.set(h, m);
    }

    void print() const {
        cout << "Event: " << title << endl;
        cout << "Date: ";
        date.print();
        cout << endl;

        cout << "Start: ";
        startTime.print();
        cout << endl;

        cout << "End:   ";
        endTime.print();
        cout << endl;
    }
};

// =======================
//          MAIN
// =======================
int main() {
    // Demonstrate Time
    Time t;
    t.set(2, 75);
    t.print();
    cout << endl;

    // Demonstrate Date
    Date d;
    d.set(2025, 13, 40);
    d.print();
    cout << endl;

    // Demonstrate Event
    Event e;
    e.setTitle("Team Meeting");
    e.setDate(2025, 1, 2);
    e.setStart(9, 5);
    e.setEnd(10, 45);
    e.print();

    return 0;
}
