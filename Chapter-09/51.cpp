/*
 * Write a class that has three unsigned members representing year, month, and
 * day. Write a constructor that takes a string representing a date. Your 
 * constructor should handle a variety of date formats, such as January 1, 1900,
 * 1/1/1900, Jan 1, 1900, and so on.
 */

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class Date {
private:
	unsigned year, month, day;

public:
	Date(const string &s) {		
		if (s.find_first_of("/") != string::npos) { // 1/1/1900
            month = stoi(s.substr(0, s.find_first_of("/")));
            day = stoi(s.substr(s.find_first_of("/")+1, s.find_last_of("/")-s.find_first_of("/")));
            year = stoi(s.substr(s.find_last_of("/")+1, 4));
        } else if (s.find_first_of(",") != string::npos) { // January 1, 1900 or Jan 1, 1900
            if (s.find("Jan") != string::npos)
                month = 1;
            else if (s.find("Feb") != string::npos)
                month = 2;
            else if (s.find("Mar") != string::npos)
                month = 3;
            else if (s.find("Apr") != string::npos)
                month = 4;
            else if (s.find("Mar") != string::npos)
                month = 5;
            else if (s.find("Jun") != string::npos)
                month = 6;
            else if (s.find("Jul") != string::npos)
                month = 7;
            else if (s.find("Aug") != string::npos)
                month = 8;
            else if (s.find("Sep") != string::npos)
                month = 9;
            else if (s.find("Oct") != string::npos)
                month = 10;
            else if (s.find("Nov") != string::npos)
                month = 11;
            else if (s.find("Dec") != string::npos)
                month = 12;
            string numbers{"0123456789"};
            day = stoi(s.substr(s.find_first_of(numbers)));
            year = stoi(s.substr(s.find_last_of(" ")+1));
        }
	}

    void print() {
        cout << "day: " << day << "\n" 
             << "month: " << month << "\n"
             << "year: " << year << endl;
    }
};

int main()
{
    Date date1("1/1/1900");
    Date date2("March 25, 2017");
    Date date3("Feb 22, 1993");

    date1.print();
    date2.print();
    date3.print();
    return 0;
}