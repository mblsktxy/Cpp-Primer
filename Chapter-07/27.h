/*
 * Add the move, set, and display operations to your version of Screen. Test
 * your class by executing the following code:
 *     Screen myScreen(5, 5, ’X’);
 *     myScreen.move(4,0).set(’#’).display(cout);
 *     cout << "\n";
 *     myScreen.display(cout);
 *     cout << "\n";
 */

#ifndef CH07_27_H
#define CH07_27_H

#include <iostream>
#include <string>

using std::string;
using std::ostream;

class Screen {
public:
	using pos = string::size_type;

	Screen() = default;
	Screen(pos ht, pos wd): height(ht), width(wd), contents(ht*wd, ' ') { }
	Screen(pos ht, pos wd, char c): height(ht), width(wd), contents(ht*wd, c) { }

	char get() const { return contents[cursor]; }
	char get(pos r, pos c) const { return contents[r*width+c]; }	
	Screen &move(pos, pos);
	Screen &set(char);
	Screen &set(pos, pos, char);
	Screen &display(ostream &os) { do_display(os); return *this; }
	const Screen &display(ostream &os) const { do_display(os); return *this; }

private:
	void do_display(ostream &os) const { os << contents; }

private:
	pos cursor = 0;
	pos height = 0, width = 0;
	string contents;
};

inline Screen &Screen::move(pos r, pos c) {
	cursor = r * width + c;
	return *this;
}

inline Screen &Screen::set(char c) {
	contents[cursor] = c;
	return *this;
}

inline Screen &Screen::set(pos r, pos c, char ch) {
	contents[r*width+c] = ch;
	return *this;
}

#endif