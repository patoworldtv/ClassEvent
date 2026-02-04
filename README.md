# Time, Date, and Event Classes in C++
This project implements three basic C++ classes  Time, Date, and Event  to demonstrate object‑oriented programming concepts such as encapsulation, validation, and composition.

This project demonstrates basic object-oriented programming in C++ by implementing three classes:

- **Time**
- **Date**
- **Event**

Each class includes validation logic, formatted output, and clear separation of responsibilities.

---

##  Class: Time

**Members:**
- `int hours`
- `int minutes`

**Features:**
- `set(int h, int m)`  
  Validates and corrects minutes (0–59).
- `print()`  
  Prints time in `HH:MM` format with leading zeros.

---

##  Class: Date

**Members:**
- `int year`
- `int month`
- `int day`

**Features:**
- `set(int y, int m, int d)`  
  Validates:
  - year: 1970–2050  
  - month: 1–12  
  - day: based on month length and leap years
- `print()`  
  Prints date in `YYYY-MM-DD` format.

---

##  Class: Event

**Members:**
- `string title`
- `Date date`
- `Time startTime`
- `Time endTime`

**Features:**
- `setTitle(string)`
- `setDate(int y, int m, int d)`
- `setStart(int h, int m)`
- `setEnd(int h, int m)`
- `print()`  
  Displays event title, date, start time, and end time.

---

##  Example Output

Time example: 02:15

Date example: 2025-12-31

Event example:
Event: Team Meeting
Date: 2025-01-02
Start: 09:05
End:   10:45

