#include <iostream>
using namespace std;

class Time {
    int hours, minutes, seconds;

public:
    Time(int h = 0, int m = 0, int s = 0) : hours(h), minutes(m), seconds(s) {}

    friend istream &operator>>(istream &input, Time &t) {
        cout << "Enter time (hours minutes seconds): ";
        input >> t.hours >> t.minutes >> t.seconds;
        return input;
    }

    friend ostream &operator<<(ostream &output, const Time &t) {
        output << t.hours << ":" << t.minutes << ":" << t.seconds;
        return output;
    }

    Time operator+(const Time &t) {
        int totalSeconds = seconds + t.seconds;
        int totalMinutes = minutes + t.minutes + totalSeconds / 60;
        int totalHours = hours + t.hours + totalMinutes / 60;

        return Time(totalHours % 24, totalMinutes % 60, totalSeconds % 60);
    }

    bool operator==(const Time &t) {
        return hours == t.hours && minutes == t.minutes && seconds == t.seconds;
    }
};

int main() {
    Time t1, t2, t3;
    cin >> t1 >> t2;
    t3 = t1 + t2;

    cout << "Sum of Times: " << t3 << endl;
    if (t1 == t2)
        cout << "Times are Equal" << endl;
    else
        cout << "Times are Not Equal" << endl;

    return 0;
}
