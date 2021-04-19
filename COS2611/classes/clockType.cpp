#include <iostream>
using namespace std;

class clockType {
	private:
		int hr, min, sec;

	public:
		clockType() {
			
		}

		~clockType() {
			
		}

		clockType(int hours, int minutes, int seconds) {
			hr = hours;
			min = minutes;		
			sec = seconds;
		}

		void setTime(int hours, int minutes, int seconds) {
			if((hours >= 0 && hours < 24) && (minutes >= 0 && minutes < 60) && (seconds >= 0 && seconds < 60)){
				hr = hours;
				min = minutes;		
				sec = seconds;
			} else {
				hr = 0;
				min = 0;		
				sec = 0;
			}		
		}

		void getTime(int &hours, int &minutes, int &seconds) const {
			hours = hr;
			minutes = min;
			seconds = sec;
		}

		void printTime() const {
			if(hr < 10) {
				cout << 0;
			}
			cout << hr << ':';
			
			if(min < 10) {
				cout << 0;
			}
			cout << min << ':';

			if(sec < 10) {
				cout << 0;
			}
			cout << sec << endl;
		}

		void incrementHours() {
			hr ++;
			if(hr > 23) {
				sec = 0;
			}
		}

		void incrementMinutes() {
			min ++;
			if(min > 59) {
				sec = 0;
			}
			incrementHours();
		}

		void incrementSeconds() {
			sec ++;
			if(sec > 59) {
				sec = 0;
			}
			incrementMinutes();
		}

		bool equalTime(const clockType &otherClock) const {
			return (otherClock.hr == hr && otherClock.min == min && otherClock.sec == sec);
		}
};